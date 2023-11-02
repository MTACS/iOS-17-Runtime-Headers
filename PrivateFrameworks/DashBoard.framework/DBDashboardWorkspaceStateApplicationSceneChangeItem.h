
@interface DBDashboardWorkspaceStateApplicationSceneChangeItem : DBDashboardWorkspaceStateChangeItem {
    NSDictionary * _activationSettings;
    DBApplicationInfo * _application;
}

@property (nonatomic, retain) NSDictionary *activationSettings;
@property (nonatomic, retain) DBApplicationInfo *application;

- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)arg1;
- (id)_newEntityFromChangeItemWithPolicyProvider:(id)arg1;
- (id)activationSettings;
- (id)application;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithApplication:(id)arg1;
- (bool)prefersAnimation;
- (void)setActivationSettings:(id)arg1;
- (void)setApplication:(id)arg1;

@end
