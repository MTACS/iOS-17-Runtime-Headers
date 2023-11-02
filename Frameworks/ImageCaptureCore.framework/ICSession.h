
@interface ICSession : NSObject {
    NSXPCConnection * _connection;
    bool  _forwardPTPEvents;
    NSMutableArray * _notifications;
    unsigned long long  _objectHandle;
    bool  _openSession;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resourceLock;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property bool forwardPTPEvents;
@property (readonly) NSMutableArray *notifications;
@property unsigned long long objectHandle;
@property bool openSession;
@property (readonly) int pid;

- (void)addNotifications:(id)arg1;
- (id)connection;
- (void)dealloc;
- (bool)forwardPTPEvents;
- (id)initWithConnection:(id)arg1;
- (bool)interestedInNotification:(id)arg1;
- (id)notifications;
- (unsigned long long)objectHandle;
- (bool)openSession;
- (int)pid;
- (void)remNotifications:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setForwardPTPEvents:(bool)arg1;
- (void)setObjectHandle:(unsigned long long)arg1;
- (void)setOpenSession:(bool)arg1;

@end
