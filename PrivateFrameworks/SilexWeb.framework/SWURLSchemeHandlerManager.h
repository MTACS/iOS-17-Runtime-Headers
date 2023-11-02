
@interface SWURLSchemeHandlerManager : NSObject <SWURLSchemeHandlerManager> {
    WKWebViewConfiguration * _configuration;
    NSMutableDictionary * _factories;
    NSMapTable * _handlers;
    <SWLogger> * _logger;
}

@property (nonatomic, readonly) WKWebViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *factories;
@property (nonatomic, readonly) NSMapTable *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)factories;
- (id)handlers;
- (id)initWithConfiguration:(id)arg1 logger:(id)arg2;
- (id)logger;
- (void)registerFactory:(id)arg1 forScheme:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;

@end
