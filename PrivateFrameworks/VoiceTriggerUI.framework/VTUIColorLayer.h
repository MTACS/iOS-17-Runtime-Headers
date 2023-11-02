
@interface VTUIColorLayer : CAShapeLayer {
    UIColor * _backgroundColor;
    UIColor * _blueColor;
    UIColor * _redColor;
}

@property float phase;

+ (bool)needsDisplayForKey:(id)arg1;

- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (void)display;
- (id)init;

@end
