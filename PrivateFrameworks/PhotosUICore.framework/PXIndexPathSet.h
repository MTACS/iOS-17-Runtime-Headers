
@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * __indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
    NSMutableDictionary * __indexesForSectionsWithItemsByDataSourceIdentifier;
    NSMutableDictionary * __itemIndexesBySectionByDataSourceIdentifier;
    NSMutableDictionary * __sectionIndexesByDataSourceIdentifier;
    NSMutableDictionary * __subitemIndexesByItemBySectionByDataSourceIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *_indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_indexesForSectionsWithItemsByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } anyItemIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } anySectionIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } anySubitemIndexPath;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly) long long sectionCount;
@property (nonatomic, readonly) long long subitemCount;

+ (id)indexPathSet;
+ (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
+ (id)indexPathSetWithItemIndexPaths:(id)arg1 dataSourceIdentifier:(long long)arg2;
+ (id)indexPathSetWithItemIndexes:(id)arg1 dataSourceIdentifier:(long long)arg2 section:(long long)arg3;
+ (id)indexPathSetWithSectionIndexes:(id)arg1 dataSourceIdentifier:(long long)arg2;
+ (id)indexPathSetWithSubitemIndexes:(id)arg1 dataSourceIdentifier:(long long)arg2 section:(long long)arg3 item:(long long)arg4;

- (void).cxx_destruct;
- (id)_indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
- (id)_indexesForSectionsWithItemsByDataSourceIdentifier;
- (id)_itemIndexesBySectionByDataSourceIdentifier;
- (id)_sectionIndexesByDataSourceIdentifier;
- (id)_subitemIndexesByItemBySectionByDataSourceIdentifier;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })anyItemIndexPath;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })anySectionIndexPath;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })anySubitemIndexPath;
- (bool)containsIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (void)enumerateAllIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateDataSourceIdentifiers:(id /* block */)arg1;
- (void)enumerateItemIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateItemIndexSetsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionIndexSetsUsingBlock:(id /* block */)arg1;
- (void)enumerateSubitemIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateSubitemIndexSetsUsingBlock:(id /* block */)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })firstItemIndexPathForDataSourceIdentifier:(long long)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathGreaterThanIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathLessThanIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)indexPathSetByReplacingDataSourceIdentifier:(long long)arg1 withDataSourceIdentifier:(long long)arg2;
- (id)init;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (bool)isSupersetOfSet:(id)arg1;
- (long long)itemCount;
- (id)itemIndexSetForDataSourceIdentifier:(long long)arg1 section:(long long)arg2;
- (id)itemsWithSubitemsForDataSourceIdentifier:(long long)arg1 section:(long long)arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })lastItemIndexPathForDataSourceIdentifier:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)sectionCount;
- (id)sectionIndexSetForDataSourceIdentifier:(long long)arg1;
- (id)sectionsWithItemsForDataSourceIdentifier:(long long)arg1;
- (long long)subitemCount;
- (id)subitemIndexSetForDataSourceIdentifier:(long long)arg1 section:(long long)arg2 item:(long long)arg3;

@end
