
@interface PDCApplicationEventListener : NSObject <PDCApplicationEnvironmentMonitoring> {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _activated;
    <PDCApplicationEnvironment> * _applicationEnvironment;
    bool  _cancelled;
    <PDCConsentStore> * _consentStore;
    <PDCApplicationEnvironmentMonitoringHandle> * _environmentMonitoringHandle;
    NSObject<OS_dispatch_queue> * _queue;
}

@property bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)activate;
- (void)applicationDidUninstall:(id)arg1;
- (bool)cancelled;
- (void)checkForStaleConsentRecords;
- (id)initWithConsentStore:(id)arg1 applicationEnvironment:(id)arg2 targetQueue:(id)arg3;
- (void)invalidate;
- (void)setCancelled:(bool)arg1;

@end
