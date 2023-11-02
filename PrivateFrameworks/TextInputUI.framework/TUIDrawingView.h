
@interface TUIDrawingView : UIView {
    UIBezierPath * _path;
}

@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)path;
- (void)setPath:(id)arg1;
- (id)shapeLayer;

@end
