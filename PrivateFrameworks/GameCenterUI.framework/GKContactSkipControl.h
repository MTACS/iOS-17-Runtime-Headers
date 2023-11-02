
@interface GKContactSkipControl : UIControl {
    UIView * _buttonView;
    NSArray * _buttons;
    NSMutableDictionary * _buttonsToTitles;
    UIView * _centeringView;
    NSString * _lastSelectedValue;
    NSArray * _values;
}

@property (nonatomic, retain) UIView *buttonView;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) NSMutableDictionary *buttonsToTitles;
@property (nonatomic, retain) UIView *centeringView;
@property (nonatomic, retain) NSString *lastSelectedValue;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (void)adjustForTraitCollection:(id)arg1;
- (void)awakeFromNib;
- (id)buttonView;
- (id)buttons;
- (id)buttonsToTitles;
- (id)centeringView;
- (id)compactPhoneValues:(long long)arg1;
- (void)determineButtonFromGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastSelectedValue;
- (id)nextTitleFollowingValue:(id)arg1;
- (void)setButtonView:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setButtonsToTitles:(id)arg1;
- (void)setCenteringView:(id)arg1;
- (void)setLastSelectedValue:(id)arg1;
- (void)setValues:(id)arg1;
- (void)setupButtonView;
- (void)setupValueButtons;
- (long long)valueButtonCountThatFitsHeight:(double)arg1;
- (void)valueSelected:(id)arg1;
- (id)values;

@end
