
@interface TabSnapshotCacheEntry : NSObject {
    bool  _fitsInCache;
    bool  _group;
    NSMutableSet * _groupMembers;
    NSUUID * _identifier;
    UIImage * _snapshot;
    long long  _state;
    <TabSnapshotCacheEntryStateObserving> * _stateObserver;
    bool  _stateUpdateCancelled;
    bool  _updatingState;
}

@property (nonatomic) bool fitsInCache;
@property (getter=isGroup, nonatomic, readonly) bool group;
@property (nonatomic, readonly) NSMutableSet *groupMembers;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isPendingUpdate;
@property (nonatomic, retain) UIImage *snapshot;
@property (nonatomic) long long state;
@property (nonatomic) <TabSnapshotCacheEntryStateObserving> *stateObserver;
@property (nonatomic) bool stateUpdateCancelled;
@property (getter=isUpdatingState, nonatomic) bool updatingState;

- (void).cxx_destruct;
- (id)debugDescription;
- (bool)fitsInCache;
- (id)groupMembers;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 isGroup:(bool)arg2;
- (bool)isGroup;
- (bool)isPendingUpdate;
- (bool)isUpdatingState;
- (void)setFitsInCache:(bool)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateObserver:(id)arg1;
- (void)setStateUpdateCancelled:(bool)arg1;
- (void)setUpdatingState:(bool)arg1;
- (id)snapshot;
- (long long)state;
- (id)stateObserver;
- (bool)stateUpdateCancelled;

@end
