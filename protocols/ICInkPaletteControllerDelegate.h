
@protocol ICInkPaletteControllerDelegate <NSObject>

@required

- (void)inkPalette:(ICInkPaletteController *)arg1 didChangeColor:(UIColor *)arg2;
- (void)inkPalette:(ICInkPaletteController *)arg1 didChangePalettePositionStart:(long long)arg2 end:(long long)arg3;
- (void)inkPalette:(ICInkPaletteController *)arg1 didPickTool:(PKTool *)arg2;
- (bool)inkPalette:(ICInkPaletteController *)arg1 shouldResignFirstResponder:(UIResponder *)arg2;
- (UIView *)inkPaletteButtonView:(ICInkPaletteController *)arg1;
- (void)inkPaletteDidToggleRuler:(ICInkPaletteController *)arg1 isRulerActive:(bool)arg2;
- (NSUndoManager *)inkPaletteUndoManager:(ICInkPaletteController *)arg1;

@optional

- (void)inkPalette:(ICInkPaletteController *)arg1 didHideAnimated:(bool)arg2;
- (void)inkPalette:(ICInkPaletteController *)arg1 didShowAnimated:(bool)arg2;
- (void)inkPalette:(ICInkPaletteController *)arg1 willHideAnimated:(bool)arg2;
- (void)inkPalette:(ICInkPaletteController *)arg1 willShowAnimated:(bool)arg2;
- (void)inkPaletteDidHideWithDoneButton:(ICInkPaletteController *)arg1;

@end
