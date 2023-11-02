
@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol> {
    NSMutableArray * _aggregatedEventObservers;
    TIBiomeObserver * _biomeObserver;
    TIKeyboardInputManagerConfig * _config;
    TICoreAnalyticsEventDispatcher * _coreAnalyticsEventDispatcher;
    TITypingDESRecordWriter * _desRecordWriter;
    TIDPEventDispatcher * _differentialPrivacyEventDispatcher;
    TIFeatureUsageMetricsCache * _featureUsageMetricsCache;
    NSArray * _interactionObservers;
    NSLocale * _locale;
    TIMetricDescriptorRegistry * _metricDescriptorRegistry;
    TISKMetricCollector * _sensorKitMetricCollector;
    TIKBUserModel * _userModel;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableArray *aggregatedEventObservers;
@property (nonatomic, readonly) TIBiomeObserver *biomeObserver;
@property (nonatomic, retain) TIKeyboardInputManagerConfig *config;
@property (nonatomic, readonly) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher;
@property (nonatomic, readonly) TITypingSession *currentTypingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) TITypingDESRecordWriter *desRecordWriter;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TIDPEventDispatcher *differentialPrivacyEventDispatcher;
@property (nonatomic, readonly) TIFeatureUsageMetricsCache *featureUsageMetricsCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *interactionObservers;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) TIMetricDescriptorRegistry *metricDescriptorRegistry;
@property (nonatomic, readonly) TISKMetricCollector *sensorKitMetricCollector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TIKBUserModel *userModel;

+ (bool)shouldRecordSession:(id)arg1;

- (void).cxx_destruct;
- (void)_lazyLoadAggregatedEventObservers;
- (void)_loadAggregatedEventObservers;
- (void)_loadInteractionObservers;
- (id)_typingSessionFromInteractionObservers:(id)arg1;
- (void)acceptingCandidateWithTrigger:(id)arg1;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
- (void)addTouchEvent:(id)arg1;
- (id)aggregatedEventObservers;
- (id)biomeObserver;
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(bool)arg6 useCandidateSelection:(bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (void)changingContextWithTrigger:(id)arg1;
- (id)config;
- (void)contextDidChange:(id)arg1 wordDelete:(bool)arg2 cursorMoved:(bool)arg3 extendsPriorWord:(bool)arg4 inWord:(id)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
- (id)coreAnalyticsEventDispatcher;
- (id)currentInteractionObservers;
- (id)currentTypingSession;
- (id)desRecordWriter;
- (id)differentialPrivacyEventDispatcher;
- (void)endSessionWithInteractionObservers:(id)arg1 sessionParams:(id)arg2 timestamp:(id)arg3;
- (id)featureUsageMetricsCache;
- (id)initWithConfig:(id)arg1 metricDescriptorRegistry:(id)arg2;
- (id)interactionObservers;
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
- (id)locale;
- (id)metricDescriptorRegistry;
- (id)observeSession:(id)arg1 sessionParams:(id)arg2;
- (id)resetInteractionObserversForNextSession;
- (id)sensorKitMetricCollector;
- (void)setAggregatedEventObservers:(id)arg1;
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;
- (void)setConfig:(id)arg1;
- (void)setDesRecordWriter:(id)arg1;
- (void)setInteractionObservers:(id)arg1;
- (void)setMetricDescriptorRegistry:(id)arg1;
- (void)tearDown;
- (id)userModel;

@end
