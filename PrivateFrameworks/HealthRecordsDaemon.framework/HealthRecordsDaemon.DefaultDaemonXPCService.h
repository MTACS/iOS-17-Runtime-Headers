
@interface HealthRecordsDaemon.DefaultDaemonXPCService : NSObject <HDXPCListenerDelegate> {
    void identifier;
    void listener;
    void requiredEntitlementOverride;
    void serverGenerator;
}

- (void).cxx_destruct;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)init;

@end
