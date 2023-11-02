
@interface DNDSMindfulnessTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> * _biomeQueue;
    <DNDSMindfulnessTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> * _dataSource;
    NSMutableDictionary * _sinks;
}

@property (nonatomic) <DNDSMindfulnessTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureTriggerWithMode:(id)arg1;
- (bool)_featureEnabled;
- (void)_refreshWithMode:(id)arg1 event:(id)arg2;
- (id)dataSource;
- (id)init;
- (void)refresh;
- (void)setDataSource:(id)arg1;

@end
