
@interface DBDashboardProxiedApplicationSceneEntity : DBDashboardEntity {
    DBApplicationInfo * _applicationToProxy;
    DBDashboardApplicationSceneEntity * _proxyEntity;
}

@property (nonatomic, readonly) DBApplicationInfo *applicationToProxy;
@property (nonatomic, readonly) DBDashboardApplicationSceneEntity *proxyEntity;

+ (id)application:(id)arg1 proxiedByEntity:(id)arg2;

- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)arg1;
- (id)_initWithApplication:(id)arg1 proxiedByEntity:(id)arg2;
- (id)applicationToProxy;
- (bool)isProxiedApplicationEntity;
- (id)proxyEntity;

@end
