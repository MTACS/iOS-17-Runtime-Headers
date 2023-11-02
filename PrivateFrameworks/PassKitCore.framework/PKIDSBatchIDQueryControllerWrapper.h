
@interface PKIDSBatchIDQueryControllerWrapper : NSObject <IDSBatchIDQueryControllerDelegate> {
    IDSBatchIDQueryController * _batchIDQueryController;
    id /* block */  _completion;
    bool  _hasRunQuery;
    NSString * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)reachableDestinationsForDestination:(id)arg1 service:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

@end
