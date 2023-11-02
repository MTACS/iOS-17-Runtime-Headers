
@interface PXStoryMemoryFeedItemLayoutFactory : NSObject <PXFeedItemLayoutFactory> {
    long long  layoutKind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutKind;
@property (readonly) Class superclass;

- (void)collectTapToRadarDiagnosticsForItemLayout:(id)arg1 indexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 intoContainer:(id)arg3;
- (id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDataSource:(id)arg2 viewModel:(id)arg3 initialReferenceSize:(struct CGSize { double x1; double x2; })arg4 thumbnailAsset:(out id*)arg5;
- (id)itemPlacementControllerForItemReference:(id)arg1 itemLayout:(id)arg2;
- (long long)layoutKind;
- (void)setItemLayout:(id)arg1 isHovered:(bool)arg2;
- (void)setItemLayout:(id)arg1 isTouched:(bool)arg2;
- (void)setItemLayout:(id)arg1 shouldAutoplayContent:(bool)arg2 videoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)setLayoutKind:(long long)arg1;
- (bool)shouldReloadItemLayout:(id)arg1 forChangedItemFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 inDataSource:(id)arg3 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 inDataSource:(id)arg5;

@end
