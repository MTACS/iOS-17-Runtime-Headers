
@interface MEComposeExtensionsHelper : NSObject <MEAppExtensionsObserver, MEMailComposeAppExtensionsRequestDispatcher, MEMailComposeExtensionHostDelegate> {
    MEComposeSession * _composeSession;
    <MEMailComposeExtensionDelegate> * _extensionDelegate;
    NSObject<OS_dispatch_queue> * _extensionRequestDispatcherQueue;
    MEAppExtensionsController * _extensionsController;
    EFCancelationToken * _extensionsObserverCancelable;
    EFLocked * _remoteExtensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MEMailComposeExtensionDelegate> *extensionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_dispatchMailComposeSessionDidBeginForExtensions:(id)arg1;
- (void)appExtensionViewControllerForExtensionIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)dispatchEmailAddressTokenIconRequestsForMailMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)extensionDelegate;
- (void)extensionsMatched:(id)arg1;
- (void)extensionsNoLongerMatching:(id)arg1;
- (void)getAdditionalHeadersForMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithComposeSession:(id)arg1 extensionsController:(id)arg2 iconReloader:(id)arg3;
- (void)performSendValidationForMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)regenerateEmailAddressTokenChangesForSession:(id)arg1 forContextUUID:(id)arg2;
- (void)setExtensionDelegate:(id)arg1;

@end
