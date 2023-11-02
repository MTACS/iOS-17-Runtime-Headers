
@interface SWDatastoreSynchronizationManager : NSObject <SWDatastoreSynchronizationManager, SWMessageHandler> {
    <SWDatastoreManager> * _datastoreManager;
    <SWDatastoreManager> * _localDatastoreManager;
    <SWLogger> * _logger;
    <SWScriptsManager> * _scriptsManager;
    <SWSessionManager> * _sessionManager;
    <SWDatastoreFactory> * _settingsFactory;
}

@property (nonatomic) <SWDatastoreManager> *datastoreManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SWDatastoreManager> *localDatastoreManager;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly) <SWScriptsManager> *scriptsManager;
@property (nonatomic, readonly) <SWSessionManager> *sessionManager;
@property (nonatomic, readonly) <SWDatastoreFactory> *settingsFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datastoreManager;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithSettingsFactory:(id)arg1 scriptsManager:(id)arg2 messageHandlerManager:(id)arg3 sessionManager:(id)arg4 logger:(id)arg5;
- (id)localDatastoreManager;
- (id)logger;
- (id)scriptsManager;
- (id)sessionManager;
- (void)setDatastoreManager:(id)arg1;
- (void)setLocalDatastoreManager:(id)arg1;
- (id)settingsFactory;
- (void)synchronizeDatastore:(id)arg1 from:(id)arg2 previousDatastore:(id)arg3 originatingSession:(id)arg4 completion:(id /* block */)arg5;

@end
