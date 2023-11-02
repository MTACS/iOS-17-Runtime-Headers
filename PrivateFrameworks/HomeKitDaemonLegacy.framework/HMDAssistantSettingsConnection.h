
@interface HMDAssistantSettingsConnection : HMFObject <HMDAssistantSettingsConnectionDataSource, HMFLogging> {
    <HMDAssistantSettingsConnectionDataSource> * _dataSource;
    HMFScheduler * _scheduler;
}

@property <HMDAssistantSettingsConnectionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFScheduler *scheduler;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)connectionForEndpointUUID:(id)arg1;
- (id)dataSource;
- (id)deleteSiriHistoryOperationWithConnection:(id)arg1;
- (void)deleteSiriHistoryWithEndpointUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithScheduler:(id)arg1;
- (id)scheduler;
- (void)setDataSource:(id)arg1;

@end
