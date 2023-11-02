
@interface PKPassthroughView : UIView {
    bool  _hitTestEnabled;
    bool  _inHitTest;
    bool  _inPortalHitTest;
    PKPassthroughView * _portal;
    unsigned long long  _portalTargetCount;
}

@property (getter=isHitTestEnabled, nonatomic) bool hitTestEnabled;
@property (nonatomic) PKPassthroughView *portal;
@property (getter=isPortalled, nonatomic, readonly) bool portalled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHitTestEnabled;
- (bool)isPortalled;
- (id)portal;
- (void)setHitTestEnabled:(bool)arg1;
- (void)setPortal:(id)arg1;

@end
