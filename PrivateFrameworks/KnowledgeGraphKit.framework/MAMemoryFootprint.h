
@interface MAMemoryFootprint : NSObject {
    unsigned long long  _allEdgesSize;
    NSMutableSet * _allKeys;
    unsigned long long  _allNodesSize;
    NSMutableSet * _allValues;
    unsigned long long  _arrayCount;
    unsigned long long  _basicHashCount;
    unsigned long long  _basicHashValueStoreCount;
    unsigned long long  _countOfNodesWithAtMostEightEdges;
    unsigned long long  _dictionaryCount;
    unsigned long long  _edgeCount;
    MABaseGraph * _graph;
    unsigned long long  _graphSize;
    unsigned long long  _halfEdgeCount;
    unsigned long long  _maximumEdgeCountInNode;
    unsigned long long  _nodeCount;
    unsigned long long  _orderedSetCount;
}

@property (nonatomic, readonly) unsigned long long actualKeyCount;
@property (nonatomic, readonly) unsigned long long actualKeysSize;
@property (nonatomic, readonly) unsigned long long actualValueCount;
@property (nonatomic, readonly) unsigned long long actualValuesSize;
@property (nonatomic, readonly) unsigned long long allEdgesSize;
@property (nonatomic, readonly) unsigned long long allNodesSize;
@property (nonatomic, readonly) float averageEdgeCountPerNode;
@property (nonatomic, readonly) unsigned long long averageEdgeSize;
@property (nonatomic, readonly) unsigned long long averageNodeSize;
@property (nonatomic, readonly) unsigned long long countOfNodesWithAtMostEightEdges;
@property (nonatomic, readonly) unsigned long long edgeCount;
@property (nonatomic, readonly) unsigned long long graphSize;
@property (nonatomic, readonly) unsigned long long maximumEdgeCountInNode;
@property (nonatomic, readonly) unsigned long long nodeCount;
@property (nonatomic, readonly) unsigned long long optimalKeyCount;
@property (nonatomic, readonly) unsigned long long optimalKeysSize;
@property (nonatomic, readonly) unsigned long long optimalValueCount;
@property (nonatomic, readonly) unsigned long long optimalValuesSize;
@property (nonatomic, readonly) unsigned long long totalSize;

- (void).cxx_destruct;
- (unsigned long long)_reportArray:(id)arg1;
- (unsigned long long)_reportDictionary:(id)arg1;
- (void)_reportEdge:(id)arg1 withSize:(unsigned long long)arg2;
- (void)_reportGraph:(id)arg1 withSize:(unsigned long long)arg2;
- (void)_reportKey:(id)arg1;
- (void)_reportNode:(id)arg1 withSize:(unsigned long long)arg2 edgeCount:(unsigned long long)arg3;
- (unsigned long long)_reportOrderedSet:(id)arg1;
- (void)_reportValue:(id)arg1;
- (unsigned long long)actualKeyCount;
- (unsigned long long)actualKeysSize;
- (unsigned long long)actualValueCount;
- (unsigned long long)actualValuesSize;
- (unsigned long long)allEdgesSize;
- (unsigned long long)allNodesSize;
- (float)averageEdgeCountPerNode;
- (unsigned long long)averageEdgeSize;
- (unsigned long long)averageNodeSize;
- (unsigned long long)countOfNodesWithAtMostEightEdges;
- (void)dump;
- (unsigned long long)edgeCount;
- (unsigned long long)graphSize;
- (id)initWithGraph:(id)arg1;
- (unsigned long long)maximumEdgeCountInNode;
- (unsigned long long)nodeCount;
- (unsigned long long)optimalKeyCount;
- (unsigned long long)optimalKeysSize;
- (unsigned long long)optimalValueCount;
- (unsigned long long)optimalValuesSize;
- (unsigned long long)totalSize;
- (void)update;
- (unsigned long long)version;

@end
