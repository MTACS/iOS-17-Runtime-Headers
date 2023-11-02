
@interface _CPUILiveTrackView : UIView {
    double  _erasedPercentage;
}

@property (nonatomic) double erasedPercentage;

+ (Class)layerClass;

- (void)_updateGradient;
- (double)erasedPercentage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setErasedPercentage:(double)arg1;

@end
