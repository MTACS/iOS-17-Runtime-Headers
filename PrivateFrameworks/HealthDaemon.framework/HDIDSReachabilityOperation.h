
@interface HDIDSReachabilityOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {
    NSArray * _destinationIdentifiers;
    bool  _executing;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    IDSBatchIDQueryController * _queryController;
    unsigned long long  _queryTimeout;
    NSString * _serviceIdentifier;
    NSObject<OS_dispatch_source> * _timer;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSBatchIDQueryController *queryController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)cancel;
- (id)initWithIdentifers:(id)arg1 serviceIdentifier:(id)arg2 updateHandler:(id /* block */)arg3;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (id)queryController;
- (void)setQueryController:(id)arg1;
- (void)start;
- (void)unitTest_updateOperationTimeout:(unsigned long long)arg1;
- (void)updateDestinations:(id)arg1;

@end
