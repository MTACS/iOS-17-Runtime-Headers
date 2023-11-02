
@interface SWCollaborationCoordinator : NSObject <NSCacheDelegate> {
    NSCache * _actionCache;
    <SWCollaborationActionHandler> * _actionHandler;
    bool  _applicationIsReadyForActions;
    NSMutableArray * _cachedUUIDs;
}

@property (nonatomic, retain) NSCache *actionCache;
@property (nonatomic) <SWCollaborationActionHandler> *actionHandler;
@property (nonatomic) bool applicationIsReadyForActions;
@property (nonatomic, retain) NSMutableArray *cachedUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)_cacheAction:(id)arg1;
- (void)_sendActionToApp:(id)arg1;
- (void)_sendStartCollaborationAction:(id)arg1;
- (void)_sendUndeliveredActionsIfNecessary;
- (void)_sendUpdateCollaborationParticipantsAction:(id)arg1;
- (id)actionCache;
- (id)actionHandler;
- (void)applicationHasFinishedLaunching;
- (bool)applicationIsReadyForActions;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)cachedUUIDs;
- (id)init;
- (void)processIncomingAction:(id)arg1;
- (void)processIncomingActions:(id)arg1;
- (void)setActionCache:(id)arg1;
- (void)setActionHandler:(id)arg1;
- (void)setApplicationIsReadyForActions:(bool)arg1;
- (void)setCachedUUIDs:(id)arg1;

@end
