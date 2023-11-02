
@interface WFCloudKitFolder : NSObject <WFCloudKitItem, WFCloudKitWalrusMigrationSupporting> {
    long long  _encryptedSchemaVersion;
    unsigned short  _icon;
    CKRecordID * _identifier;
    NSString * _name;
    NSData * _recordSystemFieldsData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long encryptedSchemaVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short icon;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;

+ (id)collectionIdentifierForRecordID:(id)arg1;
+ (id)encryptedNameProperty;
+ (bool)isFolderRecordID:(id)arg1;
+ (long long)latestEncryptedSchemaVersion;
+ (id)nameProperty;
+ (id)properties;
+ (id)recordIDWithZoneID:(id)arg1 collectionIdentifier:(id)arg2;
+ (id)recordType;

- (void).cxx_destruct;
- (long long)encryptedSchemaVersion;
- (unsigned short)icon;
- (id)identifier;
- (id)initWithCollectionRecord:(id)arg1 identifier:(id)arg2;
- (id)name;
- (id)recordSystemFieldsData;
- (void)setEncryptedSchemaVersion:(long long)arg1;
- (void)setIcon:(unsigned short)arg1;
- (void)setName:(id)arg1;
- (void)setRecordSystemFieldsData:(id)arg1;

@end
