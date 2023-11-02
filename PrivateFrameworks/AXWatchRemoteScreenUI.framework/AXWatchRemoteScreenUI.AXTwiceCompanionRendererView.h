
@interface AXWatchRemoteScreenUI.AXTwiceCompanionRendererView : UIView <UIAccessibilityBridgeAXActionHandler> {
    void cornerRadiusRatio;
    void delegate;
    void mirroringLayer;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)performAXAction:(int)arg1 withValue:(id)arg2 onBridgeElement:(id)arg3;

@end
