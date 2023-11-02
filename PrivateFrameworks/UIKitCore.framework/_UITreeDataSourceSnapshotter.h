
@interface _UITreeDataSourceSnapshotter : NSObject <NSCopying, _UITreeDataSourceSnapshotter> {
    long long  _count;
    NSMutableIndexSet * _expandedIndexes;
    struct vector<_UIOutlineNode, std::allocator<_UIOutlineNode>> { 
        struct _UIOutlineNode {} *__begin_; 
        struct _UIOutlineNode {} *__end_; 
        struct __compressed_pair<_UIOutlineNode *, std::allocator<_UIOutlineNode>> { 
            struct _UIOutlineNode {} *__value_; 
        } __end_cap_; 
    }  _nodes;
}

@property (nonatomic) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_allIndexes;
- (long long)_binarySearchForGlobalIndex:(long long)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;
- (long long)_childNodeIndexForGloalIndex:(long long)arg1;
- (id)_childrenForParent:(long long)arg1;
- (id)_deleteChildNodesForParentNodeIndex:(long long)arg1;
- (long long)_indexForInsertingAfterIndex:(long long)arg1;
- (long long)_insertCount:(long long)arg1 afterIndex:(long long)arg2;
- (void)_insertCount:(long long)arg1 beforeIndex:(long long)arg2;
- (void)_insertSubtreeFromSnapshotter:(id)arg1 atIndex:(long long)arg2 adjustedIndex:(long long)arg3;
- (bool)_isNodeIndexVisible:(long long)arg1;
- (struct _UIOutlineNode { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; })_nextNodeForNodeIndex:(long long*)arg1;
- (struct _UIOutlineNode { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; }*)_nodeForGlobalIndex:(long long)arg1;
- (long long)_nodeIndexForGlobalIndex:(long long)arg1;
- (long long)_parentNodeIndexForNodeIndex:(long long)arg1;
- (void)_recomputeExpandedIndexesForDeletedIndexes:(id)arg1;
- (void)_recomputeExpandedIndexesForInsertedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_recomputeRangeOffsetForGlobalIndex:(long long)arg1;
- (bool)_shouldSplitNodeAtInsertionIndex:(long long)arg1;
- (id)_snapshotterByNormalizingRangeOffsets;
- (id)_snapshotterByShiftingIndexesByCount:(long long)arg1;
- (void)_splitNodeAtInsertionIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })appendChildItemsWithCount:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })appendChildItemsWithCount:(long long)arg1 toParentIndex:(long long)arg2;
- (id)childrenForParentAtIndex:(long long)arg1;
- (id)childrenForParentAtIndex:(long long)arg1 recursive:(bool)arg2;
- (void)collapseIndexes:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)deleteIndexes:(id)arg1;
- (void)deleteIndexes:(id)arg1 orphanDisposition:(long long)arg2;
- (id)description;
- (void)expandIndexes:(id)arg1;
- (id)expandedIndexes;
- (bool)hasChildrenForParentAtIndex:(long long)arg1;
- (bool)indexIsExpanded:(long long)arg1;
- (bool)indexIsVisible:(long long)arg1;
- (id)indexesForLevel:(long long)arg1;
- (id)init;
- (id)initWithNodes:(struct vector<_UIOutlineNode, std::allocator<_UIOutlineNode>> { struct _UIOutlineNode {} *x1; struct _UIOutlineNode {} *x2; struct __compressed_pair<_UIOutlineNode *, std::allocator<_UIOutlineNode>> { struct _UIOutlineNode {} *x_3_1_1; } x3; })arg1 count:(long long)arg2 expandedIndexes:(id)arg3;
- (long long)insertCount:(long long)arg1 afterIndex:(long long)arg2;
- (long long)insertCount:(long long)arg1 afterIndex:(long long)arg2 insertionMode:(long long)arg3;
- (void)insertCount:(long long)arg1 beforeIndex:(long long)arg2;
- (long long)insertSubtreeFromSnapshotter:(id)arg1 afterIndex:(long long)arg2;
- (void)insertSubtreeFromSnapshotter:(id)arg1 beforeIndex:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFlat;
- (long long)levelForIndex:(long long)arg1;
- (long long)parentForChildAtIndex:(long long)arg1;
- (void)replaceChildItemsFromSnapshotter:(id)arg1 forParentIndex:(long long)arg2;
- (id)rootIndexes;
- (void)setCount:(long long)arg1;
- (id)snapshotterRepresentingSubtreeForIndex:(long long)arg1;
- (id)snapshotterRepresentingSubtreeForIndex:(long long)arg1 includingParent:(bool)arg2;
- (id)visibleIndexes;
- (id)visualDescription;

@end
