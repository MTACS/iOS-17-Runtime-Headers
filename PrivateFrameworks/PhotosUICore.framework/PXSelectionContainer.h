
@interface PXSelectionContainer : NSObject {
    <PXFastEnumeration> * _allDataSourceObjects;
    <PXDisplayCollection> * _collection;
    long long  _context;
    PXContentPrivacyController * _privacyController;
    <PXFastEnumeration> * _selectedObjects;
    PXSelectionSnapshot * _selectionSnapshot;
    NSUndoManager * _undoManager;
}

@property (nonatomic, readonly) <PXFastEnumeration> *allDataSourceObjects;
@property (nonatomic, readonly) bool allowImplicitSelectionForProjectsOrSharing;
@property (nonatomic, readonly) <PXDisplayCollection> *collection;
@property (nonatomic, readonly) bool containsAssetsWithNonEditableProperties;
@property (nonatomic, readonly) bool containsContentSyndicationAssets;
@property (nonatomic, readonly) bool containsNonContentSyndicationAssets;
@property (nonatomic, readonly) bool containsRAWAssets;
@property (nonatomic, readonly) bool containsRAWPlusJPEGAssets;
@property (nonatomic, readonly) bool containsReferencedFileAssets;
@property (nonatomic, readonly) bool containsSpatialAssets;
@property (nonatomic, readonly) bool containsUnsavedContentSyndicationAssets;
@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) bool hasExplicitSelection;
@property (nonatomic, readonly) PXContentPrivacyController *privacyController;
@property (nonatomic, readonly) <PXFastEnumeration> *selectedContainedAssets;
@property (nonatomic, readonly) <PXFastEnumeration> *selectedContainedAssetsForProjectsOrSharing;
@property (nonatomic, readonly) <PXFastEnumeration> *selectedObjects;
@property (nonatomic, readonly) long long selectionCount;
@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (id)allDataSourceObjects;
- (bool)allowImplicitSelectionForProjectsOrSharing;
- (id)collection;
- (bool)containsAssetsWithNonEditableProperties;
- (bool)containsContentSyndicationAssets;
- (bool)containsNonContentSyndicationAssets;
- (bool)containsObjectOfClass:(Class)arg1 passingTest:(id /* block */)arg2;
- (bool)containsRAWAssets;
- (bool)containsRAWPlusJPEGAssets;
- (bool)containsReferencedFileAssets;
- (bool)containsSpatialAssets;
- (bool)containsUnsavedContentSyndicationAssets;
- (long long)context;
- (id)description;
- (void)enumerateSelectedObjectsOfClass:(Class)arg1 usingBlock:(id /* block */)arg2;
- (id)firstSelectedObjectOfClass:(Class)arg1;
- (bool)hasExplicitSelection;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContent:(id)arg1 collection:(id)arg2 undoManager:(id)arg3 context:(long long)arg4;
- (id)initWithContent:(id)arg1 undoManager:(id)arg2 context:(long long)arg3;
- (id)initWithSelectionSnapshot:(id)arg1 collection:(id)arg2 undoManager:(id)arg3 context:(long long)arg4;
- (id)initWithSelectionSnapshot:(id)arg1 collection:(id)arg2 undoManager:(id)arg3 context:(long long)arg4 privacyController:(id)arg5;
- (id)initWithSelectionSnapshot:(id)arg1 undoManager:(id)arg2 context:(long long)arg3;
- (id)initWithSelectionSnapshot:(id)arg1 undoManager:(id)arg2 context:(long long)arg3 privacyController:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSelection:(id)arg1;
- (id)privacyController;
- (id)selectedContainedAssets;
- (id)selectedContainedAssets:(bool)arg1;
- (id)selectedContainedAssets:(bool)arg1 allowedClasses:(id)arg2;
- (id)selectedContainedAssetsForProjectsOrSharing;
- (id)selectedObjects;
- (id)selectedObjects:(bool)arg1;
- (long long)selectionCount;
- (id)selectionSnapshot;
- (id)title;
- (id)undoManager;

@end
