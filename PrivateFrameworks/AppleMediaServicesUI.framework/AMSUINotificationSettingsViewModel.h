
@interface AMSUINotificationSettingsViewModel : NSObject <AMSUINotificationInAppSettingsTableViewCellDelegate, UITableViewDataSource> {
    <AMSUINotificationSettingsViewModelDelegate> * _delegate;
    NSArray * _sections;
    bool  _showAllowNotificationsButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUINotificationSettingsViewModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) bool showAllowNotificationsButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)notificationInAppSettingsTableViewCellDidToggleValue:(id)arg1 forItem:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setShowAllowNotificationsButton:(bool)arg1;
- (bool)showAllowNotificationsButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
