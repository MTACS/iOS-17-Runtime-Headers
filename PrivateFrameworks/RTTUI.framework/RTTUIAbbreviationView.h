
@interface RTTUIAbbreviationView : UIControl {
    UILabel * _abbreviation;
    NSDictionary * _abbreviationData;
    bool  _drawLeftBorder;
    UIView * _highlightView;
    UILabel * _hint;
    UIView * _leftBorderView;
}

@property (nonatomic, retain) UILabel *abbreviation;
@property (nonatomic, retain) NSDictionary *abbreviationData;
@property (nonatomic, readonly) NSString *abbreviationText;
@property (nonatomic) bool drawLeftBorder;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, retain) UILabel *hint;
@property (nonatomic, retain) UIView *leftBorderView;

+ (void)warningSquelcher;

- (void).cxx_destruct;
- (id)abbreviation;
- (id)abbreviationData;
- (id)abbreviationText;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (bool)canBecomeFocused;
- (bool)drawLeftBorder;
- (id)highlightView;
- (id)hint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)leftBorderView;
- (void)setAbbreviation:(id)arg1;
- (void)setAbbreviationData:(id)arg1;
- (void)setDrawLeftBorder:(bool)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHint:(id)arg1;
- (void)setLeftBorderView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
