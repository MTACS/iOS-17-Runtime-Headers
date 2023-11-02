
@interface KnowledgeGraphTestEnvironment : NSObject {
    KGStoredGraph * _graph;
}

@property (nonatomic, readonly) KGStoredGraph *graph;

+ (id)environmentWithTestDBWithStoreType:(Class)arg1 extraOptions:(unsigned long long)arg2;
+ (id)matisseGraphs;
+ (id)temporaryURLWithFileExtension:(id)arg1;
+ (id)testEnvironmentsForExistingStores;
+ (id)testEnvironmentsForOnDiskExistingStores;

- (void).cxx_destruct;
- (id)addEdgeWithLabels:(id)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4;
- (id)addNodeWithLabels:(id)arg1 properties:(id)arg2;
- (void)beginTransaction;
- (void)closeAndDeleteEnvironment;
- (void)commitTransaction;
- (bool)deleteEdge:(id)arg1;
- (bool)deleteNode:(id)arg1;
- (unsigned long long)edgeCount;
- (id)graph;
- (id)initWithKGGraph:(id)arg1;
- (unsigned long long)nodeCount;
- (id)placeholderEdgeWithLabels:(id)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4;
- (id)placeholderNodeWithLabels:(id)arg1 properties:(id)arg2;
- (void)populateGraph;
- (id)refetchEdge:(id)arg1;
- (id)refetchNode:(id)arg1;

@end
