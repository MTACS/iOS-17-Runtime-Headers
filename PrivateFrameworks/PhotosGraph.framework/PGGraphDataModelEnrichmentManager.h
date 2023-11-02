
@interface PGGraphDataModelEnrichmentManager : NSObject {
    CLSCurationContext * _curationContext;
    <PGGraphDataModelEnrichmentManagerDelegate> * _delegate;
    unsigned long long  _enrichmentContext;
    NSArray * _enrichmentProcessors;
    bool  _forceRun;
    PGManager * _manager;
}

@property (nonatomic, readonly) CLSCurationContext *curationContext;
@property (nonatomic) <PGGraphDataModelEnrichmentManagerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long enrichmentContext;
@property (nonatomic, readonly) NSArray *enrichmentProcessors;
@property (nonatomic) bool forceRun;
@property (nonatomic, readonly) PGManager *manager;

+ (id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)arg1;
+ (id)backgroundEnrichmentProcessors;
+ (id)enrichmentProcessorsForDataModelEnrichmentContext:(unsigned long long)arg1;
+ (id)lightWeightEnrichmentProcessors;
+ (id)liveUpdateEnrichmentProcessors;

- (void).cxx_destruct;
- (bool)_enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(id /* block */)arg3;
- (id)curationContext;
- (id)delegate;
- (bool)enrichDataModelForHighlightUUIDs:(id)arg1 withError:(id*)arg2 progressBlock:(id /* block */)arg3;
- (bool)enrichDataModelWithError:(id*)arg1 progressBlock:(id /* block */)arg2;
- (bool)enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(id /* block */)arg3;
- (unsigned long long)enrichmentContext;
- (id)enrichmentProcessors;
- (bool)forceRun;
- (id)initWithManager:(id)arg1 enrichmentContext:(unsigned long long)arg2;
- (id)initWithManager:(id)arg1 enrichmentProcessors:(id)arg2;
- (id)manager;
- (void)setDelegate:(id)arg1;
- (void)setForceRun:(bool)arg1;

@end
