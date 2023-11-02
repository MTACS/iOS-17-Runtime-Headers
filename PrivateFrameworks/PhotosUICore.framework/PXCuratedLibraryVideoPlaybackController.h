
@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider> {
    PXCuratedLibraryLayout * _curatedLibraryLayout;
    long long  _newZoomLevel;
    long long  _presentedZoomLevel;
    PXCuratedLibraryViewModel * _viewModel;
}

@property (nonatomic, retain) PXCuratedLibraryLayout *curatedLibraryLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canPlayVideosInZoomLevel:(long long)arg1;
- (bool)canPlayAsset:(id)arg1;
- (bool)canProvideGeometriesForRecords;
- (bool)canUpdatePlayingRecords;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (id)curatedLibraryLayout;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentVisibleRect;
- (void)didUpdatePlayingRecords;
- (void)enumerateRectDiagnosticsForLayout:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)filterSortedRecordsToPlay:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize { double x1; double x2; }*)arg2;
- (id)init;
- (id)initViewViewModel:(id)arg1;
- (long long)maxNumberOfPlayingItems;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)arg1;
- (void)setCuratedLibraryLayout:(id)arg1;
- (bool)shouldDisplayPreviousNonNullPixelBufferForPixelBufferSource:(id)arg1;
- (bool)shouldEnablePlayback;

@end
