
@interface CUIPSDLayerBaseRef : NSObject {
    CUIPSDImageRef * _imageRef;
    unsigned int  _layerIndex;
}

@property (readonly) int blendMode;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly) double fillOpacity;
@property (readonly) bool hasLayerMask;
@property (readonly) bool hasVectorMask;
@property (nonatomic, retain) CUIPSDImageRef *imageRef;
@property (nonatomic) unsigned int layerIndex;
@property (readonly) double opacity;
@property (readonly) bool visibility;

- (struct CGImage { }*)_createMaskFromAlphaChannel:(long long)arg1;
- (id)_psdImageRef;
- (void*)_psdLayerRecord;
- (int)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (double)fillOpacity;
- (bool)hasLayerMask;
- (bool)hasVectorMask;
- (id)imageRef;
- (bool)isLayerGroup;
- (unsigned int)layerIndex;
- (id)layerMaskRef;
- (id)name;
- (double)opacity;
- (void)setImageRef:(id)arg1;
- (void)setLayerIndex:(unsigned int)arg1;
- (id)vectorMaskRef;
- (bool)visibility;

@end
