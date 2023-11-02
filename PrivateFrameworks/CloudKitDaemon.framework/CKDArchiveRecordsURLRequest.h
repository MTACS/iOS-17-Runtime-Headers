
@interface CKDArchiveRecordsURLRequest : CKDURLRequest {
    id /* block */  _recordArchivedBlock;
    NSMutableDictionary * _recordZoneIDByRequestID;
    NSMutableDictionary * _zoneIDToRecordIDs;
}

@property (nonatomic, copy) id /* block */ recordArchivedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDToRecordIDs;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 recordIDsToArchive:(id)arg2;
- (id /* block */)recordArchivedBlock;
- (id)recordZoneIDByRequestID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setRecordArchivedBlock:(id /* block */)arg1;
- (void)setRecordZoneIDByRequestID:(id)arg1;
- (void)setZoneIDToRecordIDs:(id)arg1;
- (id)zoneIDToRecordIDs;
- (id)zoneIDsToLock;

@end
