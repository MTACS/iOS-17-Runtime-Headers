
@interface VCMetricSubmitter : NSObject {
    VCMetricCheckIn * _checkIn;
    <WFDatabaseProvider> * _databaseProvider;
    WFMetricStatusEvent * _event;
}

@property (nonatomic, readonly) VCMetricCheckIn *checkIn;
@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) WFMetricStatusEvent *event;

+ (id)activityIdentifier;
+ (void)performWithDatabaseProvider:(id)arg1;
+ (void)scheduleWithDatabaseProvider:(id)arg1;
+ (void)scheduleWithScheduler:(id)arg1 databaseProvider:(id)arg2;

- (void).cxx_destruct;
- (bool)addWidgetMetricsToEvent:(id)arg1 error:(id*)arg2;
- (unsigned int)averageShortcutCountPerFolder:(id)arg1;
- (id)checkIn;
- (id)databaseProvider;
- (id)event;
- (unsigned int)folderCount:(id)arg1;
- (bool)hasSeenAutoShortcutsSections;
- (bool)homeAutomationsPresent:(id*)arg1;
- (id)initWithCheckIn:(id)arg1 event:(id)arg2 databaseProvider:(id)arg3;
- (id)initWithDatabaseProvider:(id)arg1;
- (bool)isAppInstalled;
- (bool)isSharingEnabled;
- (bool)isSleepEnabled;
- (unsigned int)numberOfAppSessions:(id*)arg1;
- (unsigned int)numberOfPersonalAutomationsEnabled:(id)arg1;
- (unsigned int)numberOfShortcutRuns:(id)arg1;
- (void)perform;
- (bool)personalAutomationsEnabled:(id)arg1;
- (unsigned int)shortcutsCount:(id)arg1;
- (unsigned int)sleepShortcutCount:(id)arg1;
- (unsigned int)uncategorizedShortcutCount:(id)arg1;
- (unsigned int)watchShortcutCount:(id)arg1;

@end
