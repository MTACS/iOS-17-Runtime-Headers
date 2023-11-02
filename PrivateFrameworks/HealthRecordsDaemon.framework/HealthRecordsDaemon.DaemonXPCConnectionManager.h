
@interface HealthRecordsDaemon.DaemonXPCConnectionManager : NSObject <HDXPCListenerDelegate> {
    void listener;
    void serviceMap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)init;

@end
