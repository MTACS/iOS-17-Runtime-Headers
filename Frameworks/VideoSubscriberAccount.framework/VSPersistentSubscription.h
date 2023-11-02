
@interface VSPersistentSubscription : NSManagedObject

@property (nonatomic, copy) NSNumber *accessLevel;
@property (nonatomic, copy) NSString *billingIdentifier;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *derivedSubscriptionInfo;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSDate *mostRecentSaveDate;
@property (nonatomic, copy) NSString *providedSubscriptionInfo;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, copy) NSNumber *sourceKind;
@property (nonatomic, copy) NSString *subscriberIdentifierHash;
@property (nonatomic, copy) NSArray *tierIdentifiers;

+ (id)keyPathsForValuesAffectingDerivedSubscriptionInfo;

- (void)_deriveValuesFromProvidedInfo:(id)arg1;
- (void)_setNullResettableValue:(id)arg1 forKey:(id)arg2;
- (void)_updateDerivedSubscriptionInfo;
- (bool)_validateNullableValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)didChangeValueForKey:(id)arg1;
- (void)setAccessLevel:(id)arg1;
- (void)setBillingIdentifier:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setMostRecentSaveDate:(id)arg1;
- (void)setProvidedSubscriptionInfo:(id)arg1;
- (void)setSubscriberIdentifierHash:(id)arg1;
- (void)setTierIdentifiers:(id)arg1;
- (bool)validateAccessLevel:(id*)arg1 error:(id*)arg2;
- (bool)validateBillingIdentifier:(id*)arg1 error:(id*)arg2;
- (bool)validateCreationDate:(id*)arg1 error:(id*)arg2;
- (bool)validateExpirationDate:(id*)arg1 error:(id*)arg2;
- (bool)validateModificationDate:(id*)arg1 error:(id*)arg2;
- (bool)validateSubscriberIdentifierHash:(id*)arg1 error:(id*)arg2;
- (bool)validateTierIdentifiers:(id*)arg1 error:(id*)arg2;

@end