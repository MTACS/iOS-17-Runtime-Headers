
@interface EKDayOccurrenceTravelTimeView : UIView {
    bool  _animatingAlpha;
    NSArray * _constraints;
    <EKDayOccurrenceTravelTimeViewMetricsDelegate> * _delegate;
    UIColor * _elementColor;
    double  _hairlineYPosition;
    UIView * _horizontalLineView;
    NSLayoutConstraint * _iconHeight;
    NSLayoutConstraint * _iconWidth;
    NSLayoutConstraint * _leadingHorizontalPad;
    UIColor * _lineColor;
    long long  _routingMode;
    bool  _selected;
    NSLayoutConstraint * _trailingHorizontalPad;
    UIImageView * _travelTimeIcon;
    UILabel * _travelTimeLabel;
}

@property bool animatingAlpha;
@property (retain) NSArray *constraints;
@property (nonatomic) <EKDayOccurrenceTravelTimeViewMetricsDelegate> *delegate;
@property (nonatomic, retain) UIColor *elementColor;
@property (nonatomic) double hairlineYPosition;
@property (retain) UIView *horizontalLineView;
@property (retain) NSLayoutConstraint *iconHeight;
@property (retain) NSLayoutConstraint *iconWidth;
@property (retain) NSLayoutConstraint *leadingHorizontalPad;
@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic) long long routingMode;
@property (nonatomic) bool selected;
@property (retain) NSLayoutConstraint *trailingHorizontalPad;
@property (retain) UIImageView *travelTimeIcon;
@property (retain) UILabel *travelTimeLabel;
@property (nonatomic, copy) NSAttributedString *travelTimeString;

+ (void)initialize;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(bool)arg1 sizeClass:(long long)arg2;

- (void).cxx_destruct;
- (double)_iconScale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_parentPadding;
- (id)_textFont;
- (id)_travelTimeIconForTravelModeWithColor:(id)arg1;
- (void)_updateStringsColorsAndConstraintConstants;
- (double)alphaForElements;
- (bool)animatingAlpha;
- (id)constraints;
- (id)delegate;
- (id)elementColor;
- (double)hairlineYPosition;
- (id)horizontalLineView;
- (id)iconHeight;
- (id)iconWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReusableTravelTimeView:(id)arg1;
- (void)layoutSubviews;
- (id)leadingHorizontalPad;
- (id)lineColor;
- (long long)routingMode;
- (bool)selected;
- (void)setAnimatingAlpha:(bool)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElementColor:(id)arg1;
- (void)setHairlineYPosition:(double)arg1;
- (void)setHorizontalLineView:(id)arg1;
- (void)setIconHeight:(id)arg1;
- (void)setIconWidth:(id)arg1;
- (void)setLeadingHorizontalPad:(id)arg1;
- (void)setLineColor:(id)arg1;
- (void)setRoutingMode:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTrailingHorizontalPad:(id)arg1;
- (void)setTravelTimeIcon:(id)arg1;
- (void)setTravelTimeLabel:(id)arg1;
- (void)setTravelTimeString:(id)arg1;
- (id)trailingHorizontalPad;
- (id)travelTimeIcon;
- (id)travelTimeLabel;
- (id)travelTimeString;

@end
