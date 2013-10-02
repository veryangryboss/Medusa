//
//  VirtualMachinesEntityModel.h
//  Medusa
//
//  Created by Giancarlo Mariot on 12/06/2012.
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

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RelationshipVirtualMachinesDiskFilesEntityModel, RomFilesEntityModel, EmulatorsEntityModel;

@interface VirtualMachinesEntityModel : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * uniqueName;
@property (nonatomic, retain) NSNumber * macModel;
@property (nonatomic, retain) NSNumber * memory;
@property (nonatomic, retain) NSNumber * processorType;

@property (nonatomic, retain) NSNumber * displayColourDepth;
@property (nonatomic, retain) NSNumber * displayDynamicUpdate;
@property (nonatomic, retain) NSNumber * displayFrameSkip;
@property (nonatomic, retain) NSNumber * displayHeight;
@property (nonatomic, retain) NSNumber * displayWidth;
@property (nonatomic, retain) NSNumber * fullScreen;

@property (nonatomic, retain) NSNumber * fpuEnabled;
@property (nonatomic, retain) NSNumber * jitCacheSize;
@property (nonatomic, retain) NSNumber * jitEnabled;
@property (nonatomic, retain) NSNumber * lazyCacheEnabled;

@property (nonatomic, retain) NSNumber * network;
@property (nonatomic, retain) NSNumber * networkUDP;
@property (nonatomic, retain) NSNumber * networkUDPPort;
@property (nonatomic, retain) NSNumber * shareEnabled;
@property (nonatomic, retain) NSString * sharedFolder;
@property (nonatomic, retain) NSNumber * useDefaultShare;

@property (nonatomic, retain) NSSet    * drives;
@property (nonatomic, retain) RomFilesEntityModel  * romFile;
@property (nonatomic, retain) EmulatorsEntityModel * emulator;

@end

@interface VirtualMachinesEntityModel (CoreDataGeneratedAccessors)

- (void)addDrivesObject:(RelationshipVirtualMachinesDiskFilesEntityModel *)value;
- (void)removeDrivesObject:(RelationshipVirtualMachinesDiskFilesEntityModel *)value;
- (void)addDrives:(NSSet *)values;
- (void)removeDrives:(NSSet *)values;
- (NSNumber *)nextDiskIndex;

- (NSNumber *)icon;
- (BOOL)canRun;

@end