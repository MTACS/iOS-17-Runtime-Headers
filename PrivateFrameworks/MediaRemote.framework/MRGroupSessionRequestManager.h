
@interface MRGroupSessionRequestManager : NSObject {
    MRGroupSessionInfo * _groupSessionInfo;
    bool  _hasPopulatedIdentity;
    MRUserIdentity * _localUserIdentity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) MRGroupSessionInfo *groupSessionInfo;
@property (nonatomic) bool hasPopulatedIdentity;
@property (nonatomic, retain) MRUserIdentity *localUserIdentity;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)augmentLocalCommandOptions:(id)arg1;
- (id)groupSessionInfo;
- (void)handleGroupSessionNearbyContactDiscoveryDidChange:(id)arg1;
- (bool)hasPopulatedIdentity;
- (id)init;
- (id)localUserIdentity;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)registerObservers;
- (void)restoreState;
- (void)setHasPopulatedIdentity:(bool)arg1;
- (void)setLocalUserIdentity:(id)arg1;
- (void)updateGroupSessionInfo:(id)arg1;
- (void)updateLocalIdentity:(id)arg1;

@end
