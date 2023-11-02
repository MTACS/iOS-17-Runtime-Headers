
@interface PXStoryVisualDiagnosticsProviderHelper : NSObject {
    PXStoryConfiguration * _configuration;
    double  _contentsScale;
    <PXStoryDisplayAssetCroppingContext> * _croppingContext;
    PXMediaProvider * _mediaProvider;
}

@property (nonatomic, readonly) PXStoryConfiguration *configuration;
@property (nonatomic, readonly) double contentsScale;
@property (nonatomic, readonly) <PXStoryDisplayAssetCroppingContext> *croppingContext;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;

- (void).cxx_destruct;
- (id)configuration;
- (double)contentsScale;
- (id)croppingContext;
- (void)drawAsset:(id)arg1 contentsRect:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(id)arg4;
- (void)drawAsset:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(id)arg3;
- (void)drawCropRectsForAsset:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(id)arg3 configuration:(id /* block */)arg4;
- (void)drawSegmentOfTimeline:(id)arg1 withIdentifier:(long long)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(id)arg4;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)mediaProvider;

@end
