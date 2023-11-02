
@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate> {
    SBLockScreenPlugin * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBLockScreenPlugin *plugin;
@property (readonly) Class superclass;

+ (Class)viewClass;

- (void).cxx_destruct;
- (id)_newDisplayLayoutElement;
- (long long)_presentationPriority;
- (void)_updateLegibility;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)coverSheetIdentifier;
- (bool)handleEvent:(id)arg1;
- (id)initWithLockScreenPlugin:(id)arg1;
- (void)performCustomTransitionToVisible:(bool)arg1 withAnimationSettings:(id)arg2 completion:(id /* block */)arg3;
- (id)plugin;
- (void)pluginAppearanceDidChange:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationTransition;
- (long long)presentationType;
- (id)succinctDescriptionBuilder;
- (void)updateForPresentation:(id)arg1;
- (id)view;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToPresented:(bool)arg1;

@end
