
@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {
    NSMutableDictionary * _cloudRecordByZoneRecord;
    NSString * _databaseIdentifier;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSMutableDictionary *cloudRecordByZoneRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCloudRecord:(id)arg1;
- (id)allItems;
- (id)allObjects;
- (id)allRecordIDs;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)arg1;
- (void)applyCloudRecordDatabaseZone:(id)arg1;
- (id)cloudRecordByZoneRecord;
- (long long)count;
- (id)description;
- (id)descriptionWithDetailedOutput:(bool)arg1 includeItem:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 databaseIdentifier:(id)arg2;
- (void)setCloudRecordByZoneRecord:(id)arg1;

@end
