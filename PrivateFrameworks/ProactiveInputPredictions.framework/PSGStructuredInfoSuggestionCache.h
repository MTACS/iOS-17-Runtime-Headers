
@interface PSGStructuredInfoSuggestionCache : NSObject {
    _PASTuple2 * _cachedSuggestions;
    NSString * _localeIdentifier;
    NSDate * _startTime;
    double  _ttlSeconds;
}

+ (bool)_matchesPredictedValue:(id)arg1 prefixValue:(id)arg2;
+ (id)emptySuggestionsPlaceholder;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_isCacheEmpty;
- (bool)_maybeClearCache;
- (void)addEmptyPlaceholderForTrigger:(id)arg1 localeIdentifier:(id)arg2;
- (void)addStructuredInfoSuggestions:(id)arg1 localeIdentifier:(id)arg2;
- (id)initWithTTLSeconds:(double)arg1;
- (void)invalidate;
- (id)searchWithContext:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3;
- (id)searchWithTrigger:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3;

@end
