
@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    bool  _curatedLibraryFTEIsReady;
    unsigned long long  _highlightTailorOptions;
}

@property (nonatomic, readonly) bool curatedLibraryFTEIsReady;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long highlightTailorOptions;
@property (readonly) Class superclass;

- (id)_dayGroupHighlightsToEnrichForDayHighlights:(id)arg1 dayGroupHighlights:(id)arg2;
- (void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)arg1;
- (bool)curatedLibraryFTEIsReady;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(id /* block */)arg4;
- (unsigned long long)highlightTailorOptions;
- (id)init;
- (id)initWithHighlightTailorOptions:(unsigned long long)arg1;
- (void)setHighlightTailorOptions:(unsigned long long)arg1;

@end
