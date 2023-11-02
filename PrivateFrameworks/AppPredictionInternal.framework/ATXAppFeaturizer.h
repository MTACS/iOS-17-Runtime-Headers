
@interface ATXAppFeaturizer : NSObject {
    _ATXAppDailyDose * _appDailyDose;
    _ATXAppIconState * _appIconState;
    _ATXAppInfoManager * _appInfoManager;
    _ATXAppInstallMonitor * _appInstallMonitor;
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    _ATXAppLaunchLocation * _appLaunchLocation;
    _ATXAppLaunchSequenceManager * _appLaunchSequenceManager;
    NSDictionary * _dayZeroIntentParameters;
    NSDictionary * _dayZeroParameters;
    _ATXFeedback * _feedback;
    ATXGlobalAppScorePredictor * _globalAppScorePredictor;
    ATXGlobalSmartSuppression * _globalSmartSuppression;
    ATXHeroPoiManager * _heroPoiManager;
    ATXHeroDataServer * _heroPredictionServer;
    ATXMediaApplications * _mediaApps;
    ATXAppLaunchMicroLocation * _microLocation;
    ATXMagicalMomentsUpdateMonitor * _mmPredictionMonitor;
    ATXBBNotificationManager * _notificationManager;
}

+ (float)_computeL2DistanceFromBundleId:(id)arg1 to:(const float*)arg2 app2vecMapping:(id)arg3;
+ (bool)_predictNextAppLaunchEmbedding:(id)arg1 into:(float*)arg2 launchSequence:(id)arg3;
+ (double)time:(double)arg1 toAccuracyInSeconds:(double)arg2;

- (void).cxx_destruct;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x_3_1_1; } x3; })evaluateFeaturesForApps:(id)arg1 clipBundleIdsToRank:(id)arg2 consumerSubType:(unsigned char)arg3 intent:(id)arg4 scoreLogger:(id)arg5 context:(id)arg6 featureCache:(id)arg7;
- (id)init;
- (id)initWithDayZeroParameters:(id)arg1 dayZeroIntentParameters:(id)arg2 feedback:(id)arg3 appLaunchHistogramManager:(id)arg4 appLaunchSequenceManager:(id)arg5 appLaunchLocation:(id)arg6 appInstallMontior:(id)arg7 mediaApplications:(id)arg8 appDailyDose:(id)arg9 globalAppScorePredictor:(id)arg10 globalSmartSuppression:(id)arg11 appInfoManager:(id)arg12 magicalMomentsUpdateMonitor:(id)arg13 heroAppPredictions:(id)arg14 appIconState:(id)arg15 appLaunchMicroLocation:(id)arg16 notificationManager:(id)arg17;
- (id)initWithDayZeroParameters:(id)arg1 dayZeroIntentParameters:(id)arg2 feedback:(id)arg3 appLaunchHistogramManager:(id)arg4 appLaunchSequenceManager:(id)arg5 appLaunchLocation:(id)arg6 appInstallMontior:(id)arg7 mediaApplications:(id)arg8 appDailyDose:(id)arg9 globalAppScorePredictor:(id)arg10 globalSmartSuppression:(id)arg11 appInfoManager:(id)arg12 magicalMomentsUpdateMonitor:(id)arg13 heroAppPredictions:(id)arg14 appIconState:(id)arg15 appLaunchMicroLocation:(id)arg16 notificationManager:(id)arg17 heroPoiManager:(id)arg18;
- (void)setDistributionBasedScoreInputsForItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg1 withGeoHashResolution:(unsigned long long)arg2 withGeoHashLaunchCounts:(id)arg3;
- (void)setDistributionBasedScoreInputsForTimeAndDay:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg1 forBundleId:(id)arg2 withTimeOfDayHistogram:(id)arg3 withDayOfWeekHistogram:(id)arg4;
- (void)setModeAffinityScores:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg1 appModeEntityScores:(id)arg2;
- (void)setZeroValuesForModeEntityFeatures:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg1;

@end
