
@interface _UIFocusItemFrameReporter : NSObject {
    bool  _enabled;
    UIFocusSystem * _focusSystem;
    NSObject<OS_dispatch_source> * _focusedFrameUpdateTimer;
    bool  _hasStagedFocusFrameUpdate;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) UIFocusSystem *focusSystem;

- (void).cxx_destruct;
- (void)_cancelRepeatingFrameUpdate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_globalFrameForFocusedItemInSystem:(id)arg1;
- (bool)_rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 differsFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 lowerThreshold:(double)arg3 upperThreshold:(double)arg4;
- (void)_reportFocusFrameForCurrentlyFocusedItem;
- (void)_reportFocusFrameUpdateForGlobalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_scheduleRepeatingFrameUpdate;
- (id)focusSystem;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setFocusSystem:(id)arg1;

@end
