
@interface WeatherMaps.ControlsView : UIView {
    void actionDelegate;
    void backgroundEffectManagerBlur;
    void backgroundEffectManagerUltraThin;
    void buttonGroupViews;
    void buttonGroups;
    void configuration;
    void discoverWindHintArrowOffset;
    void discoverWindHintView;
    void mapViewForZoomControl;
    void menuDelegate;
    void scaleModel;
    void scaleView;
    void windOverlayHintManager;
    void zoomControl;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityElements:(id)arg1;

@end
