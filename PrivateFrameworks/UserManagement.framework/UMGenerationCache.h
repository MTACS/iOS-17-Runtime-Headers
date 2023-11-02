
@interface UMGenerationCache : NSObject {
    unsigned long long  _cachedValue;
    id /* block */  _fetcher;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    NSString * _name;
    NSString * _notification;
    int  _notifyToken;
    NSObject<UMSideEffectsProviding> * _se;
}

- (void).cxx_destruct;

@end
