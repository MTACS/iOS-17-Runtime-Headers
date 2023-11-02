
@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {
    NSArray * _alarms;
    EKAlarmsViewModel * _alarmsViewModel;
    bool  _canHaveLeaveNowAlarm;
    unsigned long long  _disclosedSubitem;
    bool  _hasLeaveNowAlarm;
}

@property (nonatomic, retain) EKAlarmsViewModel *alarmsViewModel;

- (void).cxx_destruct;
- (bool)_alarmsMatchCalendarItem;
- (bool)_calendarItemHasLeaveNowAlarm;
- (void)_updateAlarms;
- (id)alarmsViewModel;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureForCalendarConstraints:(id)arg1;
- (id)footerTitle;
- (unsigned long long)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)setAlarmsViewModel:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)ttlLocationStatusChanged:(id)arg1;

@end
