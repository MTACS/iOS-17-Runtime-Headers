
@interface CAMatchMoveAnimation : CAAnimation

@property (getter=isAdditive) bool additive;
@property bool appliesRotation;
@property bool appliesScale;
@property bool appliesX;
@property bool appliesY;
@property (copy) NSString *keyPath;
@property unsigned int sourceContextId;
@property CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property (copy) NSArray *sourcePoints;
@property bool targetsSuperlayer;
@property bool usesNormalizedCoordinates;

+ (id)defaultValueForKey:(id)arg1;

- (bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (bool)appliesRotation;
- (bool)appliesScale;
- (bool)appliesX;
- (bool)appliesY;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (bool)isAdditive;
- (id)keyPath;
- (void)setAdditive:(bool)arg1;
- (void)setAppliesRotation:(bool)arg1;
- (void)setAppliesScale:(bool)arg1;
- (void)setAppliesX:(bool)arg1;
- (void)setAppliesY:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setSourceContextId:(unsigned int)arg1;
- (void)setSourceLayer:(id)arg1;
- (void)setSourceLayerRenderId:(unsigned long long)arg1;
- (void)setSourcePoints:(id)arg1;
- (void)setTargetsSuperlayer:(bool)arg1;
- (void)setUsesNormalizedCoordinates:(bool)arg1;
- (unsigned int)sourceContextId;
- (id)sourceLayer;
- (unsigned long long)sourceLayerRenderId;
- (id)sourcePoints;
- (bool)targetsSuperlayer;
- (bool)usesNormalizedCoordinates;

@end
