//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KeyboardState;

@interface KeyboardStateMachine : NSObject
{
    BOOL _keyBrIncKeyDown;
    BOOL _keyBrDecKeyDown;
    BOOL _keyBrMuteKeyDown;
    KeyboardState *_currentState;
    int _eventType;
}

+ (id)alloc;
+ (void)releaseSingleton;
+ (id)getSingleton;
@property int eventType; // @synthesize eventType=_eventType;
@property(retain) KeyboardState *currentState; // @synthesize currentState=_currentState;
@property BOOL keyBrMuteKeyDown; // @synthesize keyBrMuteKeyDown=_keyBrMuteKeyDown;
@property BOOL keyBrDecKeyDown; // @synthesize keyBrDecKeyDown=_keyBrDecKeyDown;
@property BOOL keyBrIncKeyDown; // @synthesize keyBrIncKeyDown=_keyBrIncKeyDown;
- (void)powerChanged:(id)arg1;
- (void)handleSleepEvent:(BOOL)arg1;
- (void)handleKeyEvent:(int)arg1 shift:(BOOL)arg2 control:(BOOL)arg3 option:(BOOL)arg4 command:(BOOL)arg5;
- (void)suspendKeyboardALS:(BOOL)arg1;
- (void)toggleMute;
- (void)changeKeyboardBy:(int)arg1 type:(int)arg2;
- (void)displayKeyboardPrefs;
- (void)displayOSD;
- (long long)getGraphicType;
- (void)dealloc;
- (id)init;

@end
