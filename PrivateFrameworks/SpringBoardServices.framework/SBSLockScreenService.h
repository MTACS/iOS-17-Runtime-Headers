
@interface SBSLockScreenService : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    SBSLockScreenServiceConnection * _lock_connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)launchEmergencyDialerWithCompletion:(id /* block */)arg1;
- (void)lockDeviceAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)preventPasscodeLockWithReason:(id)arg1;
- (id)preventSpuriousScreenUndimWithReason:(id)arg1;
- (void)requestPasscodeCheckUIWithOptions:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(id /* block */)arg2;

@end
