
@interface NonVisualEffectView : UIView {
    _UIVisualEffectBackdropView * __captureView;
    NSString * __groupName;
    UIView * _backgroundView;
    UIView * _contentView;
    double  _cornerRadius;
    UIVisualEffect * _effect;
}

@property (setter=_setCaptureView:, nonatomic) _UIVisualEffectBackdropView *_captureView;
@property (setter=_setGroupName:, nonatomic, copy) NSString *_groupName;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, copy) UIVisualEffect *effect;

- (void).cxx_destruct;
- (id)_captureView;
- (double)_cornerRadius;
- (id)_groupName;
- (void)_setCaptureView:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setGroupName:(id)arg1;
- (id)backgroundView;
- (id)contentView;
- (id)effect;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEffect:(id)arg1;

@end
