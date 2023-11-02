
@interface MTMutableAlarm : MTAlarm

@property (nonatomic) bool allowsSnooze;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic, copy) NSNumber *bedtimeReminder;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (nonatomic, copy) NSDate *bypassReloadDate;
@property (nonatomic) unsigned long long day;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long month;
@property (nonatomic) unsigned long long playOptions;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, copy) NSDictionary *siriContext;
@property (nonatomic) bool sleepMode;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) bool sleepSchedule;
@property (nonatomic) bool sleepTracking;
@property (nonatomic, copy) MTSound *sound;
@property (nonatomic) bool timeInBedTracking;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long year;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (void)applyChangesFromChangeSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

- (void)co_setHomeKitSaveDate:(id)arg1;
- (void)co_setIsMediaSystemOriginating;
- (void)co_setTargetReference:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void)hf_moveToRoom:(id)arg1 withMediaProfileContainer:(id)arg2;

@end
