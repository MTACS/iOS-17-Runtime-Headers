
@interface FPSpotlightIndexer : NSObject <CSSearchableIndexDelegate> {
    unsigned long long  _clientState;
    NSObject<OS_dispatch_semaphore> * _clientStateSemaphore;
    NSOperation * _currentOperation;
    <FPSpotlightIndexerDelegate> * _delegate;
    NSFileProviderDomain * _domain;
    FPXDomainContext * _domainContext;
    NSString * _domainID;
    FPSpotlightFetchClientStateOperation * _fetchStateOperation;
    CSSearchableIndex * _index;
    NSString * _indexName;
    bool  _indexing;
    bool  _isCanceled;
    NSData * _lastIndexState;
    NSObject<OS_os_log> * _log;
    NSOperationQueue * _operationQueue;
    FPProviderDomain * _providerDomain;
    NSString * _providerIdentifier;
    NSURL * _supportURL;
    <NSFileProviderEnumerator> * _vendorEnumerator;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPSpotlightIndexerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileProviderDomain *domain;
@property (nonatomic) FPXDomainContext *domainContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (getter=isIndexing, nonatomic) bool indexing;
@property (nonatomic, readonly) NSData *lastIndexState;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) FPProviderDomain *providerDomain;
@property (readonly) Class superclass;
@property (readonly) <NSFileProviderEnumerator> *vendorEnumerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *workloop;

+ (id)indexerPropertyOfClass:(Class)arg1 forKey:(id)arg2 supportURL:(id)arg3;
+ (void)setIndexerProperty:(id)arg1 forKey:(id)arg2 supportURL:(id)arg3;

- (void).cxx_destruct;
- (id)_fetchClientStateIfNeeded;
- (void)_fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)_indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_indexOneBatchWithCompletionHandler:(id /* block */)arg1;
- (void)_indexOutOfBandUpdatedItems:(id)arg1 deletedItems:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_invalidate;
- (void)dealloc;
- (id)delegate;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)domain;
- (id)domainContext;
- (void)dropIndexAndInvalidateWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dropIndexInQueue:(id)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dropIndexWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpStateTo:(id)arg1;
- (void)fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)arg1;
- (id)index;
- (void)indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)arg1;
- (void)indexOutOfBandUpdatedItems:(id)arg1 deletedItems:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDomain:(id)arg1 providerDomain:(id)arg2 log:(id)arg3 supportURL:(id)arg4;
- (void)invalidate;
- (void)invalidateAsync;
- (bool)isIndexing;
- (id)lastIndexState;
- (void)learnNewIndexState:(id)arg1;
- (id)log;
- (id)providerDomain;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainContext:(id)arg1;
- (void)setIndexing:(bool)arg1;
- (void)setProviderDomain:(id)arg1;
- (id)vendorEnumerator;
- (id)workloop;

@end
