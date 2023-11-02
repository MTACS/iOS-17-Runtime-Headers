
@interface ASCredentialProviderViewController : UIViewController

@property (nonatomic, readonly) ASCredentialProviderExtensionContext *extensionContext;

- (id)extensionContext;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1 requestParameters:(id)arg2;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceForPasskeyRegistration:(id)arg1;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1;
- (void)prepareInterfaceToProvideCredentialForRequest:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForRequest:(id)arg1;

@end
