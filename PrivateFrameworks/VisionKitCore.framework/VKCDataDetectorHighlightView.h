
@interface VKCDataDetectorHighlightView : VKPlatformView {
    bool  _hideDashedLine;
    UIBezierPath * _path;
}

@property (nonatomic) bool hideDashedLine;
@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

+ (id)highlightColor;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)configureDashPatternForPath:(id)arg1;
- (void)didMoveToSuperview;
- (bool)hideDashedLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)path;
- (void)setHideDashedLine:(bool)arg1;
- (void)setPath:(id)arg1;
- (id)shapeLayer;

@end
