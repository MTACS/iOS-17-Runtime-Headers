
@interface PXStoryAnalyticsController : NSObject <PXChangeObserver> {
    long long  _bufferingEventsCount;
    PXStoryModel * _currentModel;
    long long  _currentViewMode;
    long long  _currentViewModeSignpostID;
    bool  _didPlayStory;
    bool  _didUserChangePlaybackTime;
    NSNumber * _initialBufferingDuration;
    bool  _isSessionActive;
    NSString * _sessionIdentifier;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic) long long bufferingEventsCount;
@property (nonatomic, readonly) NSDictionary *commonSpinnerRelatedPayload;
@property (nonatomic, retain) PXStoryModel *currentModel;
@property (nonatomic) long long currentViewMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *defaultPayload;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPlayStory;
@property (nonatomic) bool didUserChangePlaybackTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *initialBufferingDuration;
@property (nonatomic) bool isSessionActive;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

+ (id)analyticsViewNameForViewMode:(long long)arg1;
+ (id)memoryPayloadFromStoryModel:(id)arg1;
+ (void)sendMemoryEvent:(id)arg1 model:(id)arg2 payload:(id)arg3;
+ (id)stringForAudioAssetCatalog:(long long)arg1;
+ (id)stringForLaunchType:(id)arg1 assetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_collectAnalyticsAtPlaybackEnd;
- (void)_collectAnalyticsForBuffering;
- (void)_collectAnalyticsForPlayStateChange;
- (void)_incrementPlayCountForMemory:(id)arg1;
- (void)_invalidateCurrentModel;
- (void)_invalidateCurrentViewMode;
- (void)_invalidateDidUserChangePlaybackTime;
- (void)_updateCurrentModel;
- (void)_updateCurrentViewMode;
- (void)_updateDidUserChangePlaybackTime;
- (long long)bufferingEventsCount;
- (id)commonSpinnerRelatedPayload;
- (id)currentModel;
- (long long)currentViewMode;
- (id)defaultPayload;
- (bool)didPlayStory;
- (bool)didUserChangePlaybackTime;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)initialBufferingDuration;
- (bool)isSessionActive;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)sessionIdentifier;
- (void)setBufferingEventsCount:(long long)arg1;
- (void)setCurrentModel:(id)arg1;
- (void)setCurrentViewMode:(long long)arg1;
- (void)setDidPlayStory:(bool)arg1;
- (void)setDidUserChangePlaybackTime:(bool)arg1;
- (void)setInitialBufferingDuration:(id)arg1;
- (void)setIsSessionActive:(bool)arg1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)viewModel;

@end
