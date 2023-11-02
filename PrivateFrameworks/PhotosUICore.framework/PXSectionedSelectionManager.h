
@interface PXSectionedSelectionManager : PXObservable <PXSectionedDataSourceManagerObserver, _PUOneUpSelectionIndicatorCompatibleManager> {
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _cursorIndexPath;
    PXSectionedDataSource * _dataSource;
    PXSectionedDataSourceManager * _dataSourceManager;
    bool  _disableAssetTypeCounting;
    bool  _emptySelectionAvoided;
    struct { 
        bool selectionSnapshot; 
    }  _needsUpdateFlags;
    NSOrderedSet * _overallSelectionOrder;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _pendingIndexPath;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _pressedIndexPath;
    PXMutableIndexPathSet * _selectedIndexPaths;
    bool  _selectionLimitReached;
    PXSelectionSnapshot * _selectionSnapshot;
    <PXSectionedSelectionManagerSnapshotValidator> * _snapshotValidator;
}

@property (nonatomic, readonly) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (setter=_setCursorIndexPath:, nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } cursorIndexPath;
@property (setter=_setDataSource:, nonatomic, retain) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAssetTypeCounting;
@property (setter=_setEmptySelectionAvoided:, nonatomic) bool emptySelectionAvoided;
@property (readonly) unsigned long long hash;
@property (setter=_setOverallSelectionOrder:, nonatomic, retain) NSOrderedSet *overallSelectionOrder;
@property (setter=_setPendingIndexPath:, nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } pendingIndexPath;
@property (setter=_setPressedIndexPath:, nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } pressedIndexPath;
@property (setter=_setSelectedIndexPaths:, nonatomic, retain) PXMutableIndexPathSet *selectedIndexPaths;
@property (setter=_setSelectionLimitReached:, nonatomic) bool selectionLimitReached;
@property (setter=_setSelectionSnapshot:, nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic) <PXSectionedSelectionManagerSnapshotValidator> *snapshotValidator;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_extendSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 inDirection:(unsigned long long)arg3 withDelegate:(id)arg4;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_initialItemIndexPathForMoveInDirection:(unsigned long long)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_initialSectionIndexPathForMoveInDirection:(unsigned long long)arg1;
- (void)_invalidateSelectionSnapshot;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(id /* block */)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_moveItemSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_moveSectionSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_moveSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3;
- (bool)_needsUpdate;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_selectInitialItemForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_selectInitialSectionForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;
- (void)_setCursorIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setDataSource:(id)arg1;
- (void)_setDataSource:(id)arg1 withChangeHistory:(id)arg2;
- (void)_setEmptySelectionAvoided:(bool)arg1;
- (void)_setOverallSelectionOrder:(id)arg1;
- (void)_setPendingIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setPressedIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setSelectedIndexPaths:(id)arg1;
- (void)_setSelectionLimitReached:(bool)arg1;
- (void)_setSelectionSnapshot:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateSelectionSnapshotIfNeeded;
- (id)_validatedSnapshotForSnapshot:(id)arg1;
- (id)assetTypeCounter;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })cursorIndexPath;
- (id)dataSource;
- (id)dataSourceManager;
- (void)deselectAll;
- (void)didPerformChanges;
- (bool)disableAssetTypeCounting;
- (bool)emptySelectionAvoided;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })extendSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })extendSelectionToItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 withDelegate:(id)arg2;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })moveSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)overallSelectionOrder;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })pendingIndexPath;
- (void)performChanges:(id /* block */)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })pressedIndexPath;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)selectAllItems;
- (void)selectAllItemsInSection:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)selectNonCopiedAssetsWithImportStatusManager:(id)arg1;
- (id)selectedIndexPaths;
- (bool)selectionLimitReached;
- (id)selectionSnapshot;
- (void)setCursorIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setDisableAssetTypeCounting:(bool)arg1;
- (void)setOverallSelectionOrder:(id)arg1;
- (void)setPendingIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setPressedIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setSelectedIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setSelectedIndexPaths:(id)arg1;
- (void)setSelectedState:(bool)arg1 forIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)setSelectedState:(bool)arg1 forIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 andUpdateCursorIndexPath:(bool)arg3;
- (void)setSelectedState:(bool)arg1 forIndexPathSet:(id)arg2;
- (void)setSelectionLimitReached:(bool)arg1;
- (void)setSnapshotValidator:(id)arg1;
- (id)snapshotValidator;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })startingIndexPathForMoveInDirection:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (bool)pu_isAssetReferenceSelected:(id)arg1;
- (void)pu_registerSelectionIndicatorObserver:(id)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(id)arg1;

@end
