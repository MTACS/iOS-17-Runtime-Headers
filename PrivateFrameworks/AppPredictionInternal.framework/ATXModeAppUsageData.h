
@interface ATXModeAppUsageData : NSObject {
    NSMutableDictionary * _appCategoryDict;
    NSMutableDictionary * _appNameDict;
    NSSet * _bundleIDs;
    NSMutableDictionary * _deviceUnlockActivity;
    NSMutableDictionary * _dndUsage;
    NSDate * _firstModeSessionDate;
    NSMutableDictionary * _launchCounts;
    NSMutableDictionary * _modeCounts;
    NSMutableDictionary * _modeTime;
    NSArray * _modeTimeline;
    NSMutableDictionary * _notificationUsage;
    NSMutableDictionary * _peopleStats;
    NSMutableDictionary * _screenTime;
    NSDate * _sinceDate;
    double  _timespan;
    NSDate * _updateDate;
}

@property (nonatomic, retain) NSMutableDictionary *appCategoryDict;
@property (nonatomic, retain) NSMutableDictionary *appNameDict;
@property (nonatomic, retain) NSSet *bundleIDs;
@property (nonatomic, retain) NSMutableDictionary *deviceUnlockActivity;
@property (nonatomic, retain) NSMutableDictionary *dndUsage;
@property (nonatomic, retain) NSDate *firstModeSessionDate;
@property (nonatomic, retain) NSMutableDictionary *launchCounts;
@property (nonatomic, retain) NSMutableDictionary *modeCounts;
@property (nonatomic, retain) NSMutableDictionary *modeTime;
@property (nonatomic, retain) NSArray *modeTimeline;
@property (nonatomic, retain) NSMutableDictionary *notificationUsage;
@property (nonatomic, retain) NSMutableDictionary *peopleStats;
@property (nonatomic, retain) NSMutableDictionary *screenTime;
@property (nonatomic, retain) NSDate *sinceDate;
@property (nonatomic) double timespan;
@property (nonatomic, retain) NSDate *updateDate;

- (void).cxx_destruct;
- (id)appCategoryDict;
- (id)appNameDict;
- (id)bundleIDs;
- (id)deviceUnlockActivity;
- (id)dictionaryRepresentation;
- (id)dndUsage;
- (id)firstModeSessionDate;
- (id)init;
- (id)launchCounts;
- (id)modeCounts;
- (id)modeTime;
- (id)modeTimeline;
- (id)notificationUsage;
- (id)peopleStats;
- (id)screenTime;
- (void)setAppCategoryDict:(id)arg1;
- (void)setAppNameDict:(id)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)setDeviceUnlockActivity:(id)arg1;
- (void)setDndUsage:(id)arg1;
- (void)setFirstModeSessionDate:(id)arg1;
- (void)setLaunchCounts:(id)arg1;
- (void)setModeCounts:(id)arg1;
- (void)setModeTime:(id)arg1;
- (void)setModeTimeline:(id)arg1;
- (void)setNotificationUsage:(id)arg1;
- (void)setPeopleStats:(id)arg1;
- (void)setScreenTime:(id)arg1;
- (void)setSinceDate:(id)arg1;
- (void)setTimespan:(double)arg1;
- (void)setUpdateDate:(id)arg1;
- (id)sinceDate;
- (double)timespan;
- (id)updateDate;

@end
