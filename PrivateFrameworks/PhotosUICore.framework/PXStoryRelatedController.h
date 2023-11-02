
@interface PXStoryRelatedController : PXStoryController <PXStoryDiagnosticHUDContentProvider, PXStoryMutableRelatedController, PXTapToRadarDiagnosticProvider> {
    bool  _canStartProducingRelated;
    bool  _isActive;
    bool  _isProductionEnabled;
    PXStoryConfiguration * _mainConfiguration;
    PXStoryModel * _mainModel;
    NSProgress * _progress;
    NSSet * _recentlyUsedAppleMusicSongIDs;
    NSSet * _recentlyUsedFlexSongIDs;
    <PXStoryRelatedProducer> * _relatedProducer;
    PXStoryProducerResult * _result;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, readonly) bool canStartProducingRelated;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isProductionEnabled;
@property (nonatomic, retain) PXStoryConfiguration *mainConfiguration;
@property (nonatomic, retain) PXStoryModel *mainModel;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) NSSet *recentlyUsedAppleMusicSongIDs;
@property (nonatomic, readonly) NSSet *recentlyUsedFlexSongIDs;
@property (nonatomic, readonly) <PXStoryRelatedProducer> *relatedProducer;
@property (nonatomic, readonly) PXStoryProducerResult *result;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_handleResult:(id)arg1;
- (void)_invalidateCanStartProducingRelated;
- (void)_invalidateMainConfiguration;
- (void)_invalidateMainModel;
- (void)_invalidateRelatedConfigurations;
- (void)_updateCanStartProducingRelated;
- (void)_updateMainConfiguration;
- (void)_updateMainModel;
- (void)_updateRelatedConfigurations;
- (bool)canStartProducingRelated;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)configureUpdater:(id)arg1;
- (void)dealloc;
- (id)detailedDebugInformation;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (bool)isActive;
- (bool)isProductionEnabled;
- (id)mainConfiguration;
- (id)mainModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)progress;
- (id)recentlyUsedAppleMusicSongIDs;
- (id)recentlyUsedFlexSongIDs;
- (id)relatedProducer;
- (id)result;
- (void)setCanStartProducingRelated:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsProductionEnabled:(bool)arg1;
- (void)setMainConfiguration:(id)arg1;
- (void)setMainModel:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRecentlyUsedAppleMusicSongIDs:(id)arg1;
- (void)setRecentlyUsedFlexSongIDs:(id)arg1;
- (void)setResult:(id)arg1;
- (id)viewModel;

@end
