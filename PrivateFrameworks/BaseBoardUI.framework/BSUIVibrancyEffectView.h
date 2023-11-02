
@interface BSUIVibrancyEffectView : BSUIVibrancyView {
    bool  _blurEnabled;
    bool  _captureOnly;
    unsigned long long  _contentType;
    UIView * _contentView;
    bool  _isEnabled;
    UIView * _maskView;
    BSUIVibrancyBackdropView * _materialBackdropView;
    struct { 
        bool subviews; 
    }  _needsUpdate;
    BSUIVibrancyEffectValues * _values;
    UIView * _vibrancyView;
}

@property (getter=isBlurEnabled, nonatomic) bool blurEnabled;
@property (getter=isCaptureOnly, nonatomic) bool captureOnly;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) UIView *maskView;
@property (nonatomic, readonly) BSUIVibrancyBackdropView *materialBackdropView;
@property (nonatomic, readonly) UIView *vibrancyView;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)_updateSubviewsIfNeeded;
- (unsigned long long)contentType;
- (id)contentView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateSubviews;
- (bool)isBlurEnabled;
- (bool)isCaptureOnly;
- (bool)isEnabled;
- (void)layoutSubviews;
- (id)maskView;
- (id)materialBackdropView;
- (void)setBlurEnabled:(bool)arg1;
- (void)setCaptureOnly:(bool)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)updateFilters;
- (id)vibrancyView;

@end
