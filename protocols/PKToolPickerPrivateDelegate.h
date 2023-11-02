
@protocol PKToolPickerPrivateDelegate <NSObject>

@optional

- (UIBarButtonItem *)_colorPickerPopoverPresentationBarButtonItem:(PKToolPicker *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_colorPickerPopoverPresentationSourceRect:(PKToolPicker *)arg1;
- (UIView *)_colorPickerPopoverPresentationSourceView:(PKToolPicker *)arg1;
- (void)_toggleLassoToolEditingViewColorPickerForToolPicker:(PKToolPicker *)arg1;
- (bool)_toolPicker:(PKToolPicker *)arg1 shouldChangeSelectedToolColor:(UIColor *)arg2;
- (void)_toolPicker:(PKToolPicker *)arg1 shouldSetVisible:(bool)arg2;
- (UIColor *)_toolPickerCurrentSelectionColor:(PKToolPicker *)arg1;
- (NSUndoManager *)_toolPickerUndoManager:(PKToolPicker *)arg1;

@end
