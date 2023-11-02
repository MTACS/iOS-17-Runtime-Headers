
@interface DNDSSmartTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> * _biomeQueue;
    <DNDSSmartTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> * _dataSource;
    NSMutableDictionary * _sinks;
}

@property (nonatomic) <DNDSSmartTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureSmartTriggerWithSupportedModes:(id)arg1;
- (void)_refreshIfNeccessaryForEvent:(id)arg1;
- (void)_refreshWithSupportedModes:(id)arg1 event:(id)arg2;
- (id)dataSource;
- (id)init;
- (void)refresh;
- (void)setDataSource:(id)arg1;

@end
