
@protocol PKPaletteColorPickerContainerViewDelegate <NSObject>

@optional

- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 didDismissInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;
- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 didPresentInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;
- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 willDismissInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;
- (void)colorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 willPresentInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg2;

@end
