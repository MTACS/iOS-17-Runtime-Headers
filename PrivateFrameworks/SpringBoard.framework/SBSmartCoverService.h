
@interface SBSmartCoverService : NSObject <BSServiceConnectionListenerDelegate, SBSSmartCoverServiceServerInterface> {
    NSMutableSet * _connections;
    long long  _lastSmartCoverState;
    BSServiceConnectionListener * _listener;
    NSMutableSet * _observingConnections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithInitialState:(long long)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)setWantsSmartCoverStateChanges:(id)arg1;
- (void)smartCoverStateDidChange:(long long)arg1;

@end
