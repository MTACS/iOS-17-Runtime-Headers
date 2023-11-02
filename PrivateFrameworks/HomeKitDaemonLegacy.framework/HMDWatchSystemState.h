
@interface HMDWatchSystemState : HMFObject {
    bool  _companionReachable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _watchSystemStateDelegates;
}

@property (getter=isCompanionReachable, nonatomic) bool companionReachable;
@property (nonatomic, readonly) NSHashTable *watchSystemStateDelegates;

+ (id)sharedState;

- (void).cxx_destruct;
- (void)_callDidUpdateReachabilityChangeForCompanion:(bool)arg1 forDelegate:(id)arg2;
- (id)init;
- (bool)isCompanionReachable;
- (void)registerDelegate:(id)arg1;
- (void)setCompanionReachable:(bool)arg1;
- (id)watchSystemStateDelegates;

@end
