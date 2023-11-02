
@interface HDCloudSyncSharedSummaryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryRecord * _underlyingSummaryRecord;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *authorizationIdentifiers;
@property (nonatomic, readonly, copy) NSString *compatibilityVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *objectTypes;
@property (nonatomic, readonly, copy) NSString *package;
@property (nonatomic, readonly, copy) NSData *summaryData;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isSummaryRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 UUID:(id)arg2;
+ (id)recordType;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)UUID;
- (id)authorizationIdentifiers;
- (id)compatibilityVersion;
- (id)description;
- (id)initInZone:(id)arg1 UUID:(id)arg2 package:(id)arg3 name:(id)arg4 version:(id)arg5 compatibilityVersion:(id)arg6 objectTypes:(id)arg7 authorizationIdentifiers:(id)arg8 summaryData:(id)arg9;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)name;
- (id)objectTypes;
- (id)package;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (id)summaryData;
- (id)version;

@end
