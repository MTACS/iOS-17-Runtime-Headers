
@interface PKBlurView : UIView {
    double  _blurRadius;
    CAFilter * _filter;
}

@property (nonatomic) double blurRadius;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)blurRadius;
- (void)setBlurRadius:(double)arg1;

@end
