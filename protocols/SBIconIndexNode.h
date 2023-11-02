
@protocol SBIconIndexNode <NSObject>

@required

- (void)addNodeObserver:(id <SBIconIndexNodeObserver>)arg1;
- (NSMutableSet *)containedNodeIdentifiers;
- (bool)containsNodeIdentifier:(id)arg1;
- (NSMutableSet *)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(NSIndexPath *)arg2;
- (NSString *)nodeDescriptionWithPrefix:(NSString *)arg1;
- (id)nodeIdentifier;
- (NSMutableArray *)nodesAlongIndexPath:(NSIndexPath *)arg1 consumedIndexes:(unsigned long long)arg2;
- (void)removeNodeObserver:(id <SBIconIndexNodeObserver>)arg1;

@end
