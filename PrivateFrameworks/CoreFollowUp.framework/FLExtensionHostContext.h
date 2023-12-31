
@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface> {
    <FLExtensionHostContextInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FLExtensionHostContextInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)delegate;
- (void)extensionDidFinish;
- (void)extensionDidFinishWithUserInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteContextWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
