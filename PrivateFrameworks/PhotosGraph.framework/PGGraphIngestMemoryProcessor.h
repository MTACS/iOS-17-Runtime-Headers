
@interface PGGraphIngestMemoryProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
    NSDate * _localDate;
    PGMemoryController * _memoryController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *localDate;
@property (readonly) Class superclass;

+ (id)memoryCategoriesWithGraphUpdate:(id)arg1;
+ (void)regenerateMemoriesOfCategory:(unsigned long long)arg1 withGraphBuilder:(id)arg2 progressReporter:(id)arg3;

- (void).cxx_destruct;
- (void)deleteWithMemoryCategories:(id)arg1;
- (id)initWithGraphBuilder:(id)arg1;
- (id)insertMemoriesForCategories:(id)arg1 loggingConnection:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)insertProcessorDependentMomentFeaturesForMomentNodes:(id)arg1 featureProvider:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)insertSingletonFeatureNodes;
- (id)localDate;
- (id)memoryGeneratorsForMemoryCategory:(unsigned long long)arg1 memoryGenerationContext:(id)arg2 controller:(id)arg3;
- (void)resetMemoryNodesWithMemoryUniqueIdentifiers:(id)arg1 loggingConnection:(id)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setLocalDate:(id)arg1;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
