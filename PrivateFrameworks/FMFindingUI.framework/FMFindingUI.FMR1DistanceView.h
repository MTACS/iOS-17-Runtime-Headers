
@interface FMFindingUI.FMR1DistanceView : UIView {
    void deviceName;
    void directionLabel;
    void directionLabelFont;
    void distance;
    void distanceLabel;
    void distanceLabelBottomConstraint;
    void distanceLabelHeightConstraint;
    void distanceSpring;
    void guide;
    void initialAboveOrBelowTimestamp;
    void presentedDistance;
    void style;
    void styleDirectionLabelFont;
    void styleDistanceLabelFont;
    void styleLabelHeight;
    void threshold;
}

@property (nonatomic, readonly) UILabel *accessibilityDirectionLabel;
@property (nonatomic, readonly) UILabel *accessibilityDistanceLabel;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)accessibilityDirectionLabel;
- (id)accessibilityDistanceLabel;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
