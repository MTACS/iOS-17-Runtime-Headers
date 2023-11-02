
@interface EKEventAlarmDetailItem : EKEventDetailItem {
    NSMutableArray * _alarmPopupMenus;
    NSArray * _alarms;
    EKAlarmsViewModel * _alarmsViewModel;
    unsigned long long  _disclosedSubitem;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
}

@property (nonatomic, retain) EKAlarmsViewModel *alarmsViewModel;

- (void).cxx_destruct;
- (bool)_alarmsAreCreatable;
- (bool)_alarmsAreEditable;
- (id)_createRealPopupMenuForIndex:(long long)arg1 popupCell:(id)arg2;
- (void)_updateAlarms;
- (id)alarmsViewModel;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)setAlarmsViewModel:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)ttlLocationStatusChanged:(id)arg1;

@end
