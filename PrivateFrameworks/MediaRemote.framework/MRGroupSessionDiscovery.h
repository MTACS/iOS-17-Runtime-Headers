
@interface MRGroupSessionDiscovery : NSObject <MRGroupSessionDiscoveryClientXPCProtocol> {
    MRGroupSessionInfo * _activeSession;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    MRGroupSessionXPCConnection * _connection;
    <MRGroupSessionDiscoveryDelegate> * _delegate;
    NSSet * _discoveredSessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) MRGroupSessionInfo *activeSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) MRGroupSessionXPCConnection *connection;
@property (nonatomic, readonly) <MRGroupSessionDiscoveryDelegate> *delegate;
@property (nonatomic, retain) NSSet *discoveredSessions;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)activeSession;
- (void)activeSessionDidChange:(id)arg1;
- (id)callbackQueue;
- (id)connection;
- (id)debugDescription;
- (id)delegate;
- (id)discoveredSessions;
- (void)discoveredSessionsDidChange:(id)arg1;
- (void)handleDidRestoreConnectionNotification;
- (id)initWithDelegate:(id)arg1;
- (void)initializeConnection;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)notifyDelegateWithActiveSession:(id)arg1;
- (void)notifyDelegateWithDiscoveredSessions:(id)arg1;
- (id)queue;
- (void)registerNotifications;
- (void)setActiveSession:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDiscoveredSessions:(id)arg1;

@end
