
@interface TUISuggestionCandidateCell : TUICandidateBaseCell {
    NSLayoutConstraint * _bottomPaddingConstraint;
    TIKeyboardCandidate * _candidate;
    UILayoutGuide * _centeredContainer;
    UIImageView * _iconImageView;
    NSLayoutConstraint * _leftPaddingConstraint;
    UILayoutGuide * _paddedContainer;
    NSLayoutConstraint * _paddingBetweenConstraint;
    NSLayoutConstraint * _rightPaddingConstraint;
    UILabel * _textLabel;
    NSLayoutConstraint * _topPaddingConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomPaddingConstraint;
@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic, retain) UILayoutGuide *centeredContainer;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) NSLayoutConstraint *leftPaddingConstraint;
@property (nonatomic, retain) UILayoutGuide *paddedContainer;
@property (nonatomic, retain) NSLayoutConstraint *paddingBetweenConstraint;
@property (nonatomic, retain) NSLayoutConstraint *rightPaddingConstraint;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) NSLayoutConstraint *topPaddingConstraint;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)bodyText;
- (id)bottomPaddingConstraint;
- (id)candidate;
- (id)centeredContainer;
- (void)commonInit;
- (void)didMoveToWindow;
- (id)headerText;
- (id)iconImageView;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftPaddingConstraint;
- (id)paddedContainer;
- (id)paddingBetweenConstraint;
- (id)rightPaddingConstraint;
- (void)setBottomPaddingConstraint:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setCenteredContainer:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLeftPaddingConstraint:(id)arg1;
- (void)setPaddedContainer:(id)arg1;
- (void)setPaddingBetweenConstraint:(id)arg1;
- (void)setRightPaddingConstraint:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTopPaddingConstraint:(id)arg1;
- (id)textLabel;
- (id)textSuggestion;
- (id)topPaddingConstraint;
- (void)updateLabel;

@end
