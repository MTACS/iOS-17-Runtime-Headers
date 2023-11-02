
@protocol PKToolPickerObserverPrivate <PKToolPickerObserver>

@optional

- (void)_toolPicker:(PKToolPicker *)arg1 didChangeColor:(UIColor *)arg2;
- (void)_toolPicker:(PKToolPicker *)arg1 startEditingOpacityWithAccessoryView:(UIView *)arg2;
- (void)_toolPickerDidChangePosition:(PKToolPicker *)arg1;
- (void)_toolPickerDidChangePosition:(PKToolPicker *)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (void)_toolPickerDidChangeScaleFactor:(PKToolPicker *)arg1;
- (void)_toolPickerDidInvokeDoneAction:(PKToolPicker *)arg1;
- (void)_toolPickerVisibilityDidChange:(PKToolPicker *)arg1 isAnimationFinished:(bool)arg2;

@end
