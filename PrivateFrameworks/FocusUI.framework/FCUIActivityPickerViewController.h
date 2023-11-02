
@interface FCUIActivityPickerViewController : UIViewController <FCActivityManagerObserving> {
    FCActivityManager * _activityManager;
    _TtC7FocusUI26ActivityEditViewController * _editViewController;
    bool  _footerPinnedToBottom;
    bool  _isConfiguringEducationCard;
}

@property (getter=_activityManager, setter=_setActivityManager:, nonatomic, retain) FCActivityManager *activityManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_editViewController, setter=_setEditViewController:, nonatomic, retain) _TtC7FocusUI26ActivityEditViewController *editViewController;
@property (getter=isFooterPinnedToBottom, nonatomic) bool footerPinnedToBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_markOnboardingComplete;
+ (void)_markOnboardingEncountered;
+ (void)initialize;
+ (bool)isOnboardingComplete;
+ (bool)isOnboardingEncountered;

- (void).cxx_destruct;
- (id)_activityListView;
- (id)_activityManager;
- (bool)_canShowWhileLocked;
- (void)_configureActivityListViewWithAvailableActivities:(id)arg1;
- (void)_configureActivityView:(id)arg1 withLifetimesDescriptionsForActivity:(id)arg2;
- (void)_configureEducationCardIfNecessary;
- (void)_dismissHeader;
- (id)_editViewController;
- (bool)_isConfiguringEducationCard;
- (void)_openEditUI:(id)arg1;
- (void)_openSetupUI:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)_presentActivityEditUI:(id)arg1;
- (void)_setActivityManager:(id)arg1;
- (void)_setConfiguringEducationCard:(bool)arg1;
- (void)_setEditViewController:(id)arg1;
- (bool)_updateHeaderOrFooterIfNecessary;
- (void)_updatePreferredContentSize;
- (void)_updateSelectedStateOfActivityControl:(id)arg1 activeActivity:(id)arg2 lifetimeOfActiveActivity:(id)arg3;
- (void)_updateSelectedStateOfActivityViews;
- (void)activeActivityDidChangeForManager:(id)arg1;
- (void)activeActivityLifetimeDidChangeForManager:(id)arg1;
- (void)activityManager:(id)arg1 lifetimeDescriptionsDidChangeForActivity:(id)arg2;
- (void)availableActivitiesDidChangeForManager:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isFooterPinnedToBottom;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })setContractedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 representedActivity:(id)arg2 presentationStyle:(long long)arg3 transitionCoordinator:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })setExpandedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 representedActivity:(id)arg3 presentationStyle:(long long)arg4 transitionCoordinator:(id)arg5;
- (void)setFooterPinnedToBottom:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
