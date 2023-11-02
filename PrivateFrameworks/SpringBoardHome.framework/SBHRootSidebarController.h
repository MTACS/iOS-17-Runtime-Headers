
@interface SBHRootSidebarController : UIViewController <SBHSidebarProvider, UIGestureRecognizerDelegate> {
    UIViewController * _avocadoViewController;
    <SBHSidebarProviderDelegate> * _delegate;
    unsigned long long  _layoutInsetsIgnoredEdges;
    _UILegibilitySettings * _legibilitySettings;
    SBHSidebarVisualConfiguration * _sidebarVisualConfiguration;
    NSMutableArray * _widgetViewControllerConstraints;
}

@property (nonatomic, retain) UIViewController *avocadoViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHSidebarProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *widgetViewControllerConstraints;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureAvocadoViewController;
- (void)_configureLayoutMargins;
- (void)_setupConstraintsForViewController:(id)arg1;
- (id)avocadoViewController;
- (id)delegate;
- (unsigned long long)layoutInsetsIgnoredEdges;
- (id)legibilitySettings;
- (void)setAvocadoViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingIcons:(bool)arg1;
- (void)setLayoutInsetsIgnoredEdges:(unsigned long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSidebarVisualConfiguration:(id)arg1;
- (void)setWidgetViewControllerConstraints:(id)arg1;
- (id)sidebarVisualConfiguration;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)widgetViewControllerConstraints;

@end
