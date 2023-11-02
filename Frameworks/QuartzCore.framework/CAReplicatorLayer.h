
@interface CAReplicatorLayer : CALayer

@property float instanceAlphaOffset;
@property float instanceBlueOffset;
@property struct CGColor { }*instanceColor;
@property long long instanceCount;
@property double instanceDelay;
@property float instanceGreenOffset;
@property float instanceRedOffset;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } instanceTransform;
@property bool preservesDepth;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)init;
- (float)instanceAlphaOffset;
- (float)instanceBlueOffset;
- (struct CGColor { }*)instanceColor;
- (long long)instanceCount;
- (double)instanceDelay;
- (float)instanceGreenOffset;
- (float)instanceRedOffset;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })instanceTransform;
- (bool)preservesDepth;
- (void)setInstanceAlphaOffset:(float)arg1;
- (void)setInstanceBlueOffset:(float)arg1;
- (void)setInstanceColor:(struct CGColor { }*)arg1;
- (void)setInstanceCount:(long long)arg1;
- (void)setInstanceDelay:(double)arg1;
- (void)setInstanceGreenOffset:(float)arg1;
- (void)setInstanceRedOffset:(float)arg1;
- (void)setInstanceTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setPreservesDepth:(bool)arg1;

@end
