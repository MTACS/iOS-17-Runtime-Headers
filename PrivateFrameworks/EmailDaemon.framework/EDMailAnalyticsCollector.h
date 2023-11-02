
@interface EDMailAnalyticsCollector : NSObject <EMCoreAnalyticsPeriodicDataProvider> {
    EDMessagePersistence * _messagePersistence;
    EDSMIMEAnalyticsCollector * _smimeAnalyticsCollector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EDSMIMEAnalyticsCollector *smimeAnalyticsCollector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsPeriodicEvent;
- (id)initWithAnalyticsCollector:(id)arg1 smimeConfigurationProvider:(id)arg2 messagePersistence:(id)arg3;
- (id)messagePersistence;
- (id)smimeAnalyticsCollector;

@end
