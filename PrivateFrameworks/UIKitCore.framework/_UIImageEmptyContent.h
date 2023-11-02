
@interface _UIImageEmptyContent : _UIImageContent

- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (bool)canScaleImageToTargetResolution;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)renditionWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 applyingEffect:(id)arg3;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;

@end
