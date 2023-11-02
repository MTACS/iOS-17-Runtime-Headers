
@interface BMAccessTracker : NSObject {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_logMissingEntitlementsForAccess:(id)arg1 useCase:(id)arg2;
- (id)init;
- (void)logMissingEntitlementsForAccessToResource:(id)arg1 domain:(unsigned long long)arg2 withMode:(unsigned long long)arg3 useCase:(id)arg4;

@end
