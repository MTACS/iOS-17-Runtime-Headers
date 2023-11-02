
@interface PXSectionedDataSource : NSObject <NSCopying, PXGLayoutSnapshotDataSource, PXSectionedLayoutEngineDataSourceSnapshot> {
    NSNumber * _containsAnyItemsCache;
    NSNumber * _containsMultipleItemsCache;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _firstItemIndexPathCache;
    long long  _identifier;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _lastItemIndexPathCache;
    long long  _totalNumberOfItemsCache;
}

@property (nonatomic, readonly) PXIndexPathSet *allIndexPaths;
@property (nonatomic, readonly) PXIndexPathSet *allItemIndexPaths;
@property (nonatomic, readonly) <PXFastEnumeration> *allItemsEnumerator;
@property (nonatomic, readonly) <PXFastEnumeration> *allObjectsEnumerator;
@property (nonatomic, readonly) PXIndexPathSet *allSectionIndexPaths;
@property (nonatomic, readonly) <PXFastEnumeration> *allSectionsEnumerator;
@property (nonatomic, readonly) bool containsAnyItems;
@property (nonatomic, readonly) bool containsMultipleItems;
@property (nonatomic, readonly) long long dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } firstItemIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } firstSectionIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } lastItemIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } lastSectionIndexPath;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) NSObject<OS_os_log> *sectionedDataSourceLog;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalNumberOfItems;

+ (id)emptyDataSource;

- (void).cxx_destruct;
- (long long)_numberOfAssetsWithMaximum:(long long)arg1;
- (id)allIndexPaths;
- (id)allItemIndexPaths;
- (id)allItemsEnumerator;
- (id)allObjectsEnumerator;
- (id)allSectionIndexPaths;
- (id)allSectionsEnumerator;
- (bool)containsAnyItems;
- (bool)containsMultipleItems;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })convertIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 fromSectionedDataSource:(id)arg2;
- (id)convertIndexPathSet:(id)arg1 fromSectionedDataSource:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)couldObjectReferenceAppear:(id)arg1;
- (long long)dataSourceIdentifier;
- (id)description;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 reverseDirection:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 untilEndIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 usingBlock:(id /* block */)arg3;
- (id)fetchAllItemObjects;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })firstItemIndexPath;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })firstNonEmptySectionAtOrBeforeSection:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })firstSectionIndexPath;
- (unsigned long long)hash;
- (long long)identifier;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 offset:(long long)arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectID:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)indexPathSetForItemsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)indexPathSetForObjectIDs:(id)arg1;
- (id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)init;
- (id)inputForItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemIndexPathsForSections:(id)arg1;
- (id)itemsEnumeratorForIndexPaths:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })lastItemIndexPath;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })lastSectionIndexPath;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectIDAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectIDsForIndexPathSet:(id)arg1;
- (id)objectIdentifierForSpriteTag:(long long)arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSection;
- (Class)objectReferenceClassForSubItem;
- (id)objectReferenceForObjectReference:(id)arg1;
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (id)objectsEnumeratorForIndexPaths:(id)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)prefetchIndexPaths:(id)arg1;
- (void)prefetchSections:(id)arg1;
- (id)sectionedDataSourceLog;
- (id)sectionsEnumeratorForIndexPaths:(id)arg1;
- (unsigned long long)totalItemCount;
- (long long)totalNumberOfItems;

@end
