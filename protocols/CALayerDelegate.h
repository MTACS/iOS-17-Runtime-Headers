
@protocol CALayerDelegate <NSObject>

@optional

- (<CAAction> *)actionForLayer:(CALayer *)arg1 forKey:(NSString *)arg2;
- (void)displayLayer:(CALayer *)arg1;
- (void)drawLayer:(CALayer *)arg1 inContext:(struct CGContext { }*)arg2;
- (void)layerWillDraw:(CALayer *)arg1;
- (void)layoutSublayersOfLayer:(CALayer *)arg1;

@end
