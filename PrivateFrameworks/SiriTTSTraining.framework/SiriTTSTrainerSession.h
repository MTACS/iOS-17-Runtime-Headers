
@interface SiriTTSTrainerSession : NSObject <SiriTTSTrainerAgentDelegate> {
    NSString * _appId;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSString *appId;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id /* block */)getInstallingProgressBlockForAsset:(id)arg1;
+ (bool)isDeviceSupported;
+ (void)setInstallingProgressBlock:(id /* block */)arg1 forAsset:(id)arg2;

- (void).cxx_destruct;
- (id)appId;
- (void)cancelTask:(id)arg1 reply:(id /* block */)arg2;
- (void)cleanUpTaskQueue:(id /* block */)arg1;
- (id)connection;
- (void)getAllTasks:(id /* block */)arg1;
- (void)getRecordingMetadata:(id)arg1 name:(id)arg2 reply:(id /* block */)arg3;
- (void)getTaskById:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)installTrainingAsset:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)installableTrainingAssetsForLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3;
- (id)installedTrainingAssetsForLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3;
- (oneway void)installingTrainingAsset:(id)arg1 progress:(float)arg2;
- (id)remoteObject;
- (void)setAppId:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)startRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)uninstallTrainingAsset:(id)arg1;

@end
