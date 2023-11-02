
@interface PXCreateAssetCollectionAction : PXPhotosAction {
    PXContentSyndicationPhotoKitAssetGroup * _assetGroup;
    PHAssetCollection * _createdAssetCollection;
    NSString * _createdCollectionIdentifier;
    PHCollectionList * _parentCollectionList;
    <PXFastEnumeration> * _selectedAssets;
    NSString * _title;
}

@property (nonatomic, readonly) PXContentSyndicationPhotoKitAssetGroup *assetGroup;
@property (nonatomic, readonly) PHAssetCollection *createdAssetCollection;
@property (nonatomic, copy) NSString *createdCollectionIdentifier;
@property (nonatomic, readonly) PHCollectionList *parentCollectionList;
@property (nonatomic, readonly) <PXFastEnumeration> *selectedAssets;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *unsavedSyndicatedAssets;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)assetGroup;
- (id)createdAssetCollection;
- (id)createdCollectionIdentifier;
- (id)initWithTitle:(id)arg1 parentCollectionList:(id)arg2 selectedAssets:(id)arg3;
- (id)parentCollectionList;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)selectedAssets;
- (void)setCreatedCollectionIdentifier:(id)arg1;
- (id)title;
- (id)unsavedSyndicatedAssets;

@end
