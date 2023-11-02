
@interface SBIconIndexMutableList : NSObject <NSCopying, NSFastEnumeration, SBIconIndexNodeObserver> {
    NSMapTable * _index;
    NSMutableArray * _nodes;
    <SBIconIndexMutableListObserver> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SBIconIndexNode> *firstNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SBIconIndexNode> *lastNode;
@property (nonatomic) <SBIconIndexMutableListObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addNode:(id)arg1;
- (void)assertIndexCoherent;
- (id)containedNodeIdentifiers;
- (bool)containsNode:(id)arg1;
- (bool)containsNodeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)didAddNode:(id)arg1;
- (void)didAddNodes:(id)arg1;
- (void)didRemoveNode:(id)arg1;
- (void)didRemoveNodes:(id)arg1;
- (void)enumerateNodesAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)firstNode;
- (id)indexDescriptionWithPrefix:(id)arg1;
- (unsigned long long)indexOfNode:(id)arg1;
- (unsigned long long)indexOfNodeAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexOfNodePassingTest:(id /* block */)arg1;
- (unsigned long long)indexOfNodeWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)indexesOfNodesPassingTest:(id /* block */)arg1;
- (id)init;
- (id)initWithList:(id)arg1 copyNodes:(bool)arg2;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertNodes:(id)arg1 atIndexes:(id)arg2;
- (id)lastNode;
- (void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)moveNodes:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (id)nodes;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)nodesAtIndexes:(id)arg1;
- (id)nodesContainingNodeIdentifier:(id)arg1;
- (id)nodesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)observer;
- (void)removeAllNodes;
- (void)removeLastNode;
- (void)removeNode:(id)arg1;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (void)removeNodeIdenticalTo:(id)arg1;
- (void)removeNodesAtIndexes:(id)arg1;
- (void)removeNodesInArray:(id)arg1;
- (void)removeNodesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2;
- (void)setNodes:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)sortUsingComparator:(id /* block */)arg1;
- (void)sortUsingSelector:(SEL)arg1;

@end
