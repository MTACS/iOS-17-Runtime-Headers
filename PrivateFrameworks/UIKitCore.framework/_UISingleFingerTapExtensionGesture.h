
@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer {
    NSMutableSet * _trackedEvents;
}

- (void).cxx_destruct;
- (bool)_gestureCanBeginWithEvent:(id)arg1;
- (long long)_modifierFlags;
- (void)_resetGestureRecognizer;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
