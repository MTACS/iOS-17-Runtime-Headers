
@interface CADistanceFieldLayer : CALayer

@property struct CGColor { }*foregroundColor;
@property bool invertsShape;
@property double lineWidth;
@property double offset;
@property (copy) NSString *renderMode;
@property double sharpness;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (void)_colorSpaceDidChange;
- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (unsigned int)_renderImageCopyFlags;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGColor { }*)foregroundColor;
- (bool)invertsShape;
- (double)lineWidth;
- (double)offset;
- (id)renderMode;
- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (void)setInvertsShape:(bool)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setRenderMode:(id)arg1;
- (void)setSharpness:(double)arg1;
- (double)sharpness;

@end
