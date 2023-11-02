
@interface WFWiFiStateMonitor : NSObject {
    bool  _associatedToCarPlayOnly;
    NSString * _bundleIdentifier;
    NSRunLoop * _callbackRunLoop;
    NSThread * _callbackThread;
    WFClient * _client;
    CWFScanResult * _currentNetwork;
    id /* block */  _handler;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _internalQueue;
    WFLinkQuality * _linkQuality;
    bool  _monitoring;
    long long  _state;
}

@property bool associatedToCarPlayOnly;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property NSRunLoop *callbackRunLoop;
@property (nonatomic, retain) NSThread *callbackThread;
@property (nonatomic, retain) WFClient *client;
@property (nonatomic, retain) CWFScanResult *currentNetwork;
@property (copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, copy) WFLinkQuality *linkQuality;
@property bool monitoring;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_asyncGetCurrentNetwork:(id /* block */)arg1;
- (void)_autoJoinStateChanged:(id)arg1;
- (void)_carPlayNetworkTypeDidChange:(id)arg1;
- (void)_clientConnectionRestarted:(id)arg1;
- (void)_hostAPStateChanged:(id)arg1;
- (void)_interfaceBecameAvailable:(id)arg1;
- (void)_linkDidChange:(id)arg1;
- (void)_linkQualityDidChange:(id)arg1;
- (void)_notifyStateChanged:(long long)arg1 newState:(long long)arg2;
- (void)_outrankStateDidChange:(id)arg1;
- (void)_powerStateDidChange:(id)arg1;
- (void)_registerInterfaceObserversForInterface:(id)arg1;
- (void)_runManagerCallbackThread;
- (void)_spawnManagerCallbackThread;
- (void)_updateState;
- (void)_updateState:(id /* block */)arg1;
- (bool)associatedToCarPlayOnly;
- (id)bundleIdentifier;
- (id)callbackRunLoop;
- (id)callbackThread;
- (id)client;
- (id)currentNetwork;
- (void)dealloc;
- (id)description;
- (id /* block */)handler;
- (id)identifier;
- (id)init;
- (id)initWithClient:(id)arg1 handler:(id /* block */)arg2;
- (id)internalQueue;
- (id)linkQuality;
- (bool)monitoring;
- (void)setAssociatedToCarPlayOnly:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCallbackRunLoop:(id)arg1;
- (void)setCallbackThread:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setCurrentNetwork:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setLinkQuality:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)startMonitoring;
- (long long)state;
- (void)stopMonitoring;

@end
