
@interface FBSOpenApplicationService : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BSServiceConnection * _connection;
}

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (bool)currentProcessServicesDefaultShellEndpoint;
+ (id)new;
+ (id)serviceName;
+ (id)serviceWithDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)arg1;
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(id /* block */)arg4;
- (id)_remoteTarget;
- (bool)canOpenApplication:(id)arg1 reason:(long long*)arg2;
- (void)dealloc;
- (id)init;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(id /* block */)arg4;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices

+ (id)dashboardEndpoint;
+ (id)dashboardService;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (bool)hd_canOpenApplication:(id)arg1 reason:(long long*)arg2;
+ (id)hd_defaultService;
+ (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(id /* block */)arg3;

- (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(id /* block */)arg3;

@end
