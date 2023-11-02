
@interface SWPreventSystemSleepAssertion : NSObject <BSInvalidatable> {
    NSString * _identifier;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _lock_assertionID;
    unsigned long long  _lock_state;
    double  _lock_timeoutTime;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHighPriorityQueue;

- (void).cxx_destruct;
- (void)acquireWithTimeout:(double)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isActive;

@end
