
@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton> {
    bool  __didConfigureForPause;
    SEL  _action;
    PXVideoOverlayButtonConfiguration * _overlayConfiguration;
    bool  _showAsPause;
    id  _target;
}

@property (setter=_setDidConfigureForPause:, nonatomic) bool _didConfigureForPause;
@property (nonatomic) bool showAsPause;

- (void).cxx_destruct;
- (bool)_didConfigureForPause;
- (void)_handleTap:(id)arg1;
- (void)_setDidConfigureForPause:(bool)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setShowAsPause:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (bool)showAsPause;

@end
