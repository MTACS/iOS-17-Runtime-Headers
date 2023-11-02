
@interface ATXHeuristicResultCache : NSObject {
    int  _appRefreshToken;
    NSMutableDictionary * _cache;
    NSNumber * _cachedIsFocusActiveState;
    NSHashTable * _expirerInternTable;
    BMBiomeScheduler * _focusScheduler;
    BPSSink * _focusSink;
    int  _learnRefreshToken;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _significantTimeToken;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)sharedInstance;
+ (id)sharedPassLibrary;

- (void).cxx_destruct;
- (void)_expire:(id)arg1 postNotification:(bool)arg2;
- (void)_handleFocusStateUpdate:(id)arg1;
- (id)_internExpirerLocked:(id)arg1;
- (void)_observeUserFocusChanges;
- (unsigned long long)count;
- (void)dealloc;
- (void)expire:(id)arg1;
- (void)expireAll;
- (id)firstExpirationDate;
- (id)heuristicsCached;
- (id)init;
- (bool)isFocusModeActiveWithError:(id*)arg1;
- (id)objectForKey:(id)arg1 found:(bool*)arg2;
- (void)setObject:(id)arg1 expirers:(id)arg2 forKey:(id)arg3;

@end
