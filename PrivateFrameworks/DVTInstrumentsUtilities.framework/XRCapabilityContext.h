
@interface XRCapabilityContext : NSObject {
    NSMutableDictionary * _capabilities;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _lock;
    NSMutableDictionary * _unimplementedResponses;
}

+ (void)announceUsedCapability:(id)arg1 version:(unsigned long long)arg2;
+ (id)currentContextSet;
+ (void)enterContextSet:(id)arg1;
+ (void)leaveContextSet:(id)arg1;

- (void).cxx_destruct;
- (void)addToCurrentContextSet;
- (void)announceUsedCapability:(id)arg1 version:(unsigned long long)arg2;
- (void)dealloc;
- (void)enumerateRequiredCapabilities:(id /* block */)arg1;
- (id)init;
- (void)removeFromCurrentContextSet;

@end
