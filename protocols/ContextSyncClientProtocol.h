
@protocol ContextSyncClientProtocol <NSObject>

@required

- (bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 shouldWake:(bool)arg4 forDeviceTypes:(long long)arg5 withError:(id*)arg6;
- (bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 shouldWake:(bool)arg4 forDevices:(NSArray *)arg5 withError:(id*)arg6;
- (bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 shouldWake:(bool)arg3 forDeviceTypes:(long long)arg4;
- (bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 shouldWake:(bool)arg3 forDeviceTypes:(long long)arg4 withError:(id*)arg5;
- (bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forDeviceTypes:(long long)arg3;
- (bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forDeviceTypes:(long long)arg3 withError:(id*)arg4;
- (bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 forDeviceTypes:(long long)arg4 withError:(id*)arg5;
- (bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 forDevices:(NSArray *)arg4 withError:(id*)arg5;

@end
