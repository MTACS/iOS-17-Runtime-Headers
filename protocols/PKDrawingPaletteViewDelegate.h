
@protocol PKDrawingPaletteViewDelegate <PKPaletteViewPrivateDelegate>

@optional

- (void)paletteView:(PKDrawingPaletteView *)arg1 didChangeColor:(UIColor *)arg2;
- (void)paletteView:(PKDrawingPaletteView *)arg1 didSelectTool:(PKTool *)arg2 atIndex:(unsigned long long)arg3;
- (bool)paletteView:(PKPaletteView *)arg1 shouldChangeSelectedToolColor:(UIColor *)arg2;
- (UIResponder *)paletteViewCurrentFirstResponder:(PKDrawingPaletteView *)arg1;
- (UIColor *)paletteViewCurrentSelectionColor:(PKDrawingPaletteView *)arg1;
- (void)paletteViewDidToggleRuler:(PKDrawingPaletteView *)arg1;
- (void)paletteViewFirstResponderDidUpdate:(PKDrawingPaletteView *)arg1;
- (void)paletteViewToolsDidChange:(PKDrawingPaletteView *)arg1;
- (bool)shouldHandlePencilInteractionWhenNotVisible:(PKDrawingPaletteView *)arg1;
- (bool)toggleLassoToolEditingViewColorPickerForPaletteView:(PKDrawingPaletteView *)arg1;

@end
