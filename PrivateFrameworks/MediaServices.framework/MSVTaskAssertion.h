
@interface MSVTaskAssertion : NSObject {
    bool  _acquired;
    NSString * _bundleID;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    NSString * _name;
    int  _pid;
    BKSProcessAssertion * _processAssertion;
    NSString * _subsystem;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSString *name;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (unsigned int)_BSKFlagsForMSVFlags:(unsigned long long)arg1;
- (unsigned int)_BSKReasonForMSVReason:(unsigned long long)arg1;
- (void)_cancelInvalidationTimerWithCompletion:(id /* block */)arg1;
- (id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6;
- (bool)acquire;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)initWithName:(id)arg1 pid:(int)arg2 bundleID:(id)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6;
- (id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (void)invalidate;
- (void)invalidateOnDate:(id)arg1;
- (id /* block */)invalidationHandler;
- (bool)isAcquired;
- (bool)isValid;
- (id)name;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
