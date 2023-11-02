
@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer {
    PXAssetCollectionReference * _assetCollectionReference;
}

@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;

- (void).cxx_destruct;
- (id)assetCollectionReference;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performActionWithCompletionHandler:(id /* block */)arg1;

@end
