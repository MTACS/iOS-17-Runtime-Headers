
@interface SPUISearchBarSceneSettings : SPUILegibilitySceneSettings <SPUISearchBarSceneSettings>

@property (nonatomic, readonly) bool animated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double scrollProgress;
@property (readonly) Class superclass;

- (bool)animated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)scrollProgress;

@end
