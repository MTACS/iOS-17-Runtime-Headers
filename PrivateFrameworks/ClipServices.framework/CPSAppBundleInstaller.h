
@interface CPSAppBundleInstaller : NSObject <IXAppInstallCoordinatorObserver> {
    IXPromisedTransferToPath * _appAssetPromise;
    NSString * _bundleIdentifier;
    id /* block */  _completionHandler;
    NSURL * _extractedBundleURL;
    bool  _inactive;
    IXInitiatingAppInstallCoordinator * _installCoordinator;
    IXPlaceholder * _placeholder;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inactive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forApplicationRecord:(id)arg2;
- (void)coordinatorDidInstallPlaceholder:(id)arg1 forApplicationRecord:(id)arg2;
- (bool)inactive;
- (id)initWithBundleIdentifier:(id)arg1 extractedBundleURL:(id)arg2;
- (void)installWithCompletionHandler:(id /* block */)arg1;
- (bool)stopStallingCurrentInstallation;

@end
