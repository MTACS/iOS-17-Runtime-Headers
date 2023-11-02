
@interface SBLeftOfHomeAppViewController : UIViewController <SBApplicationHosting, SBHVisibleContentPresenter> {
    SBAppViewController * _appViewController;
    unsigned long long  _contentVisibility;
}

@property (nonatomic, retain) SBAppViewController *appViewController;
@property (nonatomic) unsigned long long contentVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)appViewController;
- (bool)canHostAnApp;
- (void)conformsToSBApplicationHosting;
- (unsigned long long)contentVisibility;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (bool)isHostingAnApp;
- (void)setAppViewController:(id)arg1;
- (void)setContentVisibility:(unsigned long long)arg1;
- (void)setHostedAppReferenceSize:(struct CGSize { double x1; double x2; })arg1 withInterfaceOrientation:(long long)arg2;
- (void)viewDidLoad;

@end
