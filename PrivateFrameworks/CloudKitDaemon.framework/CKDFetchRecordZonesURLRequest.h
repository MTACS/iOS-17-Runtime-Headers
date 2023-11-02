
@interface CKDFetchRecordZonesURLRequest : CKDURLRequest {
    id /* block */  _anonymousRecordZoneTuplesFetchedBlock;
    id /* block */  _errorFetchingAllRecordZonesBlock;
    bool  _onlyFetchPCSInfo;
    id /* block */  _recordZoneFetchedBlock;
    NSArray * _recordZones;
    NSMutableDictionary * _zoneIDByRequestID;
    NSArray * _zoneIDs;
}

@property (nonatomic, copy) id /* block */ anonymousRecordZoneTuplesFetchedBlock;
@property (nonatomic, copy) id /* block */ errorFetchingAllRecordZonesBlock;
@property (nonatomic) bool onlyFetchPCSInfo;
@property (nonatomic, copy) id /* block */ recordZoneFetchedBlock;
@property (nonatomic, readonly) NSArray *recordZones;
@property (nonatomic, retain) NSMutableDictionary *zoneIDByRequestID;
@property (nonatomic, retain) NSArray *zoneIDs;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id /* block */)anonymousRecordZoneTuplesFetchedBlock;
- (id /* block */)errorFetchingAllRecordZonesBlock;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2;
- (bool)onlyFetchPCSInfo;
- (id /* block */)recordZoneFetchedBlock;
- (id)recordZones;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresCKAnonymousUserIDs;
- (void)setAnonymousRecordZoneTuplesFetchedBlock:(id /* block */)arg1;
- (void)setErrorFetchingAllRecordZonesBlock:(id /* block */)arg1;
- (void)setOnlyFetchPCSInfo:(bool)arg1;
- (void)setRecordZoneFetchedBlock:(id /* block */)arg1;
- (void)setZoneIDByRequestID:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)zoneIDByRequestID;
- (id)zoneIDs;
- (id)zoneIDsToLock;

@end
