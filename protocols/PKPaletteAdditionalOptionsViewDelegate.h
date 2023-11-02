
@protocol PKPaletteAdditionalOptionsViewDelegate <NSObject>

@required

- (void)additionalOptionsView:(PKPaletteAdditionalOptionsView *)arg1 didToggleAutoHideOption:(bool)arg2;
- (void)additionalOptionsViewDidPressKeyboardButton:(PKPaletteAdditionalOptionsView *)arg1;
- (void)additionalOptionsViewDidPressReturnKeyButton:(PKPaletteAdditionalOptionsView *)arg1;
- (void)additionalOptionsViewDidPressTapToRadarButton:(PKPaletteAdditionalOptionsView *)arg1;
- (UIMenu *)keyboardSelectionMenuForAdditionalOptionsView:(PKPaletteAdditionalOptionsView *)arg1;

@end
