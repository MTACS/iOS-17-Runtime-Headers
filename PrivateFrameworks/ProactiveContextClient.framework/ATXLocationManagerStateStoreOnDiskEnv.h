
@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id  _stateChangeRegistration;
}

- (void).cxx_destruct;
- (void)callOnNextUnlock:(id /* block */)arg1;
- (void)dealloc;
- (bool)isLocked;
- (int)openFileAtPath:(id)arg1 dataProtectionClass:(int)arg2;

@end
