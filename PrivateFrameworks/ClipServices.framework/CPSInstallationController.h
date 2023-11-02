
@interface CPSInstallationController : NSObject <ASDClipSessionDelegate> {
    <CPSAppInfoFetching> * _appInfoFetcher;
    <CPSInstallationControllerDelegate> * _delegate;
    NSMutableDictionary * _installPromisesBySessionID;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionsByBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSInstallationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_asdClipRequestWithSession:(id)arg1;
- (id)_bundleIDFromSession:(id)arg1;
- (void)_cancelClipSessionWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)_continueInstallForBundleID:(id)arg1 session:(id)arg2 completion:(id /* block */)arg3;
- (void)_doneWithSession:(id)arg1 error:(id)arg2;
- (void)_getClipSessionForBundleID:(id)arg1 sourceBundleID:(id)arg2 forInstall:(bool)arg3 completion:(id /* block */)arg4;
- (void)_informDelegateDidInstallPlaceholder:(id)arg1;
- (id)_placeholderArtworkForSession:(id)arg1;
- (void)_prewarmDemoIPAWithBundleID:(id)arg1 session:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelPrewarmForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)clipSession:(id)arg1 didFailWithError:(id)arg2;
- (void)clipSession:(id)arg1 didUpdateProgress:(double)arg2;
- (void)clipSessionDidCompleteSuccessfully:(id)arg1;
- (void)clipSessionDidInstallPlaceholder:(id)arg1;
- (id)delegate;
- (id)initWithAppInfoFetcher:(id)arg1;
- (void)installClipWithBundleID:(id)arg1 session:(id)arg2 completion:(id /* block */)arg3;
- (void)prewarmClipWithBundleID:(id)arg1 session:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (bool)stopStallingCurrentInstallation;

@end
