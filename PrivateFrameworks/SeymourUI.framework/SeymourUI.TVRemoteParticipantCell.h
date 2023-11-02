
@interface SeymourUI.TVRemoteParticipantCell : SeymourUI.TVFocusableCollectionViewCell {
    void deviceBadgeView;
    void imageViewEdgeFillConstraints;
    void indicatorView;
    void layout;
    void monogramButton;
    void monogramButtonContentView;
    void titleLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  type;
}

@property (nonatomic, readonly) _TtC9SeymourUI15DeviceBadgeView *accessibilityDeviceBadgeView;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;

- (void).cxx_destruct;
- (id)accessibilityDeviceBadgeView;
- (id)accessibilityTitleLabel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
