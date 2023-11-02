
@interface PKToolPickerPaletteViewDelegateProxy : NSObject <PKDrawingPaletteViewDelegate> {
    PKToolPicker * _toolPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKToolPicker *toolPicker;

- (void).cxx_destruct;
- (id)initWithToolPicker:(id)arg1;
- (void)paletteView:(id)arg1 didChangeColor:(id)arg2;
- (void)paletteView:(id)arg1 didSelectTool:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)paletteView:(id)arg1 shouldChangeSelectedToolColor:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paletteViewColorPickerPopoverPresentationSourceRect:(id)arg1;
- (id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg1;
- (id)paletteViewCurrentFirstResponder:(id)arg1;
- (id)paletteViewCurrentSelectionColor:(id)arg1;
- (void)paletteViewDidChangePosition:(id)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (void)paletteViewDidChangeScaleFactor:(id)arg1;
- (void)paletteViewDidChangeTraitCollection:(id)arg1;
- (void)paletteViewDidToggleRuler:(id)arg1;
- (void)paletteViewFirstResponderDidUpdate:(id)arg1;
- (void)paletteViewToolsDidChange:(id)arg1;
- (id)paletteViewUndoManager:(id)arg1;
- (bool)shouldHandlePencilInteractionWhenNotVisible:(id)arg1;
- (bool)toggleLassoToolEditingViewColorPickerForPaletteView:(id)arg1;
- (id)toolPicker;

@end
