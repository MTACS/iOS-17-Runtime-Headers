
@interface CAPortalLayer : CALayer

@property bool allowsBackdropGroups;
@property bool crossDisplay;
@property bool hidesSourceLayer;
@property bool matchesOpacity;
@property bool matchesPosition;
@property bool matchesTransform;
@property unsigned int sourceContextId;
@property CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;

- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (bool)allowsBackdropGroups;
- (bool)crossDisplay;
- (void)didChangeValueForKey:(id)arg1;
- (bool)hidesSourceLayer;
- (void)layerDidBecomeVisible:(bool)arg1;
- (bool)matchesOpacity;
- (bool)matchesPosition;
- (bool)matchesTransform;
- (void)setAllowsBackdropGroups:(bool)arg1;
- (void)setCrossDisplay:(bool)arg1;
- (void)setHidesSourceLayer:(bool)arg1;
- (void)setMatchesOpacity:(bool)arg1;
- (void)setMatchesPosition:(bool)arg1;
- (void)setMatchesTransform:(bool)arg1;
- (void)setSourceContextId:(unsigned int)arg1;
- (void)setSourceLayer:(id)arg1;
- (void)setSourceLayerRenderId:(unsigned long long)arg1;
- (unsigned int)sourceContextId;
- (id)sourceLayer;
- (unsigned long long)sourceLayerRenderId;

@end
