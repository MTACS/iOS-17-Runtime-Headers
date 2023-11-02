
@interface CKVDatasetRecord : NSObject <CKVDatabaseRecord> {
    NSNumber * _datasetRowId;
    long long  _itemType;
    NSNumber * _modified;
    unsigned long long  _options;
    NSString * _originAppId;
    NSString * _userId;
    NSNumber * _validityHash;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSNumber *datasetRowId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly) NSNumber *modified;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *originAppId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) NSNumber *validityHash;
@property (nonatomic, readonly) unsigned long long version;

+ (id)_optionsDescription:(unsigned long long)arg1;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)datasetRowId;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDatasetRecord:(id)arg1;
- (bool)isOrdered;
- (long long)itemType;
- (id)modified;
- (unsigned long long)options;
- (id)originAppId;
- (id)recordToDatasetInfoWithItemCount:(unsigned int)arg1 capturedTime:(id)arg2 error:(id*)arg3;
- (id)userId;
- (id)validityHash;
- (unsigned long long)version;

@end
