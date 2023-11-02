
@interface HRWDVisualEffectView : UIVisualEffectView {
    UIView * _tintView;
}

@property (nonatomic, retain) UIView *tintView;

+ (id)tintViewWithBlurEffectStyle:(long long)arg1 color:(id)arg2;
+ (id)ultraLightTintView;

- (void).cxx_destruct;
- (id)initWithEffect:(id)arg1;
- (void)layoutSubviews;
- (void)setTintView:(id)arg1;
- (id)tintView;

@end
