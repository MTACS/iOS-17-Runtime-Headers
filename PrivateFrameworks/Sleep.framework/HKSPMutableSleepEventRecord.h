
@interface HKSPMutableSleepEventRecord : HKSPSleepEventRecord <HKSPMutableObject> {
    HKSPChangeSet * _changeSet;
    <HKSPObject> * _originalObject;
}

@property (nonatomic, readonly) HKSPChangeSet *changeSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *goodMorningDismissedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) <HKSPObject> *originalObject;
@property (nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (nonatomic, copy) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (nonatomic, copy) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (nonatomic, copy) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, copy) NSDate *wakeUpAlarmDismissedDate;
@property (nonatomic, copy) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (nonatomic, copy) NSDate *wakeUpConfirmedUntilDate;
@property (nonatomic, copy) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (nonatomic, copy) NSDate *wakeUpOverriddenDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)goodMorningDismissedDate;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastModifiedDate;
- (id)mutableCopy;
- (id)originalObject;
- (void)revert;
- (void)setGoodMorningDismissedDate:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1;
- (void)setSleepCoachingOnboardingFirstCompletedDate:(id)arg1;
- (void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1;
- (void)setSleepTrackingOnboardingFirstCompletedDate:(id)arg1;
- (void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1;
- (void)setSleepWindDownShortcutsOnboardingFirstCompletedDate:(id)arg1;
- (void)setWakeUpAlarmDismissedDate:(id)arg1;
- (void)setWakeUpAlarmSnoozedUntilDate:(id)arg1;
- (void)setWakeUpConfirmedUntilDate:(id)arg1;
- (void)setWakeUpEarlyNotificationConfirmedDate:(id)arg1;
- (void)setWakeUpOverriddenDate:(id)arg1;
- (long long)sleepCoachingOnboardingCompletedVersion;
- (id)sleepCoachingOnboardingFirstCompletedDate;
- (long long)sleepTrackingOnboardingCompletedVersion;
- (id)sleepTrackingOnboardingFirstCompletedDate;
- (long long)sleepWindDownShortcutsOnboardingCompletedVersion;
- (id)sleepWindDownShortcutsOnboardingFirstCompletedDate;
- (void)updateSleepCoachingOnboardingCompletedVersion:(long long)arg1 completedDate:(id)arg2;
- (void)updateSleepTrackingOnboardingCompletedVersion:(long long)arg1 completedDate:(id)arg2;
- (void)updateSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completedDate:(id)arg2;
- (id)wakeUpAlarmDismissedDate;
- (id)wakeUpAlarmSnoozedUntilDate;
- (id)wakeUpConfirmedUntilDate;
- (id)wakeUpEarlyNotificationConfirmedDate;
- (id)wakeUpOverriddenDate;

@end
