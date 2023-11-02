
@interface SBSLockScreenServiceConnection : NSObject {
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSCountedSet * _lock_preventPasscodeLockReasons;
    NSCountedSet * _lock_preventSpuriousScreenUndimReasons;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)launchEmergencyDialerWithCompletion:(id /* block */)arg1;
- (void)lockDeviceAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)preventPasscodeLockWithReason:(id)arg1;
- (id)preventSpuriousScreenUndimWithReason:(id)arg1;
- (void)requestPasscodeCheckUIWithOptions:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(id /* block */)arg2;

@end
