
@interface PXInlineVideoStabilizationDiagnosticsViewController : PXVideoComparisonViewController {
    PXVideoStabilizeOperation * _exportOperation;
    NSOperationQueue * _operationQueue;
    <PXVideoStabilizeResult> * _result;
    PXVideoStabilizeOperation * _stabilizeOperation;
}

- (void).cxx_destruct;
- (void)_exportRecipe;
- (void)_handleStabilizeOperationCompletedWithCompletionHandler:(id /* block */)arg1;
- (id)_newStabilizeOperation;
- (id)extraAlertAction;
- (id)initWithInputAsset:(id)arg1;
- (id)inputVideoButtonsTitle;
- (void)invalidateInputAndVariantReferences;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareVariantVideoWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)radarComponentID;
- (id)radarComponentName;
- (id)radarComponentVersion;
- (id)radarTitle;
- (id)settings;
- (bool)useVariantVideoByDefaultInToggle;
- (id)variantVideoButtonsTitle;
- (id)variantVideoDescription;
- (void)viewDidLoad;

@end
