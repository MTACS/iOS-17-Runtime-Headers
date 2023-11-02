
@protocol _UITreeDataSourceSnapshotter

@required

- (NSIndexSet *)childrenForParentAtIndex:(long long)arg1;
- (NSIndexSet *)childrenForParentAtIndex:(long long)arg1 recursive:(bool)arg2;
- (long long)count;
- (NSIndexSet *)expandedIndexes;
- (bool)hasChildrenForParentAtIndex:(long long)arg1;
- (bool)indexIsExpanded:(long long)arg1;
- (bool)indexIsVisible:(long long)arg1;
- (NSIndexSet *)indexesForLevel:(long long)arg1;
- (bool)isFlat;
- (long long)levelForIndex:(long long)arg1;
- (long long)parentForChildAtIndex:(long long)arg1;
- (NSIndexSet *)rootIndexes;
- (_UITreeDataSourceSnapshotter *)snapshotterRepresentingSubtreeForIndex:(long long)arg1;
- (_UITreeDataSourceSnapshotter *)snapshotterRepresentingSubtreeForIndex:(long long)arg1 includingParent:(bool)arg2;
- (NSIndexSet *)visibleIndexes;
- (NSString *)visualDescription;

@end
