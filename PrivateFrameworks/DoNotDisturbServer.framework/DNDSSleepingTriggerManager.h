
@interface DNDSSleepingTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> * _biomeQueue;
    <DNDSSleepingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> * _dataSource;
    NSMutableDictionary * _sinks;
}

@property (nonatomic) <DNDSSleepingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureSleepingTriggerWithMode:(id)arg1;
- (bool)_featureEnabled;
- (void)_refreshWithMode:(id)arg1 event:(id)arg2;
- (id)dataSource;
- (id)init;
- (void)refresh;
- (void)setDataSource:(id)arg1;

@end
