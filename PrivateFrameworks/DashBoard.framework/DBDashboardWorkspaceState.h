
@interface DBDashboardWorkspaceState : NSObject <DBWorkspaceState, NSCopying, NSMutableCopying> {
    DBDashboardEntity * _baseEntity;
    DBDashboardEntity * _stackedEntity;
}

@property (nonatomic, readonly) NSString *activeBundleIdentifier;
@property (nonatomic, readonly) DBDashboardEntity *baseEntity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DBDashboardEntity *stackedEntity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bundleIdentifierFromEntity:(id)arg1;
- (id)_initWithState:(id)arg1;
- (id)activeBundleIdentifier;
- (id)baseEntity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)stackedEntity;

@end
