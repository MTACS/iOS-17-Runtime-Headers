
@interface PXShapeView : UIView {
    UIColor * _fillColor;
    UIBezierPath * _path;
    UIColor * _strokeColor;
}

@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, copy) UIBezierPath *path;
@property (nonatomic, copy) UIColor *strokeColor;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)fillColor;
- (id)path;
- (void)setFillColor:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)shapeLayer;
- (id)strokeColor;

@end
