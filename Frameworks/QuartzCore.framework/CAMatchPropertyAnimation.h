
@interface CAMatchPropertyAnimation : CAAnimation

@property (getter=isAdditive) bool additive;
@property (copy) NSString *keyPath;
@property unsigned int sourceContextId;
@property CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;

- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (bool)isAdditive;
- (id)keyPath;
- (void)setAdditive:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setSourceContextId:(unsigned int)arg1;
- (void)setSourceLayer:(id)arg1;
- (void)setSourceLayerRenderId:(unsigned long long)arg1;
- (unsigned int)sourceContextId;
- (id)sourceLayer;
- (unsigned long long)sourceLayerRenderId;

@end
