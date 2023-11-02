
@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject <HMDLogEventDailyTaskRunner, HMFLogging> {
    NSUUID * _accessoryUUID;
    <HMDSiriEndpointProfileMetricsDispatcherDataSource> * _dataSource;
    NSUUID * _homeUUID;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property <HMDSiriEndpointProfileMetricsDispatcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)dataSource;
- (id)dataSourceAccessoryCategoryType;
- (id)dataSourceCompositeSettingsControllerManager;
- (id)dataSourceProfileFields;
- (bool)dataSourceShouldSubmitRoutineConfigurationEvent;
- (id)fetchAccessorySettingFields;
- (id)homeUUID;
- (id)initWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2 logEventSubmitter:(id)arg3;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (void)runDailyTask;
- (void)setDataSource:(id)arg1;
- (void)submitRoutineConfigurationEvent;
- (void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)arg1;

@end
