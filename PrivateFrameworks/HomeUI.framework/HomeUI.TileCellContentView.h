
@interface HomeUI.TileCellContentView : UIView <NSObject> {
    void activeLayoutConstraints;
    void activityIndicator;
    void badgeLabel;
    void configuration;
    void descriptionLabel;
    void iconView;
    void prefixLabel;
    void titleLabel;
}

@property (nonatomic, readonly) HUBaseIconView *iconView;
@property (nonatomic, readonly) NSArray *standardLabels;

- (void).cxx_destruct;
- (id)iconView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)standardLabels;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
