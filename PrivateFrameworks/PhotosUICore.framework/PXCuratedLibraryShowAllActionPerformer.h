
@interface PXCuratedLibraryShowAllActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {
    PXGLayout * _layout;
}

@property (nonatomic) PXGLayout *layout;

- (void).cxx_destruct;
- (id)layout;
- (void)performActionWithCompletionHandler:(id /* block */)arg1;
- (void)setLayout:(id)arg1;

@end
