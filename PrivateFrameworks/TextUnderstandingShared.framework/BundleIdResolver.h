
@interface BundleIdResolver : NSObject {
    NSString * _exePath;
    BundleIdResolverGuardedData * _guardedData;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)_populateResultWithLockWitness:(id)arg1;
- (id)bundleIdentifierOrProcessName:(bool*)arg1;
- (void)dealloc;
- (id)initWithProcessIdentifier:(int)arg1;

@end
