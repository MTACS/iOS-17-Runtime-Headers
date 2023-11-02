
@interface SBSAccessibilityWindowHostingController : NSObject <SBSAccessibilityWindowHostingServerToClientInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableDictionary * _registeredWindowContextIDsToLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionQueue_connection;
- (void)_connectionQueue_handleInterruption;
- (id)init;
- (void)invalidate;
- (void)registerWindowWithContextID:(unsigned int)arg1 atLevel:(double)arg2;
- (void)unregisterWindowWithContextID:(unsigned int)arg1;

@end
