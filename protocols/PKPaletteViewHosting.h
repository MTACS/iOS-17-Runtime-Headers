
@protocol PKPaletteViewHosting <NSObject>

@required

- (UIView *)hostingView;
- (bool)isPaletteDragging;
- (bool)isPaletteVisible;
- (bool)isPaletteVisualStateMinimized;
- (void)setPaletteVisible:(bool)arg1;
- (PKPaletteTooltipPresentationHandle *)tooltipPresentationHandle;

@end
