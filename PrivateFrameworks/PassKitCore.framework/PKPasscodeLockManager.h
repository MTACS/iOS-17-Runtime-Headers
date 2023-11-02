
@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver> {
    bool  _isPasscodeSet;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    MCProfileConnection * _profileConnection;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPasscodeSet;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isPasscodeSet;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
