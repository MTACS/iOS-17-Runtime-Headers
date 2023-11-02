
@interface PHAPeopleSuggestionEnrichmentTask : PHAEnrichmentTask

- (id)enrichmentProcessor;
- (double)period;
- (int)priority;
- (void)timeoutFatal:(bool)arg1;

@end
