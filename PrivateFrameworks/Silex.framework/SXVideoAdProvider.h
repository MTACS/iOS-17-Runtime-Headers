
@interface SXVideoAdProvider : NSObject <SVVideoAdProviding> {
    <SXAnalyticsReporting> * _analyticsReporter;
    SXVideoComponent * _component;
    <SVVideoAdViewControllerProviding> * _fullscreenViewControllerProvider;
    <SVVideoMetadata> * _metadata;
    SXVideoAdStateManager * _stateManager;
    <SXVisibilityMonitoring> * _videoPlayerVisibilityMonitor;
    <SXVisibilityMonitoring> * _videoVisibilityMonitor;
}

@property (nonatomic, retain) <SXAnalyticsReporting> *analyticsReporter;
@property (nonatomic, readonly) SXVideoComponent *component;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoAdViewControllerProviding> *fullscreenViewControllerProvider;
@property (nonatomic, readonly) bool hasAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double impressionThreshold;
@property (nonatomic) <SVVideoMetadata> *metadata;
@property (nonatomic, readonly) UIView *metricsView;
@property (nonatomic, readonly) double prerollReadyToPlayTimeout;
@property (nonatomic, readonly) UIButton *privacyMarker;
@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) SXVideoAdStateManager *stateManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXVisibilityMonitoring> *videoPlayerVisibilityMonitor;
@property (nonatomic, readonly) <SXVisibilityMonitoring> *videoVisibilityMonitor;

- (void).cxx_destruct;
- (void)adVisibilityStateChanged;
- (id)analyticsReporter;
- (id)component;
- (id)fullscreenViewControllerProvider;
- (bool)hasAction;
- (double)impressionThreshold;
- (id)initWithViewControllerProvider:(id)arg1 videoPlayerVisibilityMonitor:(id)arg2 videoVisibilityMonitor:(id)arg3 component:(id)arg4;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (id)metadata;
- (id)metricsView;
- (void)nextVideoStartedPlaying;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiatedWithButtonTapped:(bool)arg1;
- (void)playbackPassedImpressionThreshold;
- (void)playbackPassedQuartile:(unsigned long long)arg1;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (double)prerollReadyToPlayTimeout;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (id)privacyMarker;
- (void)setAnalyticsReporter:(id)arg1;
- (void)setMetadata:(id)arg1;
- (unsigned long long)skipThreshold;
- (void)skipped;
- (id)stateManager;
- (double)threshold;
- (id)videoPlayerVisibilityMonitor;
- (id)videoVisibilityMonitor;
- (void)willUnload;

@end
