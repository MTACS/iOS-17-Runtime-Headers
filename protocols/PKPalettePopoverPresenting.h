
@protocol PKPalettePopoverPresenting <NSObject>

@required

- (bool)isPalettePresentingPopover;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })palettePopoverLayoutMargins;
- (NSArray *)palettePopoverPassthroughViews;
- (unsigned long long)palettePopoverPermittedArrowDirections;
- (UIViewController *)palettePopoverPresentingController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })palettePopoverSourceRectToPresentViewController:(UIViewController *)arg1;
- (UIView *)palettePopoverSourceView;
- (void)setPalettePopoverPresentingController:(UIViewController *)arg1;
- (bool)shouldPalettePresentPopover;
- (void)updatePalettePopover:(UIViewController *)arg1;
- (bool)wantsCustomPalettePopoverPresentationSource;

@end
