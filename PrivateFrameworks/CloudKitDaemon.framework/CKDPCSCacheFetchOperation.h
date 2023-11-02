
@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation {
    CKDPCSCache * _cache;
    NSError * _dependentPCSFetchError;
    bool  _didFetchData;
    NSError * _fetchError;
    NSObject<OS_dispatch_group> * _fetchGroup;
    unsigned long long  _fetchOptions;
    <CKSQLiteItem> * _itemID;
    int  _numRetries;
    CKDRecordPCSData * _parentPCSData;
    CKDPCSData * _pcsData;
    bool  _pcsDataInvalidated;
    bool  _shouldRetry;
    bool  _wasFetchedFromCache;
}

@property (nonatomic, retain) CKDPCSCache *cache;
@property (nonatomic, retain) NSError *dependentPCSFetchError;
@property (nonatomic) bool didFetchData;
@property (nonatomic, retain) NSError *fetchError;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic) unsigned long long fetchOptions;
@property (nonatomic, readonly) bool hasAllPCSData;
@property (nonatomic, retain) <CKSQLiteItem> *itemID;
@property (nonatomic, readonly) NSString *itemTypeName;
@property (nonatomic) int numRetries;
@property (nonatomic, retain) CKDRecordPCSData *parentPCSData;
@property (nonatomic, retain) CKDPCSData *pcsData;
@property (getter=isPCSDataInvalidated) bool pcsDataInvalidated;
@property (nonatomic) bool shouldRetry;
@property (nonatomic) unsigned long long state;
@property (nonatomic) bool wasFetchedFromCache;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_createAdditionalPCS;
- (bool)_decryptPCS;
- (bool)_fetchDependentPCS;
- (bool)_fetchPCSDataFromDatabase;
- (bool)_fetchPCSDataFromServer;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (bool)_savePCSDataToCache;
- (bool)_saveUpdatedPCSToServer;
- (void)_willRetryFetch;
- (id)cache;
- (bool)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)dependentPCSFetchError;
- (bool)didFetchData;
- (id)fetchError;
- (id)fetchGroup;
- (unsigned long long)fetchOptions;
- (bool)hasAllPCSData;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (bool)isPCSDataInvalidated;
- (id)itemID;
- (id)itemTypeName;
- (void)main;
- (bool)makeStateTransition;
- (bool)needsAdditionalPCSCreation;
- (int)numRetries;
- (id)parentPCSData;
- (id)pcsData;
- (void)setCache:(id)arg1;
- (void)setDependentPCSFetchError:(id)arg1;
- (void)setDidFetchData:(bool)arg1;
- (void)setFetchError:(id)arg1;
- (void)setFetchOptions:(unsigned long long)arg1;
- (void)setItemID:(id)arg1;
- (void)setNumRetries:(int)arg1;
- (void)setParentPCSData:(id)arg1;
- (void)setPcsData:(id)arg1;
- (void)setPcsDataInvalidated:(bool)arg1;
- (void)setShouldRetry:(bool)arg1;
- (void)setWasFetchedFromCache:(bool)arg1;
- (bool)shouldRetry;
- (bool)wasFetchedFromCache;

@end
