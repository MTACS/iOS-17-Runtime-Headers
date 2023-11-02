
@interface PXPhotosDetailsInlinePlaybackController : PXGridInlinePlaybackController {
    <PXPhotosDetailsInlinePlaybackControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _recordCreationQueue;
    PXTilingController * _tilingController;
}

@property (nonatomic) <PXPhotosDetailsInlinePlaybackControllerDelegate> *delegate;
@property (nonatomic, readonly) PXTilingController *tilingController;

- (void).cxx_destruct;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })_currentTileIdentifierForRecord:(id)arg1;
- (bool)_isRecognizedTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (bool)canPlayAsset:(id)arg1;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void)checkOutTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentVisibleRect;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize { double x1; double x2; }*)arg2;
- (id)init;
- (id)initWithTilingController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldEnablePlayback;
- (id)tilingController;
- (void)updatePlaybackEnabled;

@end
