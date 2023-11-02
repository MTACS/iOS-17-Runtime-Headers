
@interface AMSUICommonErrorViewController : AMSUICommonViewController {
    <AMSBagProtocol> * _bag;
    id /* block */  _cancelAction;
    NSError * _error;
    AMSUIErrorView * _errorView;
    NSString * _logKey;
    id /* block */  _retryAction;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, copy) id /* block */ cancelAction;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) AMSUIErrorView *errorView;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, copy) id /* block */ retryAction;

- (void).cxx_destruct;
- (void)_cancelButtonAction;
- (void)_setup;
- (void)_setupNavigationItem;
- (void)_showCancelButton;
- (id)bag;
- (id /* block */)cancelAction;
- (id)error;
- (id)errorView;
- (id)initWithError:(id)arg1 logKey:(id)arg2 bag:(id)arg3 retryAction:(id /* block */)arg4 cancelAction:(id /* block */)arg5;
- (void)loadView;
- (id)logKey;
- (id)navigationItem;
- (id /* block */)retryAction;
- (void)setBag:(id)arg1;
- (void)setCancelAction:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setErrorView:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setRetryAction:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
