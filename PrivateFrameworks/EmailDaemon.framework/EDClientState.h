
@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable> {
    _Atomic bool  _isForeground;
    _Atomic bool  _isRunningTests;
    EFLocked * _visibleMailboxObjectIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _visibleMailboxesLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isForeground;
@property (readonly) bool isRunningTests;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *visibleMailboxObjectIDs;

+ (id)log;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)exitDaemon;
- (id)giveBoostWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (bool)isForeground;
- (bool)isRunningTests;
- (void)setIsForeground:(bool)arg1;
- (void)setIsRunningTests:(bool)arg1;
- (void)setStateForDemoMode:(id /* block */)arg1;
- (void)setVisibleMailboxObjectIDs:(id)arg1;
- (id)visibleMailboxObjectIDs;

@end
