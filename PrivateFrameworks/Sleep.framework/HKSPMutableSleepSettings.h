
@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject> {
    HKSPChangeSet * _changeSet;
    <HKSPObject> * _originalObject;
}

@property (nonatomic) bool bedtimeReminders;
@property (nonatomic, readonly) HKSPChangeSet *changeSet;
@property (nonatomic) bool chargingReminders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) <HKSPObject> *originalObject;
@property (nonatomic) bool scheduledSleepMode;
@property (nonatomic) bool shareAcrossDevices;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) bool sleepTracking;
@property (nonatomic) bool springBoardGreetingDisabled;
@property (nonatomic) bool springBoardSuggestedPageCreated;
@property (readonly) Class superclass;
@property (nonatomic) bool timeInBedTracking;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic) bool wakeUpResults;
@property (nonatomic) bool watchSleepFeaturesEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)bedtimeReminders;
- (id)changeSet;
- (bool)chargingReminders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastModifiedDate;
- (id)mutableCopy;
- (id)originalObject;
- (void)revert;
- (bool)scheduledSleepMode;
- (void)setBedtimeReminders:(bool)arg1;
- (void)setChargingReminders:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setScheduledSleepMode:(bool)arg1;
- (void)setShareAcrossDevices:(bool)arg1;
- (void)setSleepModeOptions:(unsigned long long)arg1;
- (void)setSleepTracking:(bool)arg1;
- (void)setSpringBoardGreetingDisabled:(bool)arg1;
- (void)setSpringBoardSuggestedPageCreated:(bool)arg1;
- (void)setTimeInBedTracking:(bool)arg1;
- (void)setWakeUpResults:(bool)arg1;
- (void)setWatchSleepFeaturesEnabled:(bool)arg1;
- (bool)shareAcrossDevices;
- (unsigned long long)sleepModeOptions;
- (bool)sleepTracking;
- (bool)springBoardGreetingDisabled;
- (bool)springBoardSuggestedPageCreated;
- (bool)timeInBedTracking;
- (bool)wakeUpResults;
- (bool)watchSleepFeaturesEnabled;

@end
