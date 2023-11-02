
@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    id /* block */  _anonymousShareProcessingBlock;
    NSMutableArray * _changedZoneIDs;
    NSMutableArray * _deletedZoneIDs;
    NSMutableArray * _encryptedDataResetDeletedZoneIDs;
    NSData * _previousServerChangeTokenData;
    NSMutableArray * _purgedZoneIDs;
    CKRecordZoneID * _recordZoneID;
    unsigned long long  _resultsLimit;
    NSData * _serverChangeTokenData;
    long long  _status;
    id /* block */  _zoneChangedBlock;
    id /* block */  _zoneDeletedBlock;
    id /* block */  _zoneDeletedDueToEncryptedDataResetBlock;
    id /* block */  _zonePurgedBlock;
}

@property (nonatomic, copy) id /* block */ anonymousShareProcessingBlock;
@property (nonatomic, readonly) NSArray *changedZoneIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *deletedZoneIDs;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *encryptedDataResetDeletedZoneIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *previousServerChangeTokenData;
@property (nonatomic, readonly) NSArray *purgedZoneIDs;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ zoneChangedBlock;
@property (nonatomic, copy) id /* block */ zoneDeletedBlock;
@property (nonatomic, copy) id /* block */ zoneDeletedDueToEncryptedDataResetBlock;
@property (nonatomic, copy) id /* block */ zonePurgedBlock;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id /* block */)anonymousShareProcessingBlock;
- (id)changedZoneIDs;
- (id)deletedZoneIDs;
- (id)encryptedDataResetDeletedZoneIDs;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 previousServerChangeTokenData:(id)arg2;
- (id)previousServerChangeTokenData;
- (id)purgedZoneIDs;
- (id)recordZoneID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresCKAnonymousUserIDs;
- (unsigned long long)resultsLimit;
- (id)serverChangeTokenData;
- (void)setAnonymousShareProcessingBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeTokenData:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setZoneChangedBlock:(id /* block */)arg1;
- (void)setZoneDeletedBlock:(id /* block */)arg1;
- (void)setZoneDeletedDueToEncryptedDataResetBlock:(id /* block */)arg1;
- (void)setZonePurgedBlock:(id /* block */)arg1;
- (long long)status;
- (id /* block */)zoneChangedBlock;
- (id /* block */)zoneDeletedBlock;
- (id /* block */)zoneDeletedDueToEncryptedDataResetBlock;
- (id /* block */)zonePurgedBlock;

@end
