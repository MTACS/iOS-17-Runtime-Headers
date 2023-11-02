
@protocol WKFormPeripheral

@required

- (UIView *)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (bool)isEditing;

@optional

- (bool)handleKeyEvent:(UIEvent *)arg1;
- (void)setSingleTapShouldEndEditing:(bool)arg1;
- (bool)singleTapShouldEndEditing;

@end
