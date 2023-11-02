
@protocol PKPaletteViewInternalDelegate <NSObject, PKPaletteViewStateObserving>

@required

- (void)paletteViewContentSizeDidChange:(PKPaletteView *)arg1;
- (void)paletteViewReturnKeyTypeDidChange:(PKPaletteView *)arg1;
- (void)paletteViewShowFeedbackForToolChange:(PKPaletteView *)arg1;

@end
