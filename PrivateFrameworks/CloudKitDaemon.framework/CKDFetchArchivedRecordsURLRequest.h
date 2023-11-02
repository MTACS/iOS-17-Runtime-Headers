
@interface CKDFetchArchivedRecordsURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    NSDictionary * _configurationsByRecordZoneID;
    NSSet * _desiredAssetKeys;
    NSMutableDictionary * _nodeErrorsByZoneID;
    id /* block */  _recordFetchedBlock;
    NSArray * _recordZoneIDs;
    NSMutableDictionary * _requestResultsByRecordZoneID;
    bool  _shouldFetchAssetContent;
    NSMutableDictionary * _zoneIDsByRequestOperationUUID;
}

@property (nonatomic, retain) NSDictionary *configurationsByRecordZoneID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredAssetKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSMutableDictionary *requestResultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecords:(id)arg1;
- (id)configurationsByRecordZoneID;
- (id)desiredAssetKeys;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2 configurationsByRecordZoneID:(id)arg3;
- (id)nodeErrorsByZoneID;
- (id /* block */)recordFetchedBlock;
- (id)recordZoneIDs;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestResultsByRecordZoneID;
- (id)resultsByRecordZoneID;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setDesiredAssetKeys:(id)arg1;
- (void)setNodeErrorsByZoneID:(id)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRequestResultsByRecordZoneID:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneIDsByRequestOperationUUID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneErrorsByZoneID;
- (id)zoneIDsByRequestOperationUUID;
- (id)zoneIDsToLock;

@end
