
@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton> {
    bool  __didConfigureForPause;
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    PXVideoOverlayButtonConfiguration * _overlayConfiguration;
    UIImageView * _overlayPlayBackground;
    bool  _showAsPause;
    id  _target;
}

@property (setter=_setDidConfigureForPause:, nonatomic) bool _didConfigureForPause;
@property (nonatomic) bool showAsPause;

- (void).cxx_destruct;
- (bool)_didConfigureForPause;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (void)_setDidConfigureForPause:(bool)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)setShowAsPause:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (bool)showAsPause;

@end
