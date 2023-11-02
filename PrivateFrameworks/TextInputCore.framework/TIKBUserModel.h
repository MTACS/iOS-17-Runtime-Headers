
@interface TIKBUserModel : TIUserModel <TIKBMetricProviding, TIKBUserModeling, TIUserModelConfigurationDelegate> {
    TIMetricDescriptorRegistry * _metricDescriptorRegistry;
}

@property (nonatomic, readonly) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *kbContexts;
@property (nonatomic, readonly) TIMetricDescriptorRegistry *metricDescriptorRegistry;
@property (readonly) Class superclass;

+ (id)userModelWithInputMode:(id)arg1 userModelDataStore:(id)arg2;
+ (id)userModelWithInputMode:(id)arg1 userModelDataStore:(id)arg2 metricDescriptorRegistry:(id)arg3 fromDate:(id)arg4;

- (void).cxx_destruct;
- (void)addDescriptor:(id)arg1 toWeeklyMetricKeys:(id)arg2;
- (void)addMetric:(id)arg1 toWeeklyMetricKeys:(id)arg2;
- (id)dictForPowerLog;
- (void)dispatchFeedbackAnalyzers:(id)arg1 aligned:(id)arg2;
- (void)doLoad;
- (id)durableCounterKeys;
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 metricDescriptorRegistry:(id)arg3 fromDate:(id)arg4;
- (id)kbContexts;
- (id)metricDescriptorRegistry;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (id)settingsDictionary;
- (void)trackPowerLogIfNecessary;
- (Class)userModelValuesClass;
- (id)valueForMetricWithName:(id)arg1 withContext:(id)arg2;
- (id)valuesByBucketedWordLengthForMetricWithName:(id)arg1 withContext:(id)arg2;

@end
