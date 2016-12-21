//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EjectServices : NSObject
{
    struct __DASession *_ESDiskArbSession;
    struct __CFRunLoop *_FSRunLoop;
    char _driveEjecting[3];
}

+ (id)alloc;
+ (void)stopSingleton;
+ (void)releaseSingleton;
+ (id)getSingleton;
- (int)getB14Drives:(unsigned int)arg1 driveRefArray:(unsigned int *)arg2;
- (BOOL)B14HasMedia;
- (void)ejectB14Drives;
- (int)countB14Drives;
- (void)ejectAllODSVolumes;
- (void)ejectODSVolume:(unsigned int)arg1;
- (int)countODSVolumes;
- (void)ejectDriveWithPosition:(unsigned int)arg1;
- (void)ejectDrive:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (unsigned int)getDrivePositionSATA:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (unsigned int)getDrivePositionLegacy:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (unsigned int)getDrivePosition:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (unsigned char)getDriveTrayState:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (unsigned int)getDriveTrayFlags:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (unsigned int)getDriveType:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (void)disposeDriveReference:(unsigned int)arg1 driveRef:(unsigned int)arg2;
- (unsigned int)newDriveReference:(unsigned int)arg1 drivePosition:(unsigned int)arg2;
- (int)getInternalOpticalDrives:(unsigned int)arg1 driveRefArray:(unsigned int *)arg2;
- (BOOL)internalOpticalDriveIsSlotLoad:(int)arg1;
- (int)countInternalOpticalDrives;
- (BOOL)internalOpticalDrivesHaveMedia:(int)arg1;
- (void)handleEjectODSEvent:(id)arg1;
- (void)handleEjectExternalEvent:(id)arg1;
- (void)handleEjectSecondaryEvent:(id)arg1;
- (void)handleEjectPrimaryEvent:(id)arg1;
- (BOOL)shouldEject;
- (void)handleEjectKeyWithControl:(BOOL)arg1 command:(BOOL)arg2 option:(BOOL)arg3 shift:(BOOL)arg4 screenIsLocked:(BOOL)arg5;
- (void)stop;
- (void)start;
- (id)init;

@end
