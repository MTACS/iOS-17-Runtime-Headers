
@interface SOExtensionViewService : UIViewController <SORemoteExtensionViewProtocol> {
    SORemoteExtensionContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property SORemoteExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_connectChildView;
- (void)connectToContextWithSessionID:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (id)extensionContext;
- (void)loadView;
- (id)remoteViewControllerInterface;
- (void)setExtensionContext:(id)arg1;

@end
