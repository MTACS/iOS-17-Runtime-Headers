
@interface PXMoveAssetsToSharedLibraryAction : PXAssetsAction {
    NSArray * _suggestedAssets;
}

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)initWithAssets:(id)arg1;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
