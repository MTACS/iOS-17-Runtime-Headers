
@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol> {
    id /* block */  _completion;
    <WLKInstallable> * _installable;
    AMSLookupItemOffer * _offer;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _sceneIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WLKInstallable> *installable;
@property (nonatomic, readonly) AMSLookupItemOffer *offer;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (readonly) Class superclass;

+ (id)_matchingAppProxyFromProxies:(id)arg1 forInstallable:(id)arg2;

- (void).cxx_destruct;
- (bool)_canOpenAppWithBundleID:(id)arg1;
- (void)_doPurchaseWithAppAdamID:(id)arg1 offer:(id)arg2;
- (void)_sendCompletionWithError:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)beginInstallationWithProgressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithInstallable:(id)arg1 offer:(id)arg2 sceneIdentifier:(id)arg3;
- (id)installable;
- (id)offer;
- (id)sceneIdentifier;

@end
