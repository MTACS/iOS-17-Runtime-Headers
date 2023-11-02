
@interface GameCenterUI.FocusableTitledAppIconView : GKFocusHighlightingCollectionViewCell {
    void embeddedView;
}

@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)prepareForReuse;

@end
