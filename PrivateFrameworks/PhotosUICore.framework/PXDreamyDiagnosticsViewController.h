
@interface PXDreamyDiagnosticsViewController : PXVideoComparisonViewController {
    PHAsset * _variantAsset;
    int  _variantVideoRequestID;
    NSURL * _variantVideoURL;
}

@property (nonatomic, retain) PHAsset *variantAsset;
@property (nonatomic) int variantVideoRequestID;
@property (nonatomic, retain) NSURL *variantVideoURL;

- (void).cxx_destruct;
- (id)_loadAndCacheVariantAssetWithError:(id*)arg1;
- (void)_loadAndCacheVariantVideoURLFromAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)inputVideoButtonsTitle;
- (void)invalidateInputAndVariantReferences;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareVariantVideoWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)radarComponentID;
- (id)radarComponentName;
- (id)radarComponentVersion;
- (id)radarTitle;
- (void)setVariantAsset:(id)arg1;
- (void)setVariantVideoRequestID:(int)arg1;
- (void)setVariantVideoURL:(id)arg1;
- (bool)useVariantVideoByDefaultInToggle;
- (id)variantAsset;
- (id)variantVideoButtonsTitle;
- (id)variantVideoDescription;
- (int)variantVideoRequestID;
- (id)variantVideoURL;
- (void)viewDidLoad;

@end
