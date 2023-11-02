
@protocol KNSlideCollection <NSObject>

@required

- (bool)containsSlideNode:(KNSlideNode *)arg1;
- (KNSlideNode *)defaultSlideNodeForNewSelection;
- (KNSlideNode *)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
- (NSArray *)displayedSlideNodes;
- (unsigned long long)indexOfSlideNode:(KNSlideNode *)arg1;
- (NSArray *)orderedSlideNodesInSelection:(KNSlideCollectionSelection *)arg1;
- (NSArray *)slideNodes;

@end
