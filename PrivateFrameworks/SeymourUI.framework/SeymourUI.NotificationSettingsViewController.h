
@interface SeymourUI.NotificationSettingsViewController : UIViewController <UITableViewDataSource> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _fitnessPlusNotificationSettingsEnabled;
    void accountProvider;
    void browsingStringBuilder;
    void contentAvailabilityClient;
    void contentUnavailableView;
    void eventHub;
    void fitnessModeObserver;
    void fitnessPlusSettingsResult;
    void loadingView;
    void networkEvaluator;
    void notificationSettingsProvider;
    void notifyToken;
    void platform;
    void spinnerView;
    void storefrontLocalizer;
    void subscriptionToken;
    void syncManager;
    void tableView;
    void wheelchairStatus;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchTappedWithCellSwitch:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateSettings;
- (void)viewDidLoad;

@end
