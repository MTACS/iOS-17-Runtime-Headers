
@interface CLSCurationDebugInfo : NSObject {
    NSString * _agent;
    NSMapTable * _debugClusterByCluster;
    NSMapTable * _debugItemByItem;
    CLSCurationDebugCluster * _rootCluster;
    NSString * _stage;
}

@property (nonatomic, copy) NSString *agent;
@property (nonatomic, copy) NSString *stage;

- (void).cxx_destruct;
- (void)_dedupItems:(id)arg1 toItems:(id)arg2 chosenState:(unsigned long long)arg3 withDedupingType:(unsigned long long)arg4;
- (void)addClusters:(id)arg1 withReason:(id)arg2;
- (id)agent;
- (void)beginTentativeSection;
- (void)chooseItem:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3;
- (void)chooseItem:(id)arg1 inItems:(id)arg2 withReason:(id)arg3;
- (void)chooseItems:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3;
- (void)chooseItems:(id)arg1 inItems:(id)arg2 withReason:(id)arg3;
- (id)debugClusterForCluster:(id)arg1;
- (id)debugInfoForCluster:(id)arg1;
- (id)debugItemForItem:(id)arg1;
- (id)debugItemsForItems:(id)arg1;
- (void)dedupItems:(id)arg1 toItem:(id)arg2 withDedupingType:(unsigned long long)arg3;
- (void)dedupItems:(id)arg1 toItems:(id)arg2 withDedupingType:(unsigned long long)arg3;
- (void)dedupItems:(id)arg1 toRequiredItems:(id)arg2 withDedupingType:(unsigned long long)arg3;
- (id)dictionaryRepresentationWithAppendExtraItemInfoBlock:(id /* block */)arg1;
- (void)endTentativeSectionWithSuccess:(bool)arg1;
- (void)forceState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3;
- (id)initWithDebugCluster:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)requireItems:(id)arg1 inCluster:(id)arg2;
- (void)requireItems:(id)arg1 inItems:(id)arg2;
- (void)resetWithReason:(id)arg1;
- (void)setAgent:(id)arg1;
- (void)setClusters:(id)arg1 withReason:(id)arg2;
- (void)setStage:(id)arg1;
- (void)setState:(unsigned long long)arg1 ofCluster:(id)arg2 withReason:(id)arg3;
- (void)setState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3;
- (void)setState:(unsigned long long)arg1 ofItems:(id)arg2 withReason:(id)arg3;
- (void)setUnclusteredItemsState:(unsigned long long)arg1 withReason:(id)arg2;
- (id)stage;

@end
