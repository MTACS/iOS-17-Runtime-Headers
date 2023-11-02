
@interface APMetricNotificationRegistrar : NSObject <APMetricNotificationRegister, APMetricReceiving> {
    long long  _registrationCounter;
    NSMutableDictionary * _registryByClosure;
    NSMutableDictionary * _registryByRoute;
    NSLock * _registryLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long registrationCounter;
@property (nonatomic, readonly) NSMutableDictionary *registryByClosure;
@property (nonatomic, readonly) NSMutableDictionary *registryByRoute;
@property (nonatomic, readonly) NSLock *registryLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_closuresForPurpose:(long long)arg1 andMetric:(long long)arg2;
- (id)_metricRegistryForPurpose:(long long)arg1 andMetric:(long long)arg2;
- (id)init;
- (void)receivedMetric:(id)arg1;
- (long long)registerHandlerForPurpose:(long long)arg1 andMetric:(long long)arg2 closure:(id /* block */)arg3;
- (long long)registerHandlerForPurpose:(long long)arg1 closure:(id /* block */)arg2;
- (long long)registrationCounter;
- (id)registryByClosure;
- (id)registryByRoute;
- (id)registryLock;
- (void)removeHandlerWithIdentifier:(long long)arg1;

@end
