
@interface HealthExposureNotificationUI.OnboardingHeaderView : UIView {
    void header;
    void imageHeightConstraint;
    void imageView;
    void imageViewWidthConstraint;
    void imageWidthConstraint;
    void insets;
    void labelContainerLeadingConstraint;
    void proxyDisabled;
}

@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader *header;
@property (nonatomic, readonly) UIImageView *imageView;

- (void).cxx_destruct;
- (id)header;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithHeader:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 proxyDisabled:(bool)arg3 corners:(unsigned long long)arg4;

@end
