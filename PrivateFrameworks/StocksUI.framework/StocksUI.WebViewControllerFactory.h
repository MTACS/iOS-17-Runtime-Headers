
@interface StocksUI.WebViewControllerFactory : NSObject <NUWebViewControllerFactoryType> {
    void navigator;
    void resolver;
    void sceneStateManager;
}

- (void).cxx_destruct;
- (id)createViewControllerForURL:(id)arg1;
- (id)init;

@end
