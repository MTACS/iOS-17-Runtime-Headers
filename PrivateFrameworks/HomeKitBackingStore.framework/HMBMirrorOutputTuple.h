
@interface HMBMirrorOutputTuple : HMFObject {
    NSData * _externalData;
    NSData * _externalID;
    HMBModel * _model;
    unsigned long long  _outputBlockRow;
    HMBLocalSQLQueryTable * _queryTable;
    unsigned long long  _recordRow;
}

@property (nonatomic, copy) NSData *externalData;
@property (nonatomic, copy) NSData *externalID;
@property (nonatomic, readonly) HMBModel *model;
@property (readonly) unsigned long long outputBlockRow;
@property (nonatomic, readonly) HMBLocalSQLQueryTable *queryTable;
@property (readonly) unsigned long long recordRow;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)externalData;
- (id)externalID;
- (id)initWithOutputBlockRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 model:(id)arg3 queryTable:(id)arg4 externalID:(id)arg5 externalData:(id)arg6;
- (id)model;
- (unsigned long long)outputBlockRow;
- (id)queryTable;
- (unsigned long long)recordRow;
- (void)setExternalData:(id)arg1;
- (void)setExternalID:(id)arg1;

@end
