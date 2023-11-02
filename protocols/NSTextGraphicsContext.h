
@protocol NSTextGraphicsContext <NSObject>

@required

+ (<NSTextGraphicsContext> *)graphicsContextForApplicationFrameworkContext:(long long)arg1;

- (struct CGContext { }*)CGContext;
- (bool)isDrawingToScreen;
- (bool)isFlipped;

@end
