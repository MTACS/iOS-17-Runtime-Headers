
@protocol PKPaletteMoreOptionsViewControllerDelegate <NSObject>

@required

- (void)moreOptionsViewControllerDidToggleAutoHide:(PKPaletteMoreOptionsViewController *)arg1;
- (void)moreOptionsViewControllerDidToggleFingerDraws:(PKPaletteMoreOptionsViewController *)arg1;

@optional

- (void)moreOptionsViewControllerDidSelectOpenPencilSettings:(PKPaletteMoreOptionsViewController *)arg1;
- (void)moreOptionsViewControllerDidSelectTapToRadar:(PKPaletteMoreOptionsViewController *)arg1;
- (void)moreOptionsViewControllerDidToggleHoverPreview:(PKPaletteMoreOptionsViewController *)arg1;

@end
