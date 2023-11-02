
@interface CKVFTSRecord : NSObject <CKVDatabaseRecord> {
    long long  _fieldType;
    NSString * _fieldValue;
    long long  _itemType;
    NSString * _originAppId;
    NSUUID * _recordId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fieldType;
@property (nonatomic, readonly) NSString *fieldValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly) NSString *originAppId;
@property (nonatomic, readonly) NSUUID *recordId;
@property (readonly) Class superclass;

+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)description;
- (long long)fieldType;
- (id)fieldValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (id)initWithFieldType:(long long)arg1 fieldValue:(id)arg2 originAppId:(id)arg3 itemType:(long long)arg4 recordId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFTSRecord:(id)arg1;
- (long long)itemType;
- (id)originAppId;
- (id)recordId;

@end
