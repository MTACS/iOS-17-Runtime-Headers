
@interface HDCloudSyncRegistryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableRegistry * _underlyingRegistry;
}

@property (nonatomic, readonly, copy) NSArray *childHeaderRecordIDs;
@property (nonatomic) bool deleted;
@property (nonatomic, retain) NSSet *disabledOwnerIdentifiers;
@property (nonatomic, retain) NSSet *disabledSyncIdentities;
@property (nonatomic, copy) NSString *displayFirstName;
@property (nonatomic, copy) NSString *displayLastName;
@property (nonatomic, copy) NSDate *displayNameModificationDate;
@property (nonatomic, readonly, copy) NSSet *ownerIdentifiers;
@property (nonatomic, copy) HKProfileIdentifier *ownerProfileIdentifier;
@property (nonatomic, copy) HKProfileIdentifier *sharedProfileIdentifier;
@property (nonatomic, readonly, copy) NSSet *syncIdentities;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isRegistryRecord:(id)arg1;
+ (bool)isRegistryRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordType;
+ (bool)requiresUnderlyingMessage;
+ (id)sharedProfileIdentifierForOwnerProfileIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)addStoreIdentifier:(id)arg1 ownerIdentifier:(id)arg2 syncIdentity:(id)arg3;
- (id)childHeaderRecordIDs;
- (bool)deleted;
- (id)description;
- (id)disabledOwnerIdentifiers;
- (id)disabledSyncIdentities;
- (id)displayFirstName;
- (id)displayLastName;
- (id)displayNameModificationDate;
- (id)initInZone:(id)arg1 ownerProfileIdentifier:(id)arg2;
- (id)initInZone:(id)arg1 ownerProfileIdentifier:(id)arg2 sharedProfileIdentifier:(id)arg3;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)ownerIdentifiers;
- (id)ownerProfileIdentifier;
- (id)printDescription;
- (void)removeStoreIdentifier:(id)arg1 ownerIdentifier:(id)arg2 syncIdentity:(id)arg3;
- (id)serializeUnderlyingMessage;
- (void)setDeleted:(bool)arg1;
- (void)setDisabledOwnerIdentifiers:(id)arg1;
- (void)setDisabledSyncIdentities:(id)arg1;
- (void)setDisplayFirstName:(id)arg1;
- (void)setDisplayLastName:(id)arg1;
- (void)setDisplayNameModificationDate:(id)arg1;
- (void)setOwnerProfileIdentifier:(id)arg1;
- (void)setSharedProfileIdentifier:(id)arg1;
- (id)sharedProfileIdentifier;
- (id)storeIdentifiersForOwnerIdentifier:(id)arg1;
- (id)storeIdentifiersForSyncIdentity:(id)arg1;
- (id)syncIdentities;

@end
