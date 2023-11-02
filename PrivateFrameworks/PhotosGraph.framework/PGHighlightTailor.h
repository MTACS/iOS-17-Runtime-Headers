
@interface PGHighlightTailor : NSObject {
    NSObject<OS_dispatch_group> * _enrichmentCommitGroup;
    NSArray * _enrichmentProfiles;
    NSObject<OS_os_log> * _loggingConnection;
    PGMoodGenerationContext * _moodGenerationContext;
    PGManagerWorkingContext * _workingContext;
}

+ (bool)itemScoreIsAutoplayable:(double)arg1;

- (void).cxx_destruct;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)arg1 options:(unsigned long long)arg2;
- (id)assetSortDescriptors;
- (id)bestEnrichmentProfileForHighlight:(id)arg1 options:(unsigned long long)arg2;
- (id)computeChangedVisibilityScoresForItems:(id)arg1;
- (bool)enrichAllHighlightsWithOptions:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (bool)enrichDayHighlights:(id)arg1 dayGroupHighlights:(id)arg2 adaptiveHighlights:(id)arg3 withOptions:(unsigned long long)arg4 progressBlock:(id /* block */)arg5;
- (bool)enrichHighlights:(id)arg1 options:(unsigned long long)arg2 progressBlock:(id /* block */)arg3;
- (id)enrichmentValuesForHighlight:(id)arg1 usingEnrichmentProfile:(id)arg2 graph:(id)arg3 options:(unsigned long long)arg4 reportChangedValuesOnly:(bool)arg5 highlightTailorContext:(id)arg6 progressBlock:(id /* block */)arg7;
- (double)highlightVisibilityWeightForItem:(id)arg1;
- (id)initForTesting;
- (id)initWithWorkingContext:(id)arg1;
- (id)keyAssetFromHighlight:(id)arg1 sharingFilter:(unsigned short)arg2;
- (bool)shouldEnrichHighlight:(id)arg1 withEnrichmentProfile:(id)arg2 options:(unsigned long long)arg3;
- (id)sortedCurationOfType:(unsigned short)arg1 fromHighlight:(id)arg2;
- (unsigned long long)tailorOptionsAllowedForHighlight:(id)arg1 originalOptions:(unsigned long long)arg2;
- (void)writeHighlightEnrichmentValues:(id)arg1 toChangeRequest:(id)arg2 highlight:(id)arg3 options:(unsigned long long)arg4;

@end
