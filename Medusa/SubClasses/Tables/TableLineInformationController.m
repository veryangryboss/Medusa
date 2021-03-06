//
//  InformationModel.m
//  Medusa
//
//  Created by Giancarlo Mariot on 29/02/2012.
//  Copyright (c) 2012 Giancarlo Mariot. All rights reserved.
//
//------------------------------------------------------------------------------
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  - Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//  - Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//
//------------------------------------------------------------------------------

#import "TableLineInformationController.h"

@implementation TableLineInformationController

@synthesize lineTitle;
@synthesize lineIcon;

- (void)dealloc {
    [lineTitle release];
    [lineIcon release];
    [super dealloc];
}

- (id)init {
    self = [super init];
    if (self) {
        lineTitle = [[NSString alloc] initWithFormat:@"None"];
        lineIcon = [NSImage imageNamed:@"GenericQuestionMarkIcon.png"];
    }
    return self;
}

- (id)initWithTitle:(NSString*)newTitle andIcon:(NSString*)newImage {
    self = [super init];
    if (self) {
        lineTitle = [[NSString alloc] initWithString:newTitle];
        lineIcon = [NSImage imageNamed:newImage];
    }
    return self;
}

@end
