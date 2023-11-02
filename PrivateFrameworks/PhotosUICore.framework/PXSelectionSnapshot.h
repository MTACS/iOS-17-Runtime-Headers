
@interface PXSelectionSnapshot : NSObject {
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _cursorIndexPath;
    PXSectionedDataSource * _dataSource;
    bool  _isEmptySelectionAvoided;
    bool  _isSelectionLimitReached;
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
    PXIndexPathSet * _selectedIndexPaths;
}

@property (nonatomic, readonly) <PXFastEnumeration> *allItemsEnumerator;
@property (nonatomic, readonly) <PXFastEnumeration> *allObjectsEnumerator;
@property (nonatomic, readonly) <PXFastEnumeration> *allSectionsEnumerator;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } cursorIndexPath;
@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) <NSObject><NSCopying> *firstObject;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } firstSelectedIndexPath;
@property (nonatomic, readonly) bool isEmptySelectionAvoided;
@property (nonatomic, readonly) bool isSelectionLimitReached;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } lastSelectedIndexPath;
@property (nonatomic, readonly, copy) NSOrderedSet *overallSelectionOrder;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } pendingIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } pressedIndexPath;
@property (nonatomic, readonly) PXIndexPathSet *sectionIndexPathsContainingSelection;
@property (nonatomic, readonly) PXIndexPathSet *selectedIndexPaths;

- (void).cxx_destruct;
- (id)allItemsEnumerator;
- (id)allObjectsEnumerator;
- (id)allSectionsEnumerator;
- (bool)areAllItemsSelected;
- (bool)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })cursorIndexPath;
- (id)dataSource;
- (id)description;
- (void)enumerateSelectedObjectsUsingBlock:(id /* block */)arg1;
- (id)fetchSelectedObjects;
- (id)firstObject;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })firstSelectedIndexPath;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathOfObjectPassingTest:(id /* block */)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1 selectedIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 pendingIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 pressedIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg5 selectionLimitReached:(bool)arg6 emptySelectionAvoided:(bool)arg7 overallSelectionOrder:(id)arg8;
- (bool)isAnyItemSelected;
- (bool)isAnySectionSelected;
- (bool)isEmptySelectionAvoided;
- (bool)isIndexPathSelected:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (bool)isSelectionLimitReached;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })lastSelectedIndexPath;
- (id)overallSelectionOrder;
- (long long)overallSelectionOrderIndexForIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })pendingIndexPath;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })pressedIndexPath;
- (id)sectionIndexPathsContainingSelection;
- (id)selectedIndexPaths;

@end
