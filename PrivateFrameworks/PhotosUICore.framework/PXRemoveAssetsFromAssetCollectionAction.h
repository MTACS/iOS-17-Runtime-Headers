
@interface PXRemoveAssetsFromAssetCollectionAction : PXAssetsSelectionAction {
    NSDictionary * _removedAssetIdentifiers;
    NSDictionary * _removedAssetIndexes;
}

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
