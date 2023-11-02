
@interface HealthExperienceUI.DataTypeTileHeaderView : UIView {
    void accessoryLabel;
    void chromeHostView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentTileHeaderDetailKind;
    void dataSource;
    void detailContainerView;
    void detailLabel;
    void detailToAccessory;
    void glyphBaselineOffset;
    void heightConstraint;
    void minimumViewHeight;
    void titleLabel;
    void titleToAccessory;
    void titleToBottom;
    void titleToDetail;
    void titleToTop;
}

- (void).cxx_destruct;
- (id)accessibilityAccessoryLabel;
- (void)didReceiveSignificantTimeChangeNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleText;

@end
