
@protocol PKPaletteControllerDelegate <NSObject>

@required

- (void)paletteControllerFloatingKeyboardWillHide:(PKPaletteController *)arg1;
- (void)paletteControllerFloatingKeyboardWillShow:(PKPaletteController *)arg1;

@optional

- (bool)paletteController:(PKPaletteController *)arg1 shouldOverridePaletteViewTraitCollectionTo:(UITraitCollection *)arg2;

@end
