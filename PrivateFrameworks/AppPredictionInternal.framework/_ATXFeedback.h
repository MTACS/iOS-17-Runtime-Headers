
@interface _ATXFeedback : NSObject <_ATXFeedbackProtocol> {
    NSString * _abGroupIdentifier;
    _ATXAppLaunchHistogramManager * _histogramManager;
    _PASLock * _histogramState;
    double  _priorAlpha;
    double  _priorBeta;
    _ATXDataStore * _store;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

@property (nonatomic, readonly) double currentAlpha;
@property (nonatomic, readonly) double currentBeta;

+ (bool)isWidgetOrSpotlight:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)currentAlpha;
- (double)currentBeta;
- (void)decayCounts;
- (void)doDecayAtTime:(double)arg1;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)arg1 forBundleId:(id)arg2 rejected:(id)arg3 context:(id)arg4;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)arg1 forBundleId:(id)arg2 rejected:(id)arg3 explicitlyRejected:(id)arg4 context:(id)arg5;
- (id)init;
- (id)initWithDataStore:(id)arg1 histogramManager:(id)arg2;
- (void)loadHistogramsInMemoryIfNecessary;
- (void)populateFeedbackForConsumerType:(unsigned long long)arg1 forBundleId:(id)arg2 withContext:(id)arg3 forFeedbackCategory:(long long)arg4;
- (void)putFeedbackScoresForApps:(id)arg1 intoScores:(double*)arg2 confirms:(double*)arg3 rejects:(double*)arg4;
- (void)putNopScoresForApps:(id)arg1 into:(double*)arg2 atTime:(double)arg3;
- (void)removeFeedbackForBundle:(id)arg1;
- (void)removeFeedbackForBundles:(id)arg1;
- (void)resetData;
- (void)unloadCachedHistograms;

@end
