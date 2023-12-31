
@interface MLUBlurryView : UIView {
    bool  _hasActivated;
    bool  _shouldRasterizeForTransition;
}

@property double blurRadius;
@property (nonatomic) bool shouldRasterizeForTransition;

- (void)_activateBlurring;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)blurRadius;
- (void)setBlurRadius:(double)arg1;
- (void)setShouldRasterizeForTransition:(bool)arg1;
- (bool)shouldRasterizeForTransition;

@end
