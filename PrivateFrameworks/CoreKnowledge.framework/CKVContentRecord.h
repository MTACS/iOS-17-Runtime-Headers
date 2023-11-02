
@interface CKVContentRecord : NSObject <CKVDatabaseRecord> {
    NSData * _content;
    NSNumber * _contentHash;
    NSNumber * _datasetRowId;
}

@property (nonatomic, readonly) NSData *content;
@property (nonatomic, readonly) NSNumber *contentHash;
@property (nonatomic, readonly) NSNumber *datasetRowId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)content;
- (id)contentHash;
- (id)datasetRowId;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemRecord:(id)arg1;

@end
