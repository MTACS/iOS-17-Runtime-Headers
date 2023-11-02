
@interface ASDAppMetricsService : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultService;
+ (id)interface;

- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (void)getMetricsEventsForType:(long long)arg1 withReplyHandler:(id /* block */)arg2;
- (id)init;
- (void)postMetricsEventsForType:(long long)arg1 withReplyHandler:(id /* block */)arg2;
- (void)recordMetricsEventsForType:(long long)arg1 withReplyHandler:(id /* block */)arg2;
- (void)resetMetricsEventsForType:(long long)arg1 withReplyHandler:(id /* block */)arg2;

@end
