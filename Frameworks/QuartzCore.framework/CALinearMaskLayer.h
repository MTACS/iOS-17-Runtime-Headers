
@interface CALinearMaskLayer : CALayer

@property <CALinearMaskLayerDelegate><CALayerDelegate> *delegate;
@property struct CGColor { }*foregroundColor;

+ (id)defaultValueForKey:(id)arg1;

- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)drawInLinearMaskContext:(struct CALinearMaskContext { }*)arg1;
- (struct CGColor { }*)foregroundColor;
- (void)setForegroundColor:(struct CGColor { }*)arg1;

@end
