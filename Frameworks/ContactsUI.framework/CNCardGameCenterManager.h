
@interface CNCardGameCenterManager : NSObject {
    CNContact * _contact;
    GKServiceProxy * _gameCenterProxy;
    bool  _hasCheckedAuthenticatedLocalPlayer;
    CNUICoreRecentsManager * _recentsManager;
    <CNCancelable> * _relationshipResultsCancelable;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNScheduler> * _workQueue;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) GKServiceProxy *gameCenterProxy;
@property (nonatomic) bool hasCheckedAuthenticatedLocalPlayer;
@property (nonatomic, retain) CNUICoreRecentsManager *recentsManager;
@property (nonatomic, retain) <CNCancelable> *relationshipResultsCancelable;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, readonly) <CNScheduler> *workQueue;

- (void).cxx_destruct;
- (id)contact;
- (id)defaultFriendResultFromFriendResults:(id)arg1 forContact:(id)arg2;
- (id)gameCenterProxy;
- (void)getGameCenterRelationshipsForContact:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleResults:(id)arg1 forContact:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)handles;
- (id)handlesForContact:(id)arg1;
- (bool)hasCheckedAuthenticatedLocalPlayer;
- (id)init;
- (id)recentsManager;
- (void)refreshGameCenterRelationshipsForContact:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)relationshipResultsCancelable;
- (id)schedulerProvider;
- (void)setContact:(id)arg1;
- (void)setGameCenterProxy:(id)arg1;
- (void)setHasCheckedAuthenticatedLocalPlayer:(bool)arg1;
- (void)setRecentsManager:(id)arg1;
- (void)setRelationshipResultsCancelable:(id)arg1;
- (bool)shouldActionDisplayDropdownMenu;
- (id)workQueue;

@end
