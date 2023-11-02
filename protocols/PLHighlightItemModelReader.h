
@protocol PLHighlightItemModelReader <NSObject>

@required

- (NSArray *)fetchChildHighlightItemsForHighlightItem:(id <PLHighlightItem>)arg1;
- (NSArray *)fetchNeighborHighlightItemsForHighlightItems:(NSSet *)arg1;
- (NSArray *)fetchParentHighlightItemsForHighlightItems:(id <NSFastEnumeration>)arg1;

@end
