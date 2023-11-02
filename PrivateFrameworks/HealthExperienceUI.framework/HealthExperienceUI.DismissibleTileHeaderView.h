
@interface HealthExperienceUI.DismissibleTileHeaderView : UIView {
    void accessoryColor;
    void accessoryLabel;
    void accessorySeparator;
    void chromeHostView;
    void dataSource;
    void detailContainerView;
    void detailLabel;
    void detailToSeparator;
    void detailToTitle;
    void dismissToBottom;
    void dismissToSeparator;
    void dismissToTop;
    void dismissToTrailing;
    void heightConstraint;
    void minimumTappableDismissHeight;
    void minimumTappableDismissWidth;
    void minimumViewHeight;
    void title;
    void titleLabel;
    void titleToBottom;
    void titleToDismiss;
    void titleToTop;
}

- (void).cxx_destruct;
- (id)accessibilityAccessoryLabel;
- (void)didReceiveSignificantTimeChangeNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
