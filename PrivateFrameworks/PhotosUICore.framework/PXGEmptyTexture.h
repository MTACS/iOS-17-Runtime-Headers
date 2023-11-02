
@interface PXGEmptyTexture : PXGBaseTexture

- (long long)estimatedByteSize;
- (struct CGImage { }*)imageRepresentation;
- (bool)isOpaque;
- (struct CGSize { double x1; double x2; })pixelSize;
- (unsigned char)presentationType;

@end
