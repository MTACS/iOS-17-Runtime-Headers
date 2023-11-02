
@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity {
    NSString * _bundleIdentifier;
    NSString * _futureSceneIdentifier;
    bool  _needsUpdate;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *futureSceneIdentifier;
@property (nonatomic, readonly) bool needsUpdate;

+ (bool)isAppClipUpdateAvailableForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_supportsLayoutRole:(long long)arg1;
- (id)appClipPlaceholderEntity;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)entityGenerator;
- (id)futureSceneIdentifier;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 futureSceneIdentifier:(id)arg2 needsUpdate:(bool)arg3;
- (bool)isAppClipPlaceholderEntity;
- (bool)isEqual:(id)arg1;
- (bool)needsUpdate;
- (bool)supportsPresentationAtAnySize;
- (Class)viewControllerClass;
- (bool)wantsExclusiveForeground;

@end
