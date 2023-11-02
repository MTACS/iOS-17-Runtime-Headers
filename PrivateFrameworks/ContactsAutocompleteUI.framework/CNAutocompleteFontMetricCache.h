
@interface CNAutocompleteFontMetricCache : NSObject {
    NSMutableDictionary * _metricCacheDictionary;
    NSString * _preferredSizeValidationKey;
}

+ (id)sharedFontMetricCache;

- (void).cxx_destruct;
- (void)_didReceivePreferredFontChangedNotification:(id)arg1;
- (double)cachedFloat:(id /* block */)arg1 forKey:(id)arg2;
- (id)cachedFont:(id /* block */)arg1 forKey:(id)arg2;
- (id)cachedPreferredFontForStyle:(id)arg1;
- (double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2;
- (double)cachedScaledFloatWithValue:(double)arg1 forKey:(id)arg2;
- (bool)ensureCacheIsValid;
- (id)init;
- (void)invalidateCache;
- (id)metricCacheDictionary;

@end
