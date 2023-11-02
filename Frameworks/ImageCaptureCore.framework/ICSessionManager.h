
@interface ICSessionManager : NSObject {
    id  _delegate;
    bool  _sessionConnectionAdded;
    unsigned long long  _sessionCount;
    NSMutableArray * _sessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionsLock;
}

@property (nonatomic, readonly) NSArray *connections;
@property (nonatomic) <ICSessionManagerProtocol> *delegate;
@property (nonatomic, readonly) unsigned long long sessionCount;
@property (nonatomic, readonly) NSArray *sessions;

- (void)addNotifications:(id)arg1 toSessionWithConnection:(id)arg2;
- (id)connections;
- (id)connectionsMonitoringNotification:(id)arg1;
- (id)connectionsMonitoringObjectID:(id)arg1;
- (bool)createSessionWithConnection:(id)arg1;
- (unsigned long long)currentSessionCount;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)remNotifications:(id)arg1 fromSessionWithConnection:(id)arg2;
- (void)removeAllSessions;
- (unsigned long long)removeSessionWithConnection:(id)arg1;
- (unsigned long long)removeSessionsWithProcessIdentifier:(id)arg1;
- (unsigned long long)sessionCount;
- (id)sessionWithConnection:(id)arg1;
- (id)sessions;
- (void)setDelegate:(id)arg1;

@end
