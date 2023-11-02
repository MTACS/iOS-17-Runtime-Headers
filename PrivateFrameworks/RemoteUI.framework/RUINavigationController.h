
@interface RUINavigationController : UINavigationController {
    UIViewController * _hostViewController;
    bool  _isDismissing;
    id /* block */  _menuDismissalHandler;
    unsigned long long  _ruiModalPresentationStyle;
    unsigned long long  _ruiSupportedInterfaceOrientations;
    RUIStyle * _style;
    id /* block */  _viewDidDisappearHandler;
}

@property (nonatomic) UIViewController *hostViewController;
@property (nonatomic, readonly) bool isDismissing;
@property (nonatomic, copy) id /* block */ menuDismissalHandler;
@property (nonatomic) unsigned long long ruiModalPresentationStyle;
@property (nonatomic, retain) RUIStyle *style;
@property (nonatomic, copy) id /* block */ viewDidDisappearHandler;

- (void).cxx_destruct;
- (void)_menuButtonPressed:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)hostViewController;
- (bool)isDismissing;
- (void)loadView;
- (id /* block */)menuDismissalHandler;
- (unsigned long long)ruiModalPresentationStyle;
- (void)setHostViewController:(id)arg1;
- (void)setIsDismissing:(bool)arg1;
- (void)setMenuDismissalHandler:(id /* block */)arg1;
- (void)setRuiModalPresentationStyle:(unsigned long long)arg1;
- (void)setStyle:(id)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setViewDidDisappearHandler:(id /* block */)arg1;
- (id)style;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id /* block */)viewDidDisappearHandler;
- (void)viewDidLoad;

@end
