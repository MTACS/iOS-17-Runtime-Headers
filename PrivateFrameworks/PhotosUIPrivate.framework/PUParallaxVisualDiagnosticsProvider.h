
@interface PUParallaxVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider> {
    PHAsset * _asset;
    PFWallpaperCompoundLayerStack * _compoundLayerStack;
    <PISegmentationItem> * _segmentationItem;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) PFWallpaperCompoundLayerStack *compoundLayerStack;
@property (nonatomic, retain) <PISegmentationItem> *segmentationItem;

- (void).cxx_destruct;
- (void)_addCoverPage:(id)arg1;
- (void)_addImagingGatingScores:(id)arg1;
- (void)_addLayerStack:(id)arg1;
- (void)_addLayerStackProperties:(id)arg1;
- (void)_addLayersTable:(id)arg1;
- (void)_addSegmentationItemProperties:(id)arg1;
- (void)_drawLayer:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(id)arg3;
- (void)addVisualDiagnosticsToContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)asset;
- (id)compoundLayerStack;
- (id)segmentationItem;
- (void)setAsset:(id)arg1;
- (void)setCompoundLayerStack:(id)arg1;
- (void)setSegmentationItem:(id)arg1;

@end
