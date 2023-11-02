
@interface FCCKZoneSchema : NSObject {
    CKRecordZoneID * _clientZoneID;
    NSString * _clientZoneName;
    bool  _isDefaultZone;
    NSDictionary * _recordSchemasByClientType;
    NSDictionary * _recordSchemasByServerType;
    CKRecordZoneID * _serverZoneID;
    NSString * _serverZoneName;
    bool  _shouldUseSecureContainer;
    bool  _shouldUseZoneWidePCS;
    NSDictionary * _staticClientRecordNamesByServerName;
    NSArray * _staticRecordNamesEligibleForMigration;
    NSDictionary * _staticServerRecordNamesByClientName;
    bool  _supportsRecordFieldEncryption;
    bool  _supportsRecordNameEncryption;
}

- (void).cxx_destruct;
- (id)init;

@end
