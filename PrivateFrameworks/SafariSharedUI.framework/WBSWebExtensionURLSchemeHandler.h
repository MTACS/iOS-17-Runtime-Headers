
@interface WBSWebExtensionURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    WBSWebExtensionsController * _extensionsController;
    NSMapTable * _fileLoadOperations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithExtensionsController:(id)arg1;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;

@end
