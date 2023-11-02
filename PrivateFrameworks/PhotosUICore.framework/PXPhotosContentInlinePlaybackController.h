
@interface PXPhotosContentInlinePlaybackController : PXGridInlinePlaybackController <PXGDisplayAssetPixelBufferSourcesProvider> {
    void delegate;
    void numberOfItemsToPlay;
    void scrollViewSpeedometer;
    void scrollViewSpeedometerObservation;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } criticallyVisibleEdgeInsets;
@property (nonatomic, readonly) <PXDisplayAsset> *currentHoveredDisplayAsset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentVisibleRect;
@property (nonatomic) <PXPhotosContentInlinePlaybackControllerDelegate> *delegate;
@property (nonatomic) bool isContentViewVisible;
@property (nonatomic, readonly) long long maxNumberOfPlayingItems;
@property (nonatomic) long long numberOfItemsToPlay;
@property (nonatomic, retain) PXScrollViewSpeedometer *scrollViewSpeedometer;
@property (nonatomic, readonly) bool shouldEnablePlayback;

- (void).cxx_destruct;
- (bool)canPlayAsset:(id)arg1;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })criticallyVisibleEdgeInsets;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentVisibleRect;
- (id)delegate;
- (id)filterSortedRecordsToPlay:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPlaybackRecord:(id)arg1 minPlayableSize:(struct CGSize { double x1; double x2; }*)arg2;
- (id)init;
- (bool)isContentViewVisible;
- (bool)isDisplayAssetEligibleForAutoPlayback:(id)arg1;
- (long long)maxNumberOfPlayingItems;
- (long long)numberOfItemsToPlay;
- (id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)arg1;
- (id)scrollViewSpeedometer;
- (void)setDelegate:(id)arg1;
- (void)setIsContentViewVisible:(bool)arg1;
- (void)setNumberOfItemsToPlay:(long long)arg1;
- (void)setScrollViewSpeedometer:(id)arg1;
- (bool)shouldDisplayPreviousNonNullPixelBufferForPixelBufferSource:(id)arg1;
- (bool)shouldEnablePlayback;

@end
