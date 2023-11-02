
@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder> {
    HKSourceListDataSource * _appsDataSource;
    HKSourceListDataSource * _devicesDataSource;
    NSString * _restorationSourceBundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *restorationSourceBundleIdentifier;
@property (readonly) Class superclass;

+ (id)tableViewSectionClasses;

- (void).cxx_destruct;
- (void)_updateActivityForViewDidAppear;
- (void)applicationWillEnterForeground;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)initWithProfile:(id)arg1 usingInsetStyling:(bool)arg2;
- (void)pushViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)restorationSourceBundleIdentifier;
- (void)setRestorationSourceBundleIdentifier:(id)arg1;
- (id)uniqueUserActivityType;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
