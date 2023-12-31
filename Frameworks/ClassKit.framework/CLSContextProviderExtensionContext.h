
@interface CLSContextProviderExtensionContext : NSExtensionContext <CLSContextProvider, CLSContextProviderInternal>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)getMainAppContextPathWithCompletion:(id /* block */)arg1;
- (void)updateDescendantsOfContext:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDescendantsOfContextPath:(id)arg1 completion:(id /* block */)arg2;

@end
