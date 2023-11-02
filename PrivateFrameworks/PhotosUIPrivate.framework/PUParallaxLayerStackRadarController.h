
@interface PUParallaxLayerStackRadarController : NSObject <PXTapToRadarDiagnosticProvider> {
    PHAsset * _asset;
    NSURL * _baseTemporaryURL;
    PFWallpaperCompoundLayerStack * _compoundLayerStack;
    PFPosterConfiguration * _posterConfiguration;
    PFPosterDescriptor * _posterDescriptor;
    NSURL * _screenshotURL;
    <PISegmentationItem> * _segmentationItem;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) NSURL *baseTemporaryURL;
@property (nonatomic, retain) PFWallpaperCompoundLayerStack *compoundLayerStack;
@property (nonatomic, readonly) PFPosterConfiguration *posterConfiguration;
@property (nonatomic, readonly) PFPosterDescriptor *posterDescriptor;
@property (nonatomic, retain) NSURL *screenshotURL;
@property (nonatomic, retain) <PISegmentationItem> *segmentationItem;

+ (void)loadLayerStackForAsset:(id)arg1 completion:(id /* block */)arg2;
+ (id)visualDiagnosticsActionForAsset:(id)arg1 compoundLayerStack:(id)arg2 segmentationItem:(id)arg3 fromViewController:(id)arg4 actionBeingHandler:(id /* block */)arg5 actionEndHandler:(id /* block */)arg6;
+ (id)visualDiagnosticsConfigurationForAsset:(id)arg1 compoundLayerStack:(id)arg2 segmentationItem:(id)arg3;

- (void).cxx_destruct;
- (id)asset;
- (id)baseTemporaryURL;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)compoundLayerStack;
- (id)initWithAsset:(id)arg1 compoundLayerStack:(id)arg2 segmentationItem:(id)arg3 posterDescriptor:(id)arg4 posterConfiguration:(id)arg5;
- (id)posterConfiguration;
- (id)posterDescriptor;
- (void)saveDebugLayerStack:(id)arg1 toFileName:(id)arg2 item:(id)arg3 completion:(id /* block */)arg4;
- (id)screenshotURL;
- (id)segmentationItem;
- (void)setAsset:(id)arg1;
- (void)setCompoundLayerStack:(id)arg1;
- (void)setScreenshotURL:(id)arg1;
- (void)setSegmentationItem:(id)arg1;

@end
