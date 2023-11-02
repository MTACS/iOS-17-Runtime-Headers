
@interface PXCreateSmartAlbumAction : PXPhotosAction {
    PHAssetCollection * _createdAssetCollection;
    NSString * _createdCollectionIdentifier;
    PHCollectionList * _parentCollectionList;
    NSString * _title;
}

@property (nonatomic, readonly) PHAssetCollection *createdAssetCollection;
@property (nonatomic, copy) NSString *createdCollectionIdentifier;
@property (nonatomic, readonly) PHCollectionList *parentCollectionList;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)createdAssetCollection;
- (id)createdCollectionIdentifier;
- (id)initWithTitle:(id)arg1 parentCollectionList:(id)arg2;
- (id)parentCollectionList;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setCreatedCollectionIdentifier:(id)arg1;
- (id)title;

@end
