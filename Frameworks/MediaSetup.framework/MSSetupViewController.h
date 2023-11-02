
@interface MSSetupViewController : UIViewController <MSViewServiceHostProtocol, _UIRemoteViewControllerContaining> {
    _MSRemoteViewController * _childViewController;
    NSExtension * _extension;
    id  _extensionRequest;
    MSServiceAccount * _serviceAccount;
    unsigned long long  _testFlags;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) MSServiceAccount *serviceAccount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long testFlags;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (void)_setChildViewController:(id)arg1;
- (id)createExtension;
- (id)createExtensionItemWithServiceAccount:(id)arg1;
- (void)dealloc;
- (void)extensionHandleConnection:(id)arg1 viewController:(id)arg2 error:(id)arg3;
- (id)initWithServiceAccount:(id)arg1;
- (id)initWithServiceAccount:(id)arg1 testFlags:(unsigned long long)arg2;
- (void)requestDismiss;
- (id)serviceAccount;
- (unsigned long long)testFlags;

@end
