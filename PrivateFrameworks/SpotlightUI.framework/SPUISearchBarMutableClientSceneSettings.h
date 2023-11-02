
@interface SPUISearchBarMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchBarClientSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerHeight;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)headerHeight;
- (void)setHeaderHeight:(double)arg1;

@end
