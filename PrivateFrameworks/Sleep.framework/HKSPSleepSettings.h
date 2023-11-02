
@interface HKSPSleepSettings : NSObject <BSDescriptionProviding, HKSPDictionarySerializable, HKSPFeatureSettingsModel, HKSPObject, HKSPXPCObject, NAEquatable, NAHashable, NSCopying, NSMutableCopying> {
    bool  _bedtimeReminders;
    bool  _chargingReminders;
    NSDate * _lastModifiedDate;
    bool  _scheduledSleepMode;
    bool  _shareAcrossDevices;
    unsigned long long  _sleepModeOptions;
    bool  _sleepTracking;
    bool  _springBoardGreetingDisabled;
    bool  _springBoardSuggestedPageCreated;
    <HKSPSyncAnchor> * _syncAnchor;
    bool  _timeInBedTracking;
    unsigned long long  _version;
    bool  _wakeUpResults;
    bool  _watchSleepFeaturesEnabled;
}

@property (nonatomic, readonly) bool bedtimeReminders;
@property (nonatomic, readonly) bool chargingReminders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) bool scheduledSleepMode;
@property (nonatomic, readonly) bool shareAcrossDevices;
@property (nonatomic, readonly) unsigned long long sleepModeOptions;
@property (nonatomic, readonly) bool sleepTracking;
@property (nonatomic, readonly) bool springBoardGreetingDisabled;
@property (nonatomic, readonly) bool springBoardSuggestedPageCreated;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKSPSyncAnchor> *syncAnchor;
@property (nonatomic, readonly) bool timeInBedTracking;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) bool wakeUpResults;
@property (nonatomic, readonly) bool watchSleepFeaturesEnabled;

+ (id)allProperties;
+ (id)propertiesForEquivalence;
+ (id)significantProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_migrateForCoder:(id)arg1;
- (bool)_needsMigrationForCoder:(id)arg1;
- (bool)bedtimeReminders;
- (bool)chargingReminders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModel:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (id)lastModifiedDate;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectWithSyncAnchor:(id)arg1;
- (bool)scheduledSleepMode;
- (bool)shareAcrossDevices;
- (unsigned long long)sleepModeOptions;
- (bool)sleepTracking;
- (bool)springBoardGreetingDisabled;
- (bool)springBoardSuggestedPageCreated;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)syncAnchor;
- (bool)timeInBedTracking;
- (unsigned long long)version;
- (bool)wakeUpResults;
- (bool)watchSleepFeaturesEnabled;

@end
