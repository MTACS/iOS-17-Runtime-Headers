
@interface SOHostExtensionContext : NSExtensionContext <SOHostExtensionContextProtocol> {
    SOExtension * _contextExtension;
}

@property SOExtension *contextExtension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)authorization:(id)arg1 didCompleteWithCredential:(id)arg2 error:(id)arg3;
- (void)canOpenURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)contextExtension;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 requestIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)remoteContextWithError:(id*)arg1;
- (void)requestReauthenticationWithRequestIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setContextExtension:(id)arg1;

@end
