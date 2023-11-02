
@interface WrappedAMSUIWebViewController : AMSUIWebViewController {
    id /* block */  _dismissBlock;
}

@property (nonatomic, copy) id /* block */ dismissBlock;

- (void).cxx_destruct;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
