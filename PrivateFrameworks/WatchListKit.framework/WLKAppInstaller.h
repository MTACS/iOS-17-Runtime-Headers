
@interface WLKAppInstaller : NSObject {
    NSObject<OS_dispatch_queue> * _installQueue;
    NSMutableSet * _installSessions;
}

+ (id)defaultAppInstaller;

- (void).cxx_destruct;
- (id)init;
- (void)installAppForInstallable:(id)arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)installAppForInstallable:(id)arg1 sceneIdentifier:(id)arg2 offer:(id)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)installAppForInstallable:(id)arg1 sceneIdentifier:(id)arg2 progressHandler:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
