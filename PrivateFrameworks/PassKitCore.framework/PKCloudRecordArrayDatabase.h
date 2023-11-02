
@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {
    NSMutableDictionary * _cloudRecordByDatabaseZone;
    NSString * _identifier;
}

@property (nonatomic, retain) NSMutableDictionary *cloudRecordByDatabaseZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCloudRecord:(id)arg1;
- (id)allItems;
- (id)allObjects;
- (id)allRecordIDs;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)arg1;
- (void)applyCloudRecordDatabase:(id)arg1;
- (id)cloudRecordByDatabaseZone;
- (long long)count;
- (id)countByZoneID;
- (id)description;
- (id)descriptionWithDetailedOutput:(bool)arg1 includeItem:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setCloudRecordByDatabaseZone:(id)arg1;

@end
