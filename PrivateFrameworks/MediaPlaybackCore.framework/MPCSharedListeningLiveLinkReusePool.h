
@interface MPCSharedListeningLiveLinkReusePool : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _sessionIDLiveLinkMap;
}

+ (id)sharedReusePool;

- (void).cxx_destruct;
- (id)init;
- (id)liveLinkForSessionID:(id)arg1;
- (void)storeLiveLink:(id)arg1 forSessionID:(id)arg2;

@end
