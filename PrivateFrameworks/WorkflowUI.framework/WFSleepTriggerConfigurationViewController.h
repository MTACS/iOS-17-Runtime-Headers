
@interface WFSleepTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFHealthFeatureObserver> {
    WFHealthFeatureAvailability * _healthFeatureAvailability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFHealthFeatureAvailability *healthFeatureAvailability;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)customSections;
- (id)footerLinkViewForTableView:(id)arg1;
- (id)healthFeatureAvailability;
- (void)healthFeatureAvailability:(id)arg1 sleepOnboardingStatusDidChange:(unsigned long long)arg2;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupParameterSectionCell:(id)arg1 atRow:(long long)arg2;
- (bool)shouldEnableNextButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)updateUI;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
