
@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (nonatomic) bool allLimitsEnabled;
@property (nonatomic) long long communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultUserPolicies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCommunicationSafetyAnalyticsEnabled;
@property (nonatomic) bool isCommunicationSafetyNotificationEnabled;
@property (nonatomic) bool isCommunicationSafetyReceivingRestricted;
@property (nonatomic) bool isCommunicationSafetySendingRestricted;
@property (nonatomic) bool isEyeReliefEnabled;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic) bool needsToSetPasscode;
@property (nonatomic, copy) NSString *passcode;
@property (readonly) Class superclass;
@property (nonatomic, retain) STCoreUser *user;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1;

- (void)_changeAppLimitsFromAskToWarn:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (id)redactedDescription;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
