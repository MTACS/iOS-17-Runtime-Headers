
@interface POExtension : NSObject <POExtensionRegistrationHostProtocol, SOExtensionDelegate> {
    <POExtensionDelegate> * _delegate;
    SOExtension * _extension;
    SORemoteExtensionViewController * _extensionViewController;
    NSNumber * _sdkVersionString;
}

@property (nonatomic, readonly) NSArray *authenticationMethods;
@property (readonly) NSString *containerAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property <POExtensionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *sdkVersionString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationMethods;
- (void)authorization:(id)arg1 didCompleteWithCredential:(id)arg2 error:(id)arg3;
- (void)beginDeviceRegistrationUsingOptions:(long long)arg1 extensionData:(id)arg2 completion:(id /* block */)arg3;
- (void)beginUserRegistrationUsingUserName:(id)arg1 authenticationMethod:(int)arg2 options:(long long)arg3 extensionData:(id)arg4 completion:(id /* block */)arg5;
- (bool)canPerformRegistration;
- (void)close;
- (id)containerAppBundleIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)initWithExtensionBundleIdentifier:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 extensionManager:(id)arg2;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(id /* block */)arg2;
- (long long)protocolVersion;
- (void)registrationDidCancelWithCompletion:(id /* block */)arg1;
- (void)registrationDidCompleteWithCompletion:(id /* block */)arg1;
- (id)sdkVersionString;
- (void)setDelegate:(id)arg1;
- (long long)supportedGrantTypes;
- (void)unload;

@end
