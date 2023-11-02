
@interface CLSilo : NSObject <NSCopying> {
    double  _currentLatchedAbsoluteTimestamp;
    NSString * _identifier;
    NSMutableSet * _idleHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _idleHandlersLock;
    bool  _isIdle;
    double  _lastIdleCheck;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)globalConfiguration;
+ (id)main;
+ (void)setGlobalConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(id /* block */)arg2;
- (void)assertInside;
- (void)assertOutside;
- (void)async:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentLatchedAbsoluteTimestamp;
- (id)debugDescription;
- (void)heartBeat:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)intendToSync;
- (bool)isSuspended;
- (id)newTimer;
- (void)prepareAndRunBlock:(id /* block */)arg1;
- (id)registerForIdleNotifications:(id /* block */)arg1 onResume:(id /* block */)arg2;
- (void)resume;
- (void)runIdleHandlers;
- (void)runResumeHandlers;
- (bool)shouldBeIdled;
- (void)suspend;
- (void)sync:(id /* block */)arg1;
- (void)unregisterForIdleNotifications:(id)arg1;

@end
