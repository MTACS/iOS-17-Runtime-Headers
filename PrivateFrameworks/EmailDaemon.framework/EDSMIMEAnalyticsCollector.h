
@interface EDSMIMEAnalyticsCollector : NSObject <EMCoreAnalyticsPeriodicDataProvider> {
    EDMessagePersistence * _messagePersistence;
    <EDSMIMEConfigurationProvider> * _smimeConfigurationProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) <EDSMIMEConfigurationProvider> *smimeConfigurationProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsPeriodicEvent;
- (id)initWithAnalyticsCollector:(id)arg1 smimeConfigurationProvider:(id)arg2 messagePersistence:(id)arg3;
- (id)messagePersistence;
- (id)smimeConfigurationProvider;

@end
