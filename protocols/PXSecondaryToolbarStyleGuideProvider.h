
@protocol PXSecondaryToolbarStyleGuideProvider <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarContentInsets:(PXSecondaryToolbarController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarPadding:(PXSecondaryToolbarController *)arg1;
- (long long)secondaryToolbarControllerToolbarPlacement:(PXSecondaryToolbarController *)arg1;
- (bool)secondaryToolbarControllerToolbarRenderedExternally:(PXSecondaryToolbarController *)arg1;
- (struct CGSize { double x1; double x2; })secondaryToolbarControllerToolbarSize:(PXSecondaryToolbarController *)arg1;
- (bool)secondaryToolbarControllerWantsToolbarVisible:(PXSecondaryToolbarController *)arg1;

@end
