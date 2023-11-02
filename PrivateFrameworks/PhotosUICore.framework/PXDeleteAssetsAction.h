
@interface PXDeleteAssetsAction : PXAssetsAction

- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
