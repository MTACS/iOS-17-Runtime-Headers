
@interface _PASBundleIdResolver : NSObject {
    NSString * _exePath;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)_populateResultWithLockWitness:(id)arg1;
- (id)bundleIdentifierOrProcessName:(bool*)arg1;
- (id)initWithProcessIdentifier:(int)arg1;

@end
