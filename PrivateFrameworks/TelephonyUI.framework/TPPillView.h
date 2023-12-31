
@interface TPPillView : TPControl {
    TPBadgeView * _badgeView;
    <TPPillViewDelegate> * _delegate;
    UITapGestureRecognizer * _gestureRecognizer;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewBottomAnchorLayoutConstraint;
    NSLayoutConstraint * _stackViewLeftAnchorLayoutConstraint;
    NSLayoutConstraint * _stackViewRightAnchorLayoutConstraint;
    NSLayoutConstraint * _stackViewTopAnchorLayoutConstraint;
    UILabel * _textLabel;
    unsigned long long  _theme;
}

@property (nonatomic, copy) NSString *badgeText;
@property (nonatomic, readonly) TPBadgeView *badgeView;
@property (nonatomic) <TPPillViewDelegate> *delegate;
@property (nonatomic, readonly) UITapGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, retain) NSLayoutConstraint *stackViewBottomAnchorLayoutConstraint;
@property (nonatomic, retain) NSLayoutConstraint *stackViewLeftAnchorLayoutConstraint;
@property (nonatomic, retain) NSLayoutConstraint *stackViewRightAnchorLayoutConstraint;
@property (nonatomic, retain) NSLayoutConstraint *stackViewTopAnchorLayoutConstraint;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic) unsigned long long theme;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)badgeText;
- (id)badgeView;
- (void)commonInit;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (id)gestureRecognizer;
- (void)handleTap:(id)arg1;
- (id)initWithTitle:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithTitle:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 theme:(unsigned long long)arg3;
- (void)loadConstraints;
- (void)setBadgeText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStackViewBottomAnchorLayoutConstraint:(id)arg1;
- (void)setStackViewLeftAnchorLayoutConstraint:(id)arg1;
- (void)setStackViewRightAnchorLayoutConstraint:(id)arg1;
- (void)setStackViewTopAnchorLayoutConstraint:(id)arg1;
- (void)setTheme:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)stackView;
- (id)stackViewBottomAnchorLayoutConstraint;
- (id)stackViewLeftAnchorLayoutConstraint;
- (id)stackViewRightAnchorLayoutConstraint;
- (id)stackViewTopAnchorLayoutConstraint;
- (id)textLabel;
- (unsigned long long)theme;
- (id)title;
- (void)unloadConstraints;
- (void)updateFonts;
- (void)updateTheme;

@end
