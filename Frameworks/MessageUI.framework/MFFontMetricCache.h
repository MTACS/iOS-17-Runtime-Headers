
@interface MFFontMetricCache : NSObject {
    NSMutableDictionary * _bodyLeadingDictionary;
    NSMutableDictionary * _defaultBodyLeadingDictionary;
    NSMutableDictionary * _metricCacheDictionary;
    NSString * _preferredSizeValidationKey;
}

+ (id)sharedFontMetricCache;

- (void).cxx_destruct;
- (void)_didReceivePreferredFontChangedNotification:(id)arg1;
- (void)_invalidateCache;
- (double)cachedFloat:(id /* block */)arg1 forKey:(id)arg2;
- (id)cachedFont:(id /* block */)arg1 forKey:(id)arg2;
- (id)cachedImage:(id /* block */)arg1 forKey:(id)arg2;
- (id)cachedPreferredFontForStyle:(id)arg1;
- (id)cachedPreferredFontForStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
- (double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2;
- (double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 maximumContentSizeCategory:(id)arg3;
- (double)cachedScaledFloatWithValue:(double)arg1 forKey:(id)arg2;
- (bool)ensureCacheIsValid;
- (id)init;
- (id)metricCacheDictionary;

@end
