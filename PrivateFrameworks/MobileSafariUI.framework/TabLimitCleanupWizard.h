
@interface TabLimitCleanupWizard : NSObject {
    BrowserController * _browserController;
    bool  _privateBrowsing;
    id /* block */  _resultHandler;
}

- (void).cxx_destruct;
- (id)_cleanupGroupForRange:(long long)arg1;
- (id)_smallCleanupGroup;
- (id)initForPrivateBrowsing:(bool)arg1 withBrowserController:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)makeViewController;

@end
