
@interface ASReachabilityQueryOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {
    IDSBatchIDQueryController * _batchQueryController;
    id /* block */  _completionHandler;
    NSSet * _destinations;
    bool  _executing;
    bool  _finished;
    NSMutableDictionary * _rawIDSDestinationToOriginalDestination;
    NSMutableSet * _remainingDestinations;
    NSMutableDictionary * _results;
    NSString * _serviceIdentifier;
    ASReachabilityStatusCache * _statusCache;
    id /* block */  _updateHandler;
    NSObject<OS_dispatch_source> * timer;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) ASReachabilityStatusCache *statusCache;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_queryTimedOut;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (id /* block */)completionHandler;
- (id)destinations;
- (void)finish;
- (id)init;
- (bool)isAsynchronous;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (id)serviceIdentifier;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDestinations:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setStatusCache:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)start;
- (id)statusCache;
- (id /* block */)updateHandler;

@end
