
@interface UICollectionViewUpdate : NSObject <_UICollectionViewUpdateTranslating> {
    UICollectionView * _collectionView;
    NSIndexSet * _deletedSections;
    NSMutableArray * _deletedSupplementaryIndexesSectionArray;
    NSMutableDictionary * _deletedSupplementaryTopLevelIndexesDict;
    struct { 
        unsigned int layoutPreparedForUpdates : 1; 
        unsigned int animated : 1; 
    }  _flags;
    NSUUID * _identifier;
    NSIndexSet * _insertedSections;
    NSMutableArray * _insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary * _insertedSupplementaryTopLevelIndexesDict;
    NSString * _invalidUpdatesErrorMessage;
    NSSet * _itemAnchoredAuxiliaryElementKinds;
    NSSet * _moveItemSourceIndexPaths;
    struct CGPoint { 
        double x; 
        double y; 
    }  _newContentOffset;
    _UICollectionViewFocusedItemState * _newFocusedItemState;
    UICollectionViewData * _newModel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _oldContentOffset;
    _UICollectionViewFocusedItemState * _oldFocusedItemState;
    UICollectionViewData * _oldModel;
    NSArray * _updateItems;
    struct _UIDataSourceUpdateMaps { 
        unsigned int oldSectionCount; 
        unsigned int newSectionCount; 
        unsigned int oldGlobalItemCount; 
        unsigned int newGlobalItemCount; 
        unsigned int *oldSectionMap; 
        unsigned int *newSectionMap; 
        unsigned int *oldGlobalItemMap; 
        unsigned int *newGlobalItemMap; 
        bool updatesAreInvalid; 
    }  _updateMaps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_generateUpdateMaps;
- (void)dealloc;
- (id)description;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;
- (long long)finalSectionCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })finalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })initalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;
- (long long)initialSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;

@end
