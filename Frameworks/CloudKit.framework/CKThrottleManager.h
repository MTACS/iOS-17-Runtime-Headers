
@interface CKThrottleManager : NSObject {
    <CKThrottleObserver> * _observer;
    NSArray * _throttleList;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _throttleLock;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (bool)addThrottle:(id)arg1;
- (id)allThrottles;
- (id)enforcedThrottleForCriteria:(id)arg1 willSendRequest:(bool)arg2 outThrottleError:(id*)arg3;
- (id)initInternal;
- (void)noteDataChangeForThrottle:(id)arg1;
- (void)resetThrottles;
- (void)setThrottleObserver:(id)arg1;
- (void)throttleListBecameEmpty;
- (void)throttleWasAdded:(id)arg1;
- (void)throttleWillBeRemoved:(id)arg1;

@end
