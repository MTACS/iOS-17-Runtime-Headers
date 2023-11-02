
@protocol WBSMobileAssetControllerDelegate <NSObject>

@required

- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didBecomeAvailable:(NSURL *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didDownload:(NSURL *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didFailCatalogDownload:(NSError *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didFailDownload:(NSError *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didFailRetrieve:(NSError *)arg2;

@optional

- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 willPerformQuery:(MAAssetQuery *)arg2;
- (bool)mobileAssetControllerShouldPerformScheduledUpdate:(id <WBSMobileAssetControllerProtocol>)arg1;

@end
