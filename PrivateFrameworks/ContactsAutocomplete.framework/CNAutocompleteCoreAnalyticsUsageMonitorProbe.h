
@interface CNAutocompleteCoreAnalyticsUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe> {
    NSMutableDictionary * _coreAnalyticsDictionary;
    NSNumber * _lengthOfSearchString;
    NSNumber * _selectedIndex;
    NSNumber * _selectedPredictionIndex;
    NSNumber * _sourceType;
}

@property (nonatomic, retain) NSMutableDictionary *coreAnalyticsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *lengthOfSearchString;
@property (nonatomic, retain) NSNumber *selectedIndex;
@property (nonatomic, retain) NSNumber *selectedPredictionIndex;
@property (nonatomic, retain) NSNumber *sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifierOfCurrentProcess;
- (id)coreAnalyticsDictionary;
- (id)init;
- (id)lengthOfSearchString;
- (id)makeBundleIdentifierOfCurrentProcess;
- (void)recordDuetReturnedResults:(bool)arg1;
- (void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
- (void)recordUserSawCuratedResults:(unsigned long long)arg1;
- (void)recordUserSawPredictions;
- (void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
- (void)recordUserSelectedIndex:(unsigned long long)arg1;
- (void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
- (void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
- (void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
- (id)selectedIndex;
- (id)selectedPredictionIndex;
- (void)sendData;
- (void)setCoreAnalyticsDictionary:(id)arg1;
- (void)setLengthOfSearchString:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setSelectedPredictionIndex:(id)arg1;
- (void)setSourceType:(id)arg1;
- (id)sourceKeysForSourceType:(unsigned long long)arg1;
- (id)sourceType;

@end
