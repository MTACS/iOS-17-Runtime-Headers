
@interface VideosUI.CardView : VUIBaseView {
    void appImageView;
    void attributionView;
    void bottomSeparatorView;
    void button;
    void cardViewLayout;
    void debugUI;
    void downloadIndicator;
    void imageView;
    void labelViews;
    void overlayView;
}

@property (nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property (nonatomic, readonly) UIView *accessibilityButton;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) NSArray *accessibilityLabelViews;
@property (nonatomic, readonly) UIView *accessibilityOverlayView;
@property (nonatomic, readonly) bool vuiDebugUI;

- (void).cxx_destruct;
- (id)accessibilityAppImageView;
- (id)accessibilityButton;
- (id)accessibilityImageView;
- (id)accessibilityLabelViews;
- (id)accessibilityOverlayView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mainImageLoadedNotificationHandler;
- (void)setHighlighted:(bool)arg1;
- (bool)vuiDebugUI;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
