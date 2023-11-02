
@interface PXDeleteCollectionsAction : PXPhotosAction {
    NSArray * _assetCollections;
    NSArray * _collectionLists;
    <PXFastEnumeration> * _collections;
}

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)collections;
- (id)initWithCollection:(id)arg1;
- (id)initWithCollections:(id)arg1;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
