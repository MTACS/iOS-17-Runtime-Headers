
@interface PUOneUpVisualImageAnalyzingController : NSObject <PUBrowsingViewModelChangeObserver> {
    PUBrowsingViewModel * _browsingViewModel;
    NSObject<OS_dispatch_queue> * _loadVideoFrameQueue;
    PXVisualIntelligenceManager * _visualImageManager;
}

@property (nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadVideoFrameQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXVisualIntelligenceManager *visualImageManager;

+ (void)_setVisualImageAnalysis:(id)arg1 forAssetViewModel:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelVKImageAnalysisForAssetViewModel:(id)arg1;
- (void)_requestVKImageAnalysisByCurrentVideoFrameForAssetViewModel:(id)arg1;
- (void)_requestVKImageAnalysisForAssetViewModel:(id)arg1;
- (id)browsingViewModel;
- (id)init;
- (id)initWithBrowsingViewModel:(id)arg1;
- (id)loadVideoFrameQueue;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)visualImageManager;

@end
