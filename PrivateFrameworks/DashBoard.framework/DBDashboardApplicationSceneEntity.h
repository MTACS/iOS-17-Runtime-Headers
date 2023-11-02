
@interface DBDashboardApplicationSceneEntity : DBDashboardEntity {
    DBApplicationInfo * _applicationInfo;
}

@property (nonatomic, readonly) DBApplicationInfo *applicationInfo;

+ (id)applicationSceneEntityForApplicationInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)arg1;
- (id)_initWithApplicationInfo:(id)arg1;
- (id)applicationInfo;
- (bool)isApplicationEntity;
- (bool)isFullScreenEntity;

@end
