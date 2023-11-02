
@interface CKDPublicIdentityLookupRequest : NSObject {
    unsigned long long  _fetchBatchSize;
    bool  _hasPerformed;
    bool  _isCancelled;
    id /* block */  _lookupCompletionBlock;
    NSArray * _lookupInfosToFetch;
    NSMutableArray * _missingLookupInfos;
    CKDOperation * _operation;
    id /* block */  _perLookupInfoProgressBlock;
}

@property (nonatomic) unsigned long long fetchBatchSize;
@property bool hasPerformed;
@property bool isCancelled;
@property (nonatomic, copy) id /* block */ lookupCompletionBlock;
@property (nonatomic, copy) id /* block */ perLookupInfoProgressBlock;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_generateOONPrivateKeyWithError:(id*)arg1;
- (void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3;
- (void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2;
- (bool)_tryComplete;
- (void)cancel;
- (id)ckShortDescription;
- (id)description;
- (unsigned long long)fetchBatchSize;
- (void)finishWithError:(id)arg1;
- (bool)hasPerformed;
- (id)initWithOperation:(id)arg1 lookupInfos:(id)arg2;
- (bool)isCancelled;
- (id /* block */)lookupCompletionBlock;
- (id /* block */)perLookupInfoProgressBlock;
- (void)performRequest;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (void)setHasPerformed:(bool)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setLookupCompletionBlock:(id /* block */)arg1;
- (void)setPerLookupInfoProgressBlock:(id /* block */)arg1;
- (id)spawnURLRequests;

@end
