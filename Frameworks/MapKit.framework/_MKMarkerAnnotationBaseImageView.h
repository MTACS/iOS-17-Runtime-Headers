
@interface _MKMarkerAnnotationBaseImageView : UIImageView {
    _MKMarkerAnnotationBaseImageContent * _baseImageContent;
    double  _tailLength;
}

@property (getter=_baseImageContent, setter=_setBaseImageContent:, nonatomic, retain) _MKMarkerAnnotationBaseImageContent *baseImageContent;

+ (id)_gradientImageName:(long long)arg1;
+ (struct CGPath { }*)_pathForBaseImageType:(long long)arg1 radius:(double)arg2 tailLength:(double)arg3;

- (void).cxx_destruct;
- (id)_baseImageContent;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scale:(double)arg4;
- (bool)_isFillColorClear;
- (void)_renderBaseContent;
- (id)_renderBaseImage:(struct CGContext { }*)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3;
- (void)_renderContentUsingGraphicsPath:(struct CGPath { }*)arg1;
- (void)_renderGradientForRectaloon;
- (void)_setBaseImageContent:(id)arg1;
- (void)_strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 scale:(double)arg3;
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOvalInSize:(struct CGSize { double x1; double x2; })arg1;

@end
