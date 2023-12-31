
@protocol CNAutocompleteUsageMonitorProbe <CNAutocompleteProbe>

@required

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

@end
