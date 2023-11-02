
@interface DBDashboardWorkspaceStateResolution : NSObject {
    DBDashboardEntity * _activateSuspendedEntity;
    DBDashboardWorkspaceState * _state;
}

@property (nonatomic, retain) DBDashboardEntity *activateSuspendedEntity;
@property (nonatomic, retain) DBDashboardWorkspaceState *state;

- (void).cxx_destruct;
- (id)activateSuspendedEntity;
- (id)changeItemForEntity:(id)arg1;
- (void)setActivateSuspendedEntity:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
