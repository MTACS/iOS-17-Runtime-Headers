
@protocol PKTextInputPaletteControllerDelegate <NSObject>

@required

- (UIView *)paletteControllerContainerView:(PKTextInputPaletteController *)arg1;
- (PKTextInputDebugSharpenerLog *)paletteControllerDebugSharpenerLog:(PKTextInputPaletteController *)arg1;
- (void)textInputPaletteControllerFloatingKeyboardWillHide:(PKTextInputPaletteController *)arg1;
- (void)textInputPaletteControllerFloatingKeyboardWillShow:(PKTextInputPaletteController *)arg1;

@end
