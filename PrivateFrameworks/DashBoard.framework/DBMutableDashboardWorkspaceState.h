
@interface DBMutableDashboardWorkspaceState : DBDashboardWorkspaceState

@property (nonatomic, retain) DBDashboardEntity *baseEntity;
@property (nonatomic, retain) DBDashboardEntity *stackedEntity;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBaseEntity:(id)arg1;
- (void)setStackedEntity:(id)arg1;

@end
