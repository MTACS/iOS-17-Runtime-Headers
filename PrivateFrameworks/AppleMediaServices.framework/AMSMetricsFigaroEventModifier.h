
@interface AMSMetricsFigaroEventModifier : NSObject {
    NSDictionary * _fieldFilters;
    NSDictionary * _metricsDictionary;
    NSDictionary * _overrideDictionary;
    NSString * _sampleSessionKey;
}

@property (nonatomic, readonly) NSDictionary *fieldFilters;
@property (nonatomic, readonly) double flushInterval;
@property (nonatomic, readonly) NSDictionary *metricsDictionary;
@property (nonatomic, readonly) NSDictionary *overrideDictionary;
@property (nonatomic, readonly) NSString *sampleSessionKey;

- (void).cxx_destruct;
- (id)_createSampleSessionKey;
- (id)_fieldFiltersFromOverrides:(id)arg1;
- (id)_overridePropertyForKey:(id)arg1;
- (bool)_shouldSampleEvent:(id)arg1;
- (id)fieldFilters;
- (bool)fieldFiltersMatchEvent:(id)arg1;
- (double)flushInterval;
- (id)initWithMetricsDictionary:(id)arg1 overrideDictionary:(id)arg2;
- (id)metricsDictionary;
- (id)overrideDictionary;
- (id)preparedEventPromiseWithEvent:(id)arg1;
- (id)reportingURLForEvent:(id)arg1;
- (id)sampleSessionKey;
- (bool)shouldDropEvent:(id)arg1;
- (bool)shouldSkipEvent:(id)arg1;

@end
