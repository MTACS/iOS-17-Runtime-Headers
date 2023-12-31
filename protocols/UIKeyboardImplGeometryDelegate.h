
@protocol UIKeyboardImplGeometryDelegate

@required

- (bool)canDismiss;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(bool)arg2;
- (bool)isActive;
- (bool)isAutomatic;
- (bool)isMinimized;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(bool)arg2;
- (void)setMinimized:(bool)arg1;
- (bool)shouldSaveMinimizationState;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;

@end
