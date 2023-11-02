
@interface BMAccessAssertionCache : NSObject {
    _PASLock * _lock;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_makeAssertionWithDescriptor:(id)arg1 extensionToken:(id)arg2 path:(id)arg3;
- (id)assertionForAccessDescriptor:(id)arg1;
- (id)createAssertionForAccessDescriptor:(id)arg1 extensionToken:(id)arg2 path:(id)arg3;
- (id)init;

@end
