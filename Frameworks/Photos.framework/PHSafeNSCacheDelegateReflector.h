
@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {
    NSMapTable * _delegatesByCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setDelegate:(id)arg1 forCache:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1 forCache:(id)arg2;

@end
