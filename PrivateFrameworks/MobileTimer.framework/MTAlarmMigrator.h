
@interface MTAlarmMigrator : NSObject {
    NSMutableArray * _alarms;
    MTAlarm * _sleepAlarm;
}

@property (nonatomic, retain) NSMutableArray *alarms;
@property (nonatomic, retain) MTAlarm *sleepAlarm;

- (void).cxx_destruct;
- (id)alarms;
- (void)cleanUpOldNotifications;
- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;
- (void)setAlarms:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (id)sleepAlarm;

@end
