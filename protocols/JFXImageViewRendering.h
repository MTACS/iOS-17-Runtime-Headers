
@protocol JFXImageViewRendering <NSObject>

@required

- (bool)enableDebugDrawing;
- (bool)flipX;
- (bool)flipY;
- (JTImage *)jtImage;
- (long long)renderingType;
- (void)setEnableDebugDrawing:(bool)arg1;
- (void)setFlipX:(bool)arg1;
- (void)setFlipY:(bool)arg1;
- (void)setJtImage:(JTImage *)arg1;

@end
