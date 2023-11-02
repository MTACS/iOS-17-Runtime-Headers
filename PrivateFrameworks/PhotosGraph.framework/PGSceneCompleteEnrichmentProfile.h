
@interface PGSceneCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (unsigned long long)durationForSummary;

- (bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)curationOptions;
- (id)identifier;
- (unsigned short)targetEnrichmentState;

@end
