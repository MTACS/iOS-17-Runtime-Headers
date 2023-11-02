
@interface BACloudKitDownload : BADownload <NSCoding, NSCopying, NSSecureCoding> {
    NSString * _assetKey;
    CKContainerID * _containerID;
    long long  _databaseScope;
    CKQuery * _query;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSString *assetKey;
@property (nonatomic, retain) CKContainerID *containerID;
@property (nonatomic) long long databaseScope;
@property (nonatomic, retain) CKQuery *query;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetKey;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseScope;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 recordType:(id)arg2 expectedFieldKey:(id)arg3 expectedFieldValue:(id)arg4 assetKey:(id)arg5 applicationGroupIdentifier:(id)arg6;
- (id)initWithIdentifier:(id)arg1 recordType:(id)arg2 expectedFieldKey:(id)arg3 expectedFieldValue:(id)arg4 assetKey:(id)arg5 applicationGroupIdentifier:(id)arg6 containerIdentifier:(id)arg7 zoneID:(id)arg8 databaseScope:(long long)arg9 priority:(long long)arg10;
- (id)initWithIdentifier:(id)arg1 recordType:(id)arg2 recordName:(id)arg3 assetKey:(id)arg4 applicationGroupIdentifier:(id)arg5;
- (id)query;
- (void)setAssetKey:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)zoneID;

@end
