
@interface CNStarkNoContentBannerView : UIView {
    NSMutableArray * _constraintsForTitleLabel;
    NSMutableArray * _constraintsForTitleLabelAndSiriButton;
    UIButton * _siriButton;
    bool  _siriButtonEnabled;
    bool  _siriButtonSelected;
    UILabel * _titleLabel;
}

@property (retain) NSMutableArray *constraintsForTitleLabel;
@property (retain) NSMutableArray *constraintsForTitleLabelAndSiriButton;
@property (retain) UIButton *siriButton;
@property (nonatomic) bool siriButtonEnabled;
@property (nonatomic) bool siriButtonSelected;
@property (retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleString;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)choose;
- (void)clickGestureDidUpdate:(id)arg1;
- (id)constraintsForTitleLabel;
- (id)constraintsForTitleLabelAndSiriButton;
- (void)deselect;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)select;
- (void)setConstraintsForTitleLabel:(id)arg1;
- (void)setConstraintsForTitleLabelAndSiriButton:(id)arg1;
- (void)setSiriButton:(id)arg1;
- (void)setSiriButtonEnabled:(bool)arg1;
- (void)setSiriButtonSelected:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setupClickGestureRecognizer;
- (void)setupConstraintsForTitleLabelAndSiriButton;
- (void)setupConstraintsforTitleLabel;
- (void)setupSiriButton;
- (void)setupTitleLabel;
- (id)siriButton;
- (bool)siriButtonEnabled;
- (bool)siriButtonSelected;
- (void)siriButtonTapped:(id)arg1;
- (void)siriButtonTouchDown:(id)arg1;
- (void)siriButtonTouchUp:(id)arg1;
- (void)stateUpdated;
- (id)titleLabel;
- (id)titleString;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
