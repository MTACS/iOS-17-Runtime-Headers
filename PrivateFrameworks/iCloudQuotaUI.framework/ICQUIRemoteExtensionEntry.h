
@interface ICQUIRemoteExtensionEntry : _EXExtension <iCloudQuotaUI.ExtensionXPCProtocol> {
    NSXPCConnection * _currentConnection;
    NSDictionary * _offerContext;
}

@property (nonatomic) NSXPCConnection *currentConnection;
@property (nonatomic, retain) NSDictionary *offerContext;
@property (nonatomic, readonly) <ICQUIRemoteExtensionDelegate> *transformer;

+ (void)dismissRemoteViewControllerWithError:(id)arg1;
+ (id)extensionPointID;
+ (void)presentRemoteViewControllerWithContext:(id)arg1 presentingViewController:(id)arg2 completion:(id /* block */)arg3;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)currentConnection;
- (void)dismissViewControllerWithError:(id)arg1;
- (id)extensionMakeContentViewController;
- (void)extensionPrepareForSceneConnectionWith:(id)arg1;
- (bool)extensionShouldAccept:(id)arg1;
- (id)init;
- (id)makeContentViewController;
- (id)offerContext;
- (void)prepareForSceneConnectionWithConfiguration:(id)arg1;
- (void)setCurrentConnection:(id)arg1;
- (void)setOfferContext:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (void)startConnectionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)transformer;

@end
