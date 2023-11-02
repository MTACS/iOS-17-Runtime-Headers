
@interface MagnifierSupport.ActivityDetectionModeUniversalSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void activity;
    void availablePauseDetectionModeFeedbacks;
    void delegate;
    void speechFeedbackSubscription;
    void tableView;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)didToggleDetectLanguagesSwitch:(id)arg1;
- (void)didToggleFeedbackSwitch:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
