
@protocol CKEffectPickerViewControllerProtocol

@required

- (<CKEffectPickerViewControllerDelegate> *)delegate;
- (void)dismissViewControllerKeepingSideMount:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIView *)effectPreviewOverlayView;
- (void)handleTouchMoved:(struct CGPoint { double x1; double x2; })arg1;
- (void)handleTouchUp:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isInlineReply;
- (void)presentPicker;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)setDelegate:(id <CKEffectPickerViewControllerDelegate>)arg1;
- (void)setEffectPreviewOverlayView:(UIView *)arg1;
- (void)setIsInlineReply:(bool)arg1;
- (void)setShowingInStandAloneWindow:(bool)arg1;
- (void)updateColor:(BOOL)arg1;
- (void)updateHintTransition:(double)arg1;

@end
