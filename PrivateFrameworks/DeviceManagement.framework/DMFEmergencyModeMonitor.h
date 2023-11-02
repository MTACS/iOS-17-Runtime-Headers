
@interface DMFEmergencyModeMonitor : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)remoteInterface;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)disableEmergencyModeWithError:(id*)arg1;
- (void)emergencyModeStatusWithCompletionHandler:(id /* block */)arg1;
- (id)emergencyModeStatusWithError:(id*)arg1;
- (bool)enableEmergencyModeForDuration:(double)arg1 withError:(id*)arg2;
- (bool)enableEmergencyModeWithError:(id*)arg1;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (id)xpcConnection;

@end
