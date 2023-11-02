
@interface ICWidget : NSObject

@property (nonatomic) bool objc_reloadsTimelinesAutomatically;
@property (nonatomic) bool reloadsTimelinesAutomatically;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)sharedWidget;

- (void)reloadTimelineForKind:(id)arg1 reason:(id)arg2;
- (void)reloadTimelinesWithReason:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (bool)hidesObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)objc_reloadsTimelinesAutomatically;
- (bool)reloadsTimelinesAutomatically;
- (void)setObjc_reloadsTimelinesAutomatically:(bool)arg1;
- (void)setReloadsTimelinesAutomatically:(bool)arg1;

@end
