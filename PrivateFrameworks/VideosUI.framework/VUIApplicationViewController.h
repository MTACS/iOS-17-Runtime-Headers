
@interface VUIApplicationViewController : UIViewController <UIGestureRecognizerDelegate, VUITVApplicationControllerDelegate> {
    VUITVApplicationController * _applicationController;
    VUIBootURLController * _bootURLController;
    _TtC8VideosUI20VUIJetPackController * _jetPackController;
    UINavigationController * _navigationController;
}

@property (nonatomic, retain) VUITVApplicationController *applicationController;
@property (nonatomic, retain) VUIBootURLController *bootURLController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TtC8VideosUI20VUIJetPackController *jetPackController;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_applicationControllerClass;
- (void)_exposeObjectsInJSContext:(id)arg1;
- (id)_initialViewControllerWithAppContext:(id)arg1;
- (id)_launchOptions;
- (void)_startApplicationControllerWithBootURL:(id)arg1;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)applicationController;
- (id)bootURLController;
- (void)dealloc;
- (id)jetPackController;
- (id)navigationController;
- (id)preferredFocusEnvironments;
- (void)setApplicationController:(id)arg1;
- (void)setBootURLController:(id)arg1;
- (void)setJetPackController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)viewDidLoad;

@end
