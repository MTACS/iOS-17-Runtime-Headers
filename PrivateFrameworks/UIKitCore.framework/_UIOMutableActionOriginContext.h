
@interface _UIOMutableActionOriginContext : _UIOServerActionOriginContext

@property (nonatomic) unsigned int contextId;
@property (nonatomic, copy) NSString *displayIdentifier;
@property (nonatomic) unsigned long long layerId;
@property (nonatomic) struct CGPoint { double x1; double x2; } layerReferencePoint;
@property (nonatomic, copy) NSString *sceneIdentity;

- (void)setContextId:(unsigned int)arg1;
- (void)setDisplayIdentifier:(id)arg1;
- (void)setLayerId:(unsigned long long)arg1;
- (void)setLayerReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSceneIdentity:(id)arg1;

@end
