
@interface CKVLocalInstanceRecord : NSObject <CKVDatabaseRecord> {
    NSNumber * _datasetRowId;
    NSNumber * _itemIdHash;
    NSNumber * _modified;
    NSNumber * _ordinal;
    NSNumber * _provenanceRowId;
}

@property (nonatomic, readonly) NSNumber *datasetRowId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *itemIdHash;
@property (nonatomic, readonly) NSNumber *modified;
@property (nonatomic, readonly) NSNumber *ordinal;
@property (nonatomic, readonly) NSNumber *provenanceRowId;
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
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemRecord:(id)arg1;
- (id)itemIdHash;
- (id)modified;
- (id)ordinal;
- (id)provenanceRowId;

@end
