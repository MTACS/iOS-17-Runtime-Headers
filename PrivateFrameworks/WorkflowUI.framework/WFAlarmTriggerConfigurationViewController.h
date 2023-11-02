
@interface WFAlarmTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFAlarmChooserViewControllerDelegate> {
    MTAlarmDataSource * _alarmDataSource;
}

@property (nonatomic, readonly) MTAlarmDataSource *alarmDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)accessoryTypeForCellInSection:(id)arg1 item:(id)arg2;
- (void)alarmChooserViewController:(id)arg1 didFinishWithChosenAlarms:(id)arg2;
- (void)alarmChooserViewControllerDidCancel:(id)arg1;
- (id)alarmDataSource;
- (id)customSections;
- (id)extraTextForCellInSection:(id)arg1 item:(id)arg2;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentAlarmChooserViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (id)titleForCellInSection:(id)arg1 item:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
