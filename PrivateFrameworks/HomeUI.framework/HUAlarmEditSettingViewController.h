
@interface HUAlarmEditSettingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MTMutableAlarm * _alarm;
    <HUAlarmEditSettingViewControllerDelegate> * _delegate;
    HUAlarmEditableTextCell * _editingCell;
    unsigned long long  _firstWeekday;
    NSString * _loggedInAppleMusicAccountDSID;
    unsigned long long  _repeatSchedule;
    NSMutableArray * _roomsList;
    HMRoom * _selectedRoom;
    long long  _setting;
    UITableView * _tableView;
}

@property (nonatomic, copy) MTMutableAlarm *alarm;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAlarmEditSettingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUAlarmEditableTextCell *editingCell;
@property (nonatomic) unsigned long long firstWeekday;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *loggedInAppleMusicAccountDSID;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, retain) NSMutableArray *roomsList;
@property (nonatomic, retain) HMRoom *selectedRoom;
@property (nonatomic) long long setting;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_commonInitialization;
- (void)_dismiss;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_setupPlayInSettingWithMediaProfileContainer:(id)arg1;
- (id)alarm;
- (void)dealloc;
- (id)delegate;
- (id)editingCell;
- (unsigned long long)firstWeekday;
- (id)initPlayInSettingWithMediaProfileContainer:(id)arg1 selectedRoom:(id)arg2;
- (id)initWithAlarm:(id)arg1 setting:(long long)arg2 mediaProfileContainer:(id)arg3 selectedRoom:(id)arg4 loggedInAppleMusicAccountDSID:(id)arg5;
- (void)loadView;
- (id)loggedInAppleMusicAccountDSID;
- (unsigned int)maskForRow:(long long)arg1;
- (unsigned long long)repeatSchedule;
- (id)roomsList;
- (id)selectedRoom;
- (void)setAlarm:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingCell:(id)arg1;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (void)setRepeatSchedule:(unsigned long long)arg1;
- (void)setRoomsList:(id)arg1;
- (void)setSelectedRoom:(id)arg1;
- (void)setSetting:(long long)arg1;
- (void)setTableView:(id)arg1;
- (long long)setting;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textValueChanged:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
