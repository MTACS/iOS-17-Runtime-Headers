
@interface DBStatusBarViewController : UIViewController {
    DBEnvironmentConfiguration * _environmentConfiguration;
    DBStatusBarStateProvider * _stateProvider;
    UIStatusBar_Modern * _statusBarView;
}

@property (nonatomic, retain) DBEnvironmentConfiguration *environmentConfiguration;
@property (nonatomic, retain) DBStatusBarStateProvider *stateProvider;
@property (nonatomic, retain) UIStatusBar_Modern *statusBarView;

- (void).cxx_destruct;
- (void)_createStatusBar;
- (void)dealloc;
- (id)environmentConfiguration;
- (bool)hasActivePill;
- (id)initWithStateProvider:(id)arg1 environmentConfiguration:(id)arg2;
- (void)setEnvironmentConfiguration:(id)arg1;
- (void)setStateProvider:(id)arg1;
- (void)setStatusBarView:(id)arg1;
- (id)stateProvider;
- (void)statusBarEdgeUpdated;
- (id)statusBarView;
- (void)viewDidLoad;

@end
