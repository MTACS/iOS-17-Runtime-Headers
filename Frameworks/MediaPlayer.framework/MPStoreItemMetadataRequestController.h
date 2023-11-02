
@interface MPStoreItemMetadataRequestController : NSObject {
    long long  _cacheSize;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    MPStoreItemMetadataImportWindow * _importWindow;
    NSMutableDictionary * _itemCaches;
    unsigned long long  _lastExpiredMetadataPurgeMachTime;
    NSOperationQueue * _operationQueue;
    long long  _transactionCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _transactionLock;
}

@property (nonatomic) long long cacheSize;

+ (unsigned long long)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;

- (void).cxx_destruct;
- (void)_removeExpiredItemsPeriodically;
- (void)addStoreItemMetadata:(id)arg1;
- (void)addStoreItemMetadata:(id)arg1 forUserIdentity:(id)arg2;
- (void)beginTransaction;
- (long long)cacheSize;
- (void)endTransaction;
- (id)getStoreItemMetadataForRequest:(id)arg1 includeBatchResponseError:(bool)arg2 responseHandler:(id /* block */)arg3;
- (id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)init;
- (void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)setCacheSize:(long long)arg1;

@end
