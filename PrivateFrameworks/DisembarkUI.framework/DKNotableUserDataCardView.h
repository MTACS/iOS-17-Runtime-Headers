
@interface DKNotableUserDataCardView : UIView {
    NSLayoutConstraint * _bottomStackViewConstraint;
    NSMutableArray * _cells;
    bool  _expanded;
    DKNotableUserDataCardPrimaryCell * _primaryCell;
    UIStackView * _secondaryStackView;
    UIStackView * _stackView;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomStackViewConstraint;
@property (nonatomic, retain) NSMutableArray *cells;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) DKNotableUserDataCardPrimaryCell *primaryCell;
@property (nonatomic, retain) UIStackView *secondaryStackView;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_setupPrimaryCell:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (void)_setupPrimaryStackView:(id)arg1;
- (void)_setupSecondaryStackView;
- (void)_toggleExpanded;
- (void)addCardCell:(id)arg1;
- (id)bottomStackViewConstraint;
- (id)cells;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (bool)isExpanded;
- (id)primaryCell;
- (id)secondaryStackView;
- (void)setBottomStackViewConstraint:(id)arg1;
- (void)setCells:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setPrimaryCell:(id)arg1;
- (void)setSecondaryStackView:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
