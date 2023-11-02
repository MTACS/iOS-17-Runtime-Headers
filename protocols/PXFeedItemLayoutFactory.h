
@protocol PXFeedItemLayoutFactory <NSObject>

@required

- (PXGLayout *)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDataSource:(PXSectionedDataSource *)arg2 viewModel:(PXFeedViewModel *)arg3 initialReferenceSize:(struct CGSize { double x1; double x2; })arg4 thumbnailAsset:(out id*)arg5;

@optional

- (void)collectTapToRadarDiagnosticsForItemLayout:(PXGLayout *)arg1 indexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 intoContainer:(id <PXTapToRadarDiagnosticContainer>)arg3;
- (void)configureItemLayout:(PXGLayout *)arg1 forChangedItemFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 inDataSource:(PXSectionedDataSource *)arg3 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 inDataSource:(PXSectionedDataSource *)arg5;
- (unsigned int)decorationOverlayAnchorSpriteIndexForItemLayout:(PXGLayout *)arg1;
- (<PXGItemPlacementController> *)itemPlacementControllerForItemReference:(id)arg1 itemLayout:(PXGLayout *)arg2;
- (void)presentMenuForItemLayout:(PXGLayout *)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 inView:(PXGView *)arg3;
- (void)setItemLayout:(PXGLayout *)arg1 isHovered:(bool)arg2;
- (void)setItemLayout:(PXGLayout *)arg1 isTouched:(bool)arg2;
- (void)setItemLayout:(PXGLayout *)arg1 shouldAutoplayContent:(bool)arg2 videoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (bool)shouldReloadItemLayout:(PXGLayout *)arg1 forChangedItemFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 inDataSource:(PXSectionedDataSource *)arg3 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 inDataSource:(PXSectionedDataSource *)arg5;

@end
