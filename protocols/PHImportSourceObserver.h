
@protocol PHImportSourceObserver

@required

- (void)capabilitiesDidChangeForImportSource:(PHImportSource *)arg1;
- (void)importSource:(PHImportSource *)arg1 didAddAssets:(NSArray *)arg2;
- (void)importSource:(PHImportSource *)arg1 didDeleteAsset:(PHImportAsset *)arg2;
- (void)importSource:(PHImportSource *)arg1 didRemoveAssets:(NSArray *)arg2;
- (void)importSource:(PHImportSource *)arg1 didUpdateAsset:(PHImportAsset *)arg2 propertyMask:(unsigned short)arg3;
- (void)nameDidChangeForImportSource:(PHImportSource *)arg1;
- (void)userHasTrustedHostForImportSource:(PHImportSource *)arg1;
- (void)userRequiredToTrustHostForImportSource:(PHImportSource *)arg1;

@end
