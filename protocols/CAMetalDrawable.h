
@protocol CAMetalDrawable <MTLDrawable>

@required

- (CAMetalLayer *)layer;
- (<MTLTexture> *)texture;

@end
