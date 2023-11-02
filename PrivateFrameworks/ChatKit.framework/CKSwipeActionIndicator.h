
@interface CKSwipeActionIndicator : UIImageView {
    double  _blurRadius;
    double  _currentHorizontalTranslation;
    double  _currentScale;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double currentHorizontalTranslation;
@property (nonatomic) double currentScale;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_swipeActionIndicatorInit;
- (double)blurRadius;
- (double)currentHorizontalTranslation;
- (double)currentScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setCurrentHorizontalTranslation:(double)arg1;
- (void)setCurrentScale:(double)arg1;
- (void)setTransformForScale:(double)arg1 horizontalTranslation:(double)arg2;

@end
