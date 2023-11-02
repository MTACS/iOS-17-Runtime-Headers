
@interface TPSContextualInfo : TPSSerializableObject {
    long long  _customizationID;
    TPSContextualCondition * _desiredOutcomeCondition;
    NSArray * _displayBundleIDs;
    long long  _displayMaxCount;
    NSArray * _eligibleContext;
    NSString * _identifier;
    long long  _lastModifiedDate;
    TPSMonitoringEvents * _monitoringEvents;
    int  _priority;
    TPSContextualCondition * _triggerCondition;
    NSArray * _usageEvents;
}

@property (nonatomic) long long customizationID;
@property (nonatomic, copy) TPSContextualCondition *desiredOutcomeCondition;
@property (nonatomic, copy) NSArray *displayBundleIDs;
@property (nonatomic) long long displayMaxCount;
@property (nonatomic, copy) NSArray *eligibleContext;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long lastModifiedDate;
@property (nonatomic, copy) TPSMonitoringEvents *monitoringEvents;
@property (nonatomic, readonly) int priority;
@property (nonatomic, copy) TPSContextualCondition *triggerCondition;
@property (nonatomic, copy) NSArray *usageEvents;

+ (id)contentDictionaryWithTipDeliveryInfoId:(id)arg1 deliveryInfoMap:(id)arg2;
+ (void)eventsInfoArrayForContextualInfoDictionary:(id)arg1 triggerEvents:(id*)arg2 desiredOutcomeEvents:(id*)arg3;
+ (id)identifierFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_lastModifiedDateFromDictionary:(id)arg1;
- (id)conditionForType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customizationID;
- (id)debugDescription;
- (id)desiredOutcomeCondition;
- (id)desiredOutcomeEventIdentifiers;
- (id)displayBundleID;
- (id)displayBundleIDs;
- (long long)displayMaxCount;
- (id)eligibleContext;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChangesFromDictionary:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)lastModifiedDate;
- (id)monitoringEvents;
- (int)priority;
- (void)restartDesiredOutcomeTracking;
- (void)restartTriggerTracking;
- (void)setCustomizationID:(long long)arg1;
- (void)setDesiredOutcomeCondition:(id)arg1;
- (void)setDisplayBundleIDs:(id)arg1;
- (void)setDisplayMaxCount:(long long)arg1;
- (void)setEligibleContext:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastModifiedDate:(long long)arg1;
- (void)setMonitoringEvents:(id)arg1;
- (void)setTriggerCondition:(id)arg1;
- (void)setUsageEvents:(id)arg1;
- (id)triggerCondition;
- (id)triggerEventIdentifiers;
- (id)usageEvents;

@end
