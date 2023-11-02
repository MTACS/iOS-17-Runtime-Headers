
@interface NotificationAgent : NSObject <DockKitCore.StateEventProtocol> {
    void callback;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void manager;
    void stateLock;
    void tracking;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)deregister;
- (id)init;
- (bool)isTracking;
- (bool)registerWithCallback:(id /* block */)arg1;
- (void)stateEventWithInfo:(id)arg1 connectedState:(long long)arg2 dockState:(long long)arg3 trackingButtonState:(long long)arg4;

@end
