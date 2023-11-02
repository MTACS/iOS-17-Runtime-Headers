
@interface PAAccessLogger : NSObject {
    PACoalescingIntervalTracker * _coalescingIntervalTracker;
    NSXPCConnection * _connection;
    <PAAccessLoggerDelegate> * _delegate;
    NSString * _enablementChangedNotificationName;
    int  _enablementChangedNotificationToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _maxRetryCount;
    NSObject<OS_dispatch_queue> * _queue;
    PAAccessLoggerState * _state;
}

@property (retain) PACoalescingIntervalTracker *coalescingIntervalTracker;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property <PAAccessLoggerDelegate> *delegate;
@property (readonly) bool loggingEnabled;
@property long long maxRetryCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)beginIntervalForAccess:(id)arg1;
- (id)coalescingIntervalTracker;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)endIntervalWithSlot:(id)arg1 timestampAdjustment:(double)arg2;
- (void)ensureEnablementChangedNotificationRegistered;
- (void)handleConnectionInterrupted;
- (void)handleConnectionInvalidated;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 enablementChangedNotificationName:(id)arg3;
- (id)initWithQueue:(id)arg1;
- (void)lockedInvalidateState;
- (void)lockedNotifyDidSetLoggingEnabled:(bool)arg1;
- (void)log:(id)arg1;
- (void)log:(id)arg1 reason:(long long)arg2;
- (bool)loggingEnabled;
- (long long)maxRetryCount;
- (void)notifyDidCoalesceAccess:(id)arg1;
- (void)notifyDidLogAccess:(id)arg1 failedWithError:(id)arg2;
- (id)queue;
- (void)recordAssetIdentifiers:(id)arg1 withVisibilityState:(long long)arg2 accessEventCount:(unsigned long long)arg3 forSlot:(id)arg4;
- (struct ResyncStateResult { id x1; id x2; id x3; })resyncState;
- (void)setCoalescingIntervalTracker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoggingEnabled:(bool)arg1;
- (void)setMaxRetryCount:(long long)arg1;
- (void)withLockedState:(id /* block */)arg1;

@end
