
@protocol CKEffectPickerViewControllerDelegate

@required

- (void)effectPickerViewController:(id <CKEffectPickerViewControllerProtocol>)arg1 effectWithIdentifierSelected:(NSString *)arg2;
- (void)effectPickerViewControllerClose:(id <CKEffectPickerViewControllerProtocol>)arg1;
- (void)effectPickerViewControllerClose:(id <CKEffectPickerViewControllerProtocol>)arg1 keepingSideMountContainer:(bool)arg2;
- (UIViewController *)effectsPresenterViewController;

@end
