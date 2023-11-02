
@interface SWWeakURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    <WKURLSchemeHandler> * _URLSchemeHandler;
}

@property (nonatomic, readonly) <WKURLSchemeHandler> *URLSchemeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLSchemeHandler;
- (id)initWithURLSchemeHandler:(id)arg1;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;

@end
