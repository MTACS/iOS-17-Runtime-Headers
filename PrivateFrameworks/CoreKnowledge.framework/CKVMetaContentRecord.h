
@interface CKVMetaContentRecord : NSObject <CKVDatabaseRecord> {
    NSNumber * _datasetRowId;
    NSNumber * _instanceHash;
    NSData * _metaContent;
}

@property (nonatomic, readonly) NSNumber *datasetRowId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *instanceHash;
@property (nonatomic, readonly) NSData *metaContent;
@property (readonly) Class superclass;

+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)datasetRowId;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (id)instanceHash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemRecord:(id)arg1;
- (id)metaContent;

@end
