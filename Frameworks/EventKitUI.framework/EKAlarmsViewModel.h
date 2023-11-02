
@interface EKAlarmsViewModel : NSObject {
    EKCalendarItem * _calendarItem;
    bool  _canHaveLeaveNowAlarm;
    bool  _hasLeaveNowAlarm;
    unsigned long long  _locationStatus;
    bool  _needsUpdate;
    NSMutableArray * _uiAlarms;
}

@property (nonatomic, retain) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) bool canHaveLeaveNowAlarm;
@property (nonatomic, readonly) bool hasLeaveNowAlarm;
@property (nonatomic, readonly) unsigned long long locationStatus;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) NSMutableArray *uiAlarms;

+ (id)_noneAlertTitle;
+ (id)labelTextForIndex:(unsigned long long)arg1;
+ (void)subscribeToDarwinNotifications;
+ (void)unsubscribeFromDarwinNotifications;

- (void).cxx_destruct;
- (id)_errorTitleForDisabledTTLAlarm;
- (bool)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2;
- (id)_menuForAlarmAtIndex:(unsigned long long)arg1 placeholder:(bool)arg2 actionHandler:(id /* block */)arg3;
- (void)_updateAlarms;
- (void)_updateLeaveNowFlags;
- (id)calendarItem;
- (bool)canHaveLeaveNowAlarm;
- (void)dealloc;
- (bool)hasLeaveNowAlarm;
- (id)init;
- (id)initWithCalendarItem:(id)arg1;
- (bool)isAlarmEffectivelyDisabled:(id)arg1;
- (unsigned long long)locationStatus;
- (bool)locationStatusMakesTTLAlarmDisabled;
- (id)menuForAlarmAtIndex:(unsigned long long)arg1 actionHandler:(id /* block */)arg2;
- (bool)needsUpdate;
- (id)placeholderMenuForAlarmAtIndex:(unsigned long long)arg1;
- (id)presetAlarmsIntervals;
- (void)reloadTTLLocationAuthorization:(id)arg1;
- (void)setCalendarItem:(id)arg1;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setUiAlarms:(id)arg1;
- (bool)showDefaultAlarm:(id)arg1;
- (id)uiAlarms;
- (void)updateIfNeeded;
- (void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
