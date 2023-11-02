
@interface HMDAppleMediaAccessoryLocalMessageHandler : NSObject <HMFLogging> {
    HMDAssistantSettingsConnection * _assistantSettingsConnection;
    <HMDAppleMediaAccessoryLocalMessageHandlerDataSource> * _dataSource;
    NSUUID * _identifier;
}

@property (readonly) HMDAssistantSettingsConnection *assistantSettingsConnection;
@property <HMDAppleMediaAccessoryLocalMessageHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)assistantSettingsConnection;
- (id)dataSource;
- (id)dataSourceAccessoryWithUUID:(id)arg1;
- (void)handleSiriEndpointDeleteSiriHistoryMessage:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 assistantSettingsConnection:(id)arg2;
- (id)logIdentifier;
- (void)setDataSource:(id)arg1;

@end
