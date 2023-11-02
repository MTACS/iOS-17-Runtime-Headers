
@interface DNDSDrivingTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> * _biomeQueue;
    <DNDSDrivingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _sinks;
    CARAutomaticDNDStatus * _status;
}

@property (nonatomic) <DNDSDrivingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDrivingTriggerWithMode:(id)arg1;
- (bool)_featureEnabled;
- (void)_refreshWithMode:(id)arg1 event:(id)arg2;
- (id)dataSource;
- (id)init;
- (void)refresh;
- (void)setDataSource:(id)arg1;

@end
