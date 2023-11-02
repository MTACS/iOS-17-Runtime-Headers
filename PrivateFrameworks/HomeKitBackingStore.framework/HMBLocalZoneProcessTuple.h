
@interface HMBLocalZoneProcessTuple : HMFObject {
    NSArray * _encodedQueryableColumns;
    NSData * _externalID;
    unsigned long long  _itemRow;
    HMBLocalZoneProcessModelContext * _mergedContext;
    NSUUID * _modelSchema;
    NSString * _modelType;
    NSNumber * _outputBlockRow;
    HMBModel * _outputModel;
    HMBLocalZoneProcessModelContext * _previousContext;
    HMBLocalSQLQueryTable * _queryTable;
    unsigned long long  _recordRow;
    HMBModel * _updateModel;
}

@property (nonatomic, readonly) NSArray *encodedQueryableColumns;
@property (nonatomic, readonly) NSData *externalID;
@property (nonatomic, readonly) unsigned long long itemRow;
@property (nonatomic, readonly) HMBLocalZoneProcessModelContext *mergedContext;
@property (nonatomic, readonly) NSUUID *modelSchema;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly, copy) NSNumber *outputBlockRow;
@property (nonatomic, readonly, copy) HMBModel *outputModel;
@property (nonatomic, readonly) HMBLocalZoneProcessModelContext *previousContext;
@property (nonatomic, readonly) HMBLocalSQLQueryTable *queryTable;
@property (nonatomic, readonly) unsigned long long recordRow;
@property (nonatomic, readonly, copy) HMBModel *updateModel;

- (void).cxx_destruct;
- (id)encodedQueryableColumns;
- (id)externalID;
- (id)initWithPreviousContext:(id)arg1 mergedContext:(id)arg2 updateModel:(id)arg3 outputModel:(id)arg4 outputBlockRow:(id)arg5 recordRow:(unsigned long long)arg6 itemRow:(unsigned long long)arg7 modelSchema:(id)arg8 modelType:(id)arg9 externalID:(id)arg10 queryTable:(id)arg11;
- (unsigned long long)itemRow;
- (id)mergedContext;
- (id)modelSchema;
- (id)modelType;
- (id)outputBlockRow;
- (id)outputModel;
- (id)previousContext;
- (id)queryTable;
- (unsigned long long)recordRow;
- (id)updateModel;

@end
