
@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    NSDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enrichYearHighlights:(id)arg1 monthsHighlights:(id)arg2 withManager:(id)arg3 curationContext:(id)arg4 enrichmentprogressBlock:(id /* block */)arg5;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)initWithOptions:(id)arg1;

@end
