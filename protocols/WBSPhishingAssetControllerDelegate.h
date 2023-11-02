
@protocol WBSPhishingAssetControllerDelegate

@required

- (void)phishingAssetController:(id <WBSPhishingAssetControllerProtocol>)arg1 didFailCatalogDownload:(NSError *)arg2;
- (void)phishingAssetController:(id <WBSPhishingAssetControllerProtocol>)arg1 didFailDownload:(NSError *)arg2;
- (void)phishingAssetController:(id <WBSPhishingAssetControllerProtocol>)arg1 didFailLoad:(NSError *)arg2;
- (void)phishingAssetController:(id <WBSPhishingAssetControllerProtocol>)arg1 didFailModelInitialization:(NSError *)arg2;
- (void)phishingAssetController:(id <WBSPhishingAssetControllerProtocol>)arg1 didLoadImageClassifierModel:(id <WBSPhishingImageClassifierModelProtocol>)arg2 configuration:(WBSPhishingConfiguration *)arg3;

@end
