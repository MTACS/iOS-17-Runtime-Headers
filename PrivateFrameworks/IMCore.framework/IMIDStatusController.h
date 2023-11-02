
@interface IMIDStatusController : NSObject {
    NSRecursiveLock * _servicesLock;
    NSMutableSet * _servicesRegistered;
}

@property (nonatomic, retain) NSRecursiveLock *_servicesLock;
@property (nonatomic, retain) NSMutableSet *_servicesRegistered;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(bool)arg3;
- (long long)_idStatusForID:(id)arg1 onAccount:(id)arg2;
- (long long)_idStatusForID:(id)arg1 onService:(id)arg2;
- (void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(long long)arg2 forService:(id)arg3;
- (void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3;
- (id)_servicesLock;
- (id)_servicesRegistered;
- (long long)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2;
- (id)init;
- (void)requestStatusForID:(id)arg1 onAccount:(id)arg2;
- (void)requestStatusForID:(id)arg1 onService:(id)arg2;
- (void)set_servicesLock:(id)arg1;
- (void)set_servicesRegistered:(id)arg1;
- (long long)statusForID:(id)arg1 onService:(id)arg2;

@end