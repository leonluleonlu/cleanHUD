//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ControlStrip.FunctionRowViewController.h"

@class NSString, _TtC12ControlStrip16ControlStripFull, _TtC12ControlStrip16ControlStripMini;

@interface ControlStrip.ControlStrip : ControlStrip.FunctionRowViewController
{
    // Error parsing type: , name: full
    // Error parsing type: , name: mini
    // Error parsing type: , name: miniPosition
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: isAnimating
    // Error parsing type: , name: expectedExpanded
    // Error parsing type: , name: onNextLayout
}

+ (double)animationDuration;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)setPresence:(id)arg1;
- (void)viewWillLayout;
@property(nonatomic, copy) CDUnknownBlockType onNextLayout; // @synthesize onNextLayout;
@property(nonatomic, readonly) NSString *stateDescription;
@property(nonatomic) BOOL expectedExpanded; // @synthesize expectedExpanded;
@property(nonatomic) BOOL expanded; // @synthesize expanded=isExpanded;
- (BOOL)isExpanded;
- (void)loadView;
@property(nonatomic, readonly) _TtC12ControlStrip16ControlStripMini *mini; // @synthesize mini;
@property(nonatomic, readonly) _TtC12ControlStrip16ControlStripFull *full; // @synthesize full;

@end
