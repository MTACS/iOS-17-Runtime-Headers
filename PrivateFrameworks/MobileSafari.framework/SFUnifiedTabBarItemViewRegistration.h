
@interface SFUnifiedTabBarItemViewRegistration : NSObject {
    id /* block */  _configurationHandler;
    id /* block */  _viewProvider;
    NSMutableArray * _viewReuseStack;
}

- (void).cxx_destruct;
- (void)configureView:(id)arg1 forItem:(id)arg2 inArrangement:(id)arg3 isPreview:(bool)arg4;
- (id)createItemView;
- (id)dequeueOrCreateViewForItem:(id)arg1 isPreview:(bool)arg2;
- (void)enqueueItemView:(id)arg1;
- (id)initWithViewProvider:(id /* block */)arg1 configurationHandler:(id /* block */)arg2;

@end
