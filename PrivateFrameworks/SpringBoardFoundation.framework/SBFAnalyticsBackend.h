
@interface SBFAnalyticsBackend : NSObject <SBFAnalyticsBackendEventHandling> {
    NSMutableArray * _asyncEventHandlers;
    NSObject<OS_dispatch_queue> * _asyncHandlerQueue;
    NSObject<OS_dispatch_queue> * _queryHandlerQueue;
    NSMutableDictionary * _stateQueryHandlers;
    NSMutableArray * _syncEventHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;
- (void)registerEventHandler:(id)arg1;
- (void)registerForQueryName:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)registerSynchronousEventHandler:(id)arg1;
- (void)stateForQueryName:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
