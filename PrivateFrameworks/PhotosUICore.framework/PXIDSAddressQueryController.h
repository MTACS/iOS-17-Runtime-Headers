
@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate> {
    IDSBatchIDQueryController * _idsBatchIDQueryController;
    NSMutableArray * _queries;
    NSMutableDictionary * _queryStateForAddress;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callResultsHandlerForQueries:(id)arg1;
- (void)_idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)_performBatchQueryForAddresses:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)performBatchQueryForAddresses:(id)arg1 resultHandler:(id /* block */)arg2;

@end
