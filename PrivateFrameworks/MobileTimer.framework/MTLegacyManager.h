
@interface MTLegacyManager : NSObject {
    NSArray * _alarms;
    double  _defaultDuration;
    NSString * _defaultSound;
    bool  _loaded;
    UNUserNotificationCenter * _notificationCenter;
    bool  _purged;
    NSArray * _scheduledNotifications;
    NSObject<OS_dispatch_queue> * _serializer;
    Alarm * _sleepAlarm;
}

@property (nonatomic, retain) NSArray *alarms;
@property (nonatomic) double defaultDuration;
@property (nonatomic, copy) NSString *defaultSound;
@property (nonatomic) bool loaded;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic) bool purged;
@property (nonatomic, retain) NSArray *scheduledNotifications;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serializer;
@property (nonatomic, retain) Alarm *sleepAlarm;

+ (id)_bundleIDForUNSchedule;
+ (id)_numberFromString:(id)arg1;
+ (id)alarmFromOldAlarm:(id)arg1;
+ (unsigned long long)repeatScheduleFromOldAlarm:(id)arg1;
+ (id)sharedManager;
+ (id)soundFromOldAlarm:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelNotifications;
- (id)_copyLegacyAlarmsFromPreferences;
- (id)_copyLegacySleepAlarmFromPreferences;
- (bool)_discardOldAlarms;
- (bool)_discardOldTimers;
- (bool)_discardOldVersion;
- (void)_loadAlarms;
- (void)_loadScheduledNotifications;
- (void)_loadTimerDefaults;
- (void)_loadUserPreferences;
- (void)_purgeAlarmsAndTimers;
- (void)_reconcileAlarmsAndNotifications;
- (bool)_upgrade;
- (bool)_upgradeAlarms;
- (void)_upgradeFromSpringboardDefaults;
- (bool)_upgradeIfNeverAttempted;
- (bool)_upgradeTimers;
- (id)alarms;
- (void)cancelNotifications;
- (double)defaultDuration;
- (id)defaultSound;
- (id)init;
- (void)loadLegacyData;
- (bool)loaded;
- (id)notificationCenter;
- (void)purgeLegacyData;
- (bool)purged;
- (id)scheduledNotifications;
- (id)serializer;
- (void)setAlarms:(id)arg1;
- (void)setDefaultDuration:(double)arg1;
- (void)setDefaultSound:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setPurged:(bool)arg1;
- (void)setScheduledNotifications:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (id)sleepAlarm;

@end
