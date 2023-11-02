
@interface HUTimerCreationViewController : UITableViewController <HUAlarmEditSettingViewControllerDelegate, HUTimerIntervalPickerViewDelegate, UITextFieldDelegate> {
    <HUTimerCreationDelegate> * _delegate;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    UITextField * _nameField;
    HMRoom * _selectedRoom;
    HUTimerIntervalPickerView * _timePickerView;
    double  _timerDuration;
    NSString * _timerTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTimerCreationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) UITextField *nameField;
@property (nonatomic, retain) HMRoom *selectedRoom;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUTimerIntervalPickerView *timePickerView;
@property (nonatomic) double timerDuration;
@property (nonatomic, copy) NSString *timerTitle;

- (void).cxx_destruct;
- (void)alarmEditSettingController:(id)arg1 didEditAlarm:(id)arg2;
- (void)cancelTimerCreation:(id)arg1;
- (void)createTimer:(id)arg1;
- (id)delegate;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)mediaProfileContainer;
- (id)nameField;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pickerView:(id)arg1 didChangeSelectedDuration:(double)arg2;
- (id)selectedRoom;
- (void)setDelegate:(id)arg1;
- (void)setMediaProfileContainer:(id)arg1;
- (void)setNameField:(id)arg1;
- (void)setSelectedRoom:(id)arg1;
- (void)setTimePickerView:(id)arg1;
- (void)setTimerDuration:(double)arg1;
- (void)setTimerTitle:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)timePickerView;
- (double)timerDuration;
- (id)timerTitle;
- (void)viewDidLoad;

@end
