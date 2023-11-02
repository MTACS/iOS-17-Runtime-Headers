
@interface CXExtensionCallSource : CXCallSource {
    NSExtension * _extension;
    CXProviderExtensionHostContext * _extensionContext;
    <NSCopying> * _requestIdentifier;
}

@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) CXProviderExtensionHostContext *extensionContext;
@property (nonatomic, copy) <NSCopying> *requestIdentifier;

- (void).cxx_destruct;
- (void)beginWithCompletionHandler:(id /* block */)arg1;
- (id)bundle;
- (id)extension;
- (id)extensionContext;
- (id)init;
- (id)initWithExtension:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1;
- (int)processIdentifier;
- (id)requestIdentifier;
- (void)setExtension:(id)arg1;
- (void)setExtensionContext:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (id)vendorProtocolDelegate;

@end
