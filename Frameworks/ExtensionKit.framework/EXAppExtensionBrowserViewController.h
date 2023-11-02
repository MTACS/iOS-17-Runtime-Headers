
@interface EXAppExtensionBrowserViewController : UIViewController {
    _EXHostViewController * _hostViewController;
}

@property (readonly) _EXHostViewController *hostViewController;

- (void).cxx_destruct;
- (void)beginHosting;
- (id)hostViewController;
- (void)loadView;
- (void)viewWillAppear:(bool)arg1;

@end
