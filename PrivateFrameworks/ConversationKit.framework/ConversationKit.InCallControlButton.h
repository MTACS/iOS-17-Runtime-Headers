
@interface ConversationKit.InCallControlButton : UIControl <UIPointerInteractionDelegate> {
    void callbackCancellable;
    void cnkContentAlpha;
    void colorConfiguration;
    void discBackgroundEffectView;
    void discBackgroundFlatView;
    void discBackgroundVibrancyView;
    void discView;
    void image;
    void imageView;
    void isUsingVisualEffects;
    void label;
    void menuDataSource;
    void paragraphStyle;
    void style;
    void symbolDescription;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
