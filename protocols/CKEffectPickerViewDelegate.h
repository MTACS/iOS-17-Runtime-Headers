
@protocol CKEffectPickerViewDelegate

@required

- (void)effectPickerViewDidFinishAnimatingIn:(CKEffectPickerView *)arg1;
- (void)effectSelectedWithIdentifier:(NSString *)arg1;
- (void)touchUpInsideCloseButton;

@end
