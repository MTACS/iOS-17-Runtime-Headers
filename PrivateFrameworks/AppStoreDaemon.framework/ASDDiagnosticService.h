
@interface ASDDiagnosticService : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultService;
+ (id)interface;

- (void).cxx_destruct;
- (id)activeClientsWithError:(id*)arg1;
- (void)addSubscriberWithEndpoint:(id)arg1;
- (bool)pingWithError:(id*)arg1;
- (bool)sendCommand:(long long)arg1 withError:(id*)arg2;
- (id)sendDetailsCommand:(long long)arg1 timeout:(id)arg2 withError:(id*)arg3;
- (id)sendDetailsCommand:(long long)arg1 withError:(id*)arg2;

@end
