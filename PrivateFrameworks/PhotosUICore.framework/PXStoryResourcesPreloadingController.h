
@interface PXStoryResourcesPreloadingController : PXStoryController <PXStoryResourcesPreloadingCoordinatable> {
    long long  _bufferingEvents;
    bool  _canStartPreloading;
    NSError * _error;
    bool  _isActive;
    bool  _isCompleted;
    bool  _isPreloadingEnabled;
    bool  _isSongResourcesPreloadingEnabled;
    float  _loadingFractionComplete;
    PXStoryModel * _model;
    PXStoryResourcesPreloader * _preloader;
    bool  _shouldSkipInitialSegment;
}

@property (nonatomic) long long bufferingEvents;
@property (nonatomic) bool canStartPreloading;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isCompleted;
@property (nonatomic, readonly) unsigned long long isCompletedChangeDescriptor;
@property (nonatomic) bool isPreloadingEnabled;
@property (nonatomic, readonly) bool isSongResourcesPreloadingEnabled;
@property (nonatomic, readonly) float loadingFractionComplete;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) bool shouldSkipInitialSegment;

- (void).cxx_destruct;
- (void)_invalidateCanStartPreloading;
- (void)_invalidateCurrentPlaybackTimeOnPreloader;
- (void)_invalidateCurrentSegmentIdentifierOnPreloader;
- (void)_invalidatePreloadingRequest;
- (void)_invalidateReadinessStatus;
- (void)_updateCanStartPreloading;
- (void)_updateCurrentPlaybackTimeOnPreloader;
- (void)_updateCurrentSegmentIdentifierOnPreloader;
- (void)_updatePreloadingRequest;
- (void)_updateReadinessStatus;
- (long long)bufferingEvents;
- (bool)canStartPreloading;
- (void)configureUpdater:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)error;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithModel:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithObservableModel:(id)arg1;
- (bool)isActive;
- (bool)isCompleted;
- (unsigned long long)isCompletedChangeDescriptor;
- (bool)isPreloadingEnabled;
- (bool)isSongResourcesPreloadingEnabled;
- (float)loadingFractionComplete;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setBufferingEvents:(long long)arg1;
- (void)setCanStartPreloading:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsCompleted:(bool)arg1;
- (void)setIsPreloadingEnabled:(bool)arg1;
- (void)setIsSongResourcesPreloadingEnabled:(bool)arg1;
- (void)setLoadingFractionComplete:(float)arg1;
- (void)setShouldSkipInitialSegment:(bool)arg1;
- (bool)shouldSkipInitialSegment;

@end
