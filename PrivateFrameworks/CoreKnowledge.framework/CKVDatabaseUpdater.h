
@interface CKVDatabaseUpdater : NSObject {
    NSMutableDictionary * _commandCache;
    NSObject<CKVDatabaseReadWriteAccess> * _database;
    NSNumber * _datasetHash;
    unsigned int  _datasetItemCount;
    NSNumber * _datasetRowId;
    NSString * _deviceId;
    NSNumber * _deviceRowId;
    NSNumber * _highestContentSequenceNumber;
    bool  _isLocalDevice;
    NSNumber * _itemTypeNumber;
    unsigned int  _modifiedRowCount;
    NSString * _originAppId;
    unsigned long long  _priorOptions;
    NSNumber * _priorValidityHash;
    unsigned long long  _priorVersion;
    NSString * _requestDescription;
    NSNumber * _startTimeMicros;
    NSNumber * _updateValidityHash;
    unsigned long long  _updateVersion;
    NSString * _userId;
    NSNumber * _versionNumber;
}

@property (nonatomic, readonly) NSNumber *datasetHash;
@property (nonatomic, readonly) unsigned int datasetItemCount;
@property (nonatomic, readonly) unsigned int modifiedRowCount;
@property (nonatomic, readonly) unsigned long long priorOptions;
@property (nonatomic, readonly) NSNumber *priorValidityHash;
@property (nonatomic, readonly) unsigned long long priorVersion;
@property (nonatomic, readonly) NSNumber *updateValidityHash;
@property (nonatomic, readonly) unsigned long long updateVersion;

+ (bool)deleteTombstonesInDatabase:(id)arg1 instanceLog:(id)arg2 shouldDefer:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_datasetRowIdCriterion;
- (bool)_deleteItemIdHash:(id)arg1 outProvenanceRowId:(id*)arg2;
- (bool)_deleteLocalInstanceRowId:(id)arg1 outProvenanceRowId:(id*)arg2;
- (bool)_insertContent:(id)arg1 contentHash:(id)arg2 outSequenceNumber:(id*)arg3;
- (bool)_insertDatasetReturningRowId:(id*)arg1;
- (bool)_insertDeviceReturningRowId:(id*)arg1;
- (bool)_insertLocalInstanceForItemWithItemIdHash:(id)arg1 provenanceRowId:(id)arg2 ordinal:(unsigned long long)arg3;
- (bool)_insertMetaContent:(id)arg1 instanceHash:(id)arg2;
- (bool)_insertProvenanceForItemWithContentHash:(id)arg1 contentSequenceNumber:(id)arg2 instanceHash:(id)arg3 onDeviceRowId:(id)arg4 insertedRowId:(id*)arg5;
- (id)_itemCriterionWithItemIdHash:(id)arg1;
- (bool)_registerDataset;
- (bool)_registerDevice;
- (bool)_selectDatasetItemCount:(id*)arg1;
- (bool)_selectDatasetRowId:(id*)arg1 version:(unsigned long long*)arg2 validityHash:(id*)arg3 options:(unsigned long long*)arg4;
- (bool)_selectDeviceRowId:(id*)arg1 isLocal:(bool*)arg2;
- (bool)_selectHighestKnownContentSequenceNumber:(id*)arg1;
- (bool)_selectProvenenceWithContentHash:(id)arg1 outSequenceNumber:(id*)arg2;
- (bool)_selectProvenenceWithRowId:(id)arg1 outInstanceHash:(id*)arg2 outContentHash:(id*)arg3;
- (bool)_tombstoneProvenanceRowId:(id)arg1 outCompositeId:(id*)arg2;
- (bool)_updateDatasetVersionAndValidity;
- (bool)_updateLocalInstanceRowId:(id)arg1 provenanceRowId:(id)arg2 instanceHash:(id)arg3 contentHash:(id)arg4 metaContent:(id)arg5 content:(id)arg6 ordinal:(unsigned long long)arg7;
- (bool)_updateProvenanceRowId:(id)arg1 instanceHash:(id)arg2;
- (bool)_updateProvenanceRowId:(id)arg1 instanceHash:(id)arg2 contentHash:(id)arg3 contentSequenceNumber:(id)arg4 insertedProvenanceRowId:(id*)arg5;
- (id)datasetHash;
- (unsigned int)datasetItemCount;
- (bool)deleteItemIdHash:(id)arg1 outCompositeId:(id*)arg2;
- (bool)deleteLocalInstanceRowId:(id)arg1 outCompositeId:(id*)arg2;
- (id)description;
- (bool)enumerateAndDeleteAllLocalInstancesUsingBlock:(id /* block */)arg1;
- (bool)enumerateUnmodifiedLocalInstancesUsingBlock:(id /* block */)arg1;
- (id)initWithDatabase:(id)arg1 instanceLog:(id)arg2 request:(id)arg3 startTimeMicros:(long long)arg4;
- (bool)insertItemWithItemIdHash:(id)arg1 instanceHash:(id)arg2 contentHash:(id)arg3 metaContent:(id)arg4 content:(id)arg5 ordinal:(unsigned long long)arg6;
- (unsigned int)modifiedRowCount;
- (unsigned long long)priorOptions;
- (id)priorValidityHash;
- (unsigned long long)priorVersion;
- (bool)selectWithItemIdHash:(id)arg1 outLocalInstanceRowId:(id*)arg2 outProvenanceRowId:(id*)arg3 outInstanceHash:(id*)arg4 outContentHash:(id*)arg5 isDuplicate:(bool*)arg6;
- (bool)updateDatasetOptions:(unsigned long long)arg1;
- (bool)updateLocalInstanceRowId:(id)arg1 ordinal:(unsigned long long)arg2;
- (bool)updateLocalInstanceRowId:(id)arg1 provenanceRowId:(id)arg2 instanceHash:(id)arg3 contentHash:(id)arg4 metaContent:(id)arg5 content:(id)arg6 ordinal:(unsigned long long)arg7;
- (bool)updateLocalInstanceRowId:(id)arg1 provenanceRowId:(id)arg2 instanceHash:(id)arg3 metaContent:(id)arg4 ordinal:(unsigned long long)arg5;
- (bool)updateLocalInstanceRowId:(id)arg1 provenanceRowId:(id)arg2 ordinal:(unsigned long long)arg3;
- (id)updateValidityHash;
- (unsigned long long)updateVersion;

@end
