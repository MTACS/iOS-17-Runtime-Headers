
@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    UIImageView * _overlayPlayBackground;
    long long  _style;
    id  _target;
}

- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;

@end
