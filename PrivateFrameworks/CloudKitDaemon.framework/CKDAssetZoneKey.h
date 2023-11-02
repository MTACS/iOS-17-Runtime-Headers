
@interface CKDAssetZoneKey : NSObject <NSCopying> {
    long long  _destinationDatabaseScope;
    CKRecordZoneID * _destinationZoneID;
    long long  _sourceDatabaseScope;
    CKRecordZoneID * _sourceZoneID;
}

@property (nonatomic, readonly) long long destinationDatabaseScope;
@property (nonatomic, readonly) CKRecordZoneID *destinationZoneID;
@property (nonatomic, readonly) bool isCrossOwner;
@property (nonatomic, readonly) long long sourceDatabaseScope;
@property (nonatomic, readonly) CKRecordZoneID *sourceZoneID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)destinationDatabaseScope;
- (id)destinationZoneID;
- (unsigned long long)hash;
- (id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2;
- (id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 sourceZoneID:(id)arg3 sourceDatabaseScope:(long long)arg4;
- (bool)isCrossOwner;
- (bool)isEqual:(id)arg1;
- (long long)sourceDatabaseScope;
- (id)sourceZoneID;

@end
