
@interface CRSUIMutableClimateOverlaySceneSettings : UIMutableCarPlayApplicationSceneSettings

@property (nonatomic, retain) NSNumber *containerHeight;
@property (nonatomic) unsigned long long statusBarEdge;

- (id)containerHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContainerHeight:(id)arg1;
- (void)setStatusBarEdge:(unsigned long long)arg1;
- (unsigned long long)statusBarEdge;

@end
