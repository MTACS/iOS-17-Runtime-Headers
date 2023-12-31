
@interface PSOAuthAccountRedirectURLController : NSObject {
    NSMapTable * _redirectHandlerMap;
}

@property (nonatomic, retain) NSMapTable *redirectHandlerMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_redirectURLFromURL:(id)arg1;
- (bool)handleOAuthRedirectURL:(id)arg1;
- (id)init;
- (id)redirectHandlerMap;
- (void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(id /* block */)arg2;
- (void)setRedirectHandlerMap:(id)arg1;
- (void)unRegisterOAuthClientForRedirectURL:(id)arg1;

@end
