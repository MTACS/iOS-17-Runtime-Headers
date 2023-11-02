
@interface CKVProvenanceRecord : NSObject <CKVDatabaseRecord> {
    NSNumber * _contentHash;
    NSNumber * _datasetRowId;
    NSNumber * _deviceRowId;
    NSNumber * _instanceHash;
    NSNumber * _provenanceRowId;
    NSNumber * _sequenceNumber;
    NSNumber * _state;
}

@property (nonatomic, readonly) NSNumber *contentHash;
@property (nonatomic, readonly) NSNumber *datasetRowId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *deviceRowId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *instanceHash;
@property (nonatomic, readonly) NSNumber *provenanceRowId;
@property (nonatomic, readonly) NSNumber *sequenceNumber;
@property (nonatomic, readonly) NSNumber *state;
@property (readonly) Class superclass;

+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)contentHash;
- (id)datasetRowId;
- (id)description;
- (id)deviceRowId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (id)instanceHash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemRecord:(id)arg1;
- (id)provenanceRowId;
- (id)sequenceNumber;
- (id)state;

@end
