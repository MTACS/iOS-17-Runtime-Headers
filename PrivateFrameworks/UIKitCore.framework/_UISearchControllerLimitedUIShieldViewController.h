
@interface _UISearchControllerLimitedUIShieldViewController : UIViewController {
    id /* block */  _dismissAction;
    _UISearchControllerLimitedAccessView * _limitedAccessView;
}

@property (nonatomic, copy) id /* block */ dismissAction;
@property (nonatomic, retain) _UISearchControllerLimitedAccessView *limitedAccessView;

- (void).cxx_destruct;
- (void)_backButtonPressed:(id)arg1;
- (void)dealloc;
- (id /* block */)dismissAction;
- (id)limitedAccessView;
- (void)loadView;
- (void)setDismissAction:(id /* block */)arg1;
- (void)setLimitedAccessView:(id)arg1;

@end
