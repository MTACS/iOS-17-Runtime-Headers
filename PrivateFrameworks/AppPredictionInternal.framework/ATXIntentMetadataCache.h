
@interface ATXIntentMetadataCache : NSObject <ATXIntentMetadataCacheInvalidationDelegate> {
    _ATXDataStore * _dataStore;
    ATXIntentMetadataCacheInvalidationMonitor * _invalidationCriteria;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getCachedEligibleForWidgetsForIntent:(id)arg1;
- (id)_getCachedSubtitleForCacheKey:(id)arg1;
- (id)_getCachedSupportsBackgroundExecutionForIntent:(id)arg1;
- (id)_getCachedTitleForCacheKey:(id)arg1;
- (void)_setEligibleForWidgets:(bool)arg1 intent:(id)arg2;
- (void)_setSubtitle:(id)arg1 cacheKey:(id)arg2;
- (void)_setSupportsBackgroundExecution:(bool)arg1 intent:(id)arg2;
- (void)_setTitle:(id)arg1 cacheKey:(id)arg2;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidUpdate:(id)arg1;
- (id)initInternal;
- (id)initWithDataStore:(id)arg1 cacheInvalidationCriteria:(id)arg2 startMonitoring:(bool)arg3;
- (bool)isEligibleForWidgetsForIntent:(id)arg1;
- (void)setValidParameterCombinationsWithSchema:(id)arg1 intent:(id)arg2;
- (id)subtitleForIntent:(id)arg1 localeIdentifier:(id)arg2;
- (bool)supportsBackgroundExecutionForIntent:(id)arg1;
- (void)systemDidUpdate;
- (id)titleForIntent:(id)arg1 localeIdentifier:(id)arg2;
- (id)validParameterCombinationsWithSchemaForIntent:(id)arg1;

@end
