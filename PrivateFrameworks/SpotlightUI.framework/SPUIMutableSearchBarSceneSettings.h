
@interface SPUIMutableSearchBarSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchBarSceneSettings>

@property (nonatomic) bool animated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scrollProgress;
@property (readonly) Class superclass;

- (bool)animated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)scrollProgress;
- (void)setAnimated:(bool)arg1;
- (void)setScrollProgress:(double)arg1;

@end
