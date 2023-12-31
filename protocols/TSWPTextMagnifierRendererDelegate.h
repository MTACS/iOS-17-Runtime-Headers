
@protocol TSWPTextMagnifierRendererDelegate

@required

- (void)drawMagnifierClippedCanvasLayer:(CALayer *)arg1 inContext:(struct CGContext { }*)arg2;
- (NSString *)maskImageName;
- (NSString *)overlayImageName;
- (bool)shouldHideCanvasLayer;
- (NSString *)underlayImageName;

@end
