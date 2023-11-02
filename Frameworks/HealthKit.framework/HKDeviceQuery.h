
@interface HKDeviceQuery : HKQuery <HKDeviceQueryClientInterface> {
    NSMutableArray * _resultDevices;
    id /* block */  _resultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ resultsHandler;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)clientRemote_deliverDevices:(id)arg1 done:(bool)arg2 reset:(bool)arg3 query:(id)arg4;
- (id)initWithObjectType:(id)arg1 predicate:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (id /* block */)resultsHandler;

@end
