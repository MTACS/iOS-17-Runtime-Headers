
@interface UIActivityHeroActionCell : UIActivityActionCell {
    UIImageView * _activityImageView;
    NSLayoutConstraint * _bottomInsetConstraint;
    UIStackView * _stackView;
    NSLayoutConstraint * _tallBottomInsetConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *activityImageView;
@property (nonatomic, retain) NSLayoutConstraint *bottomInsetConstraint;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSLayoutConstraint *tallBottomInsetConstraint;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)heightForNumberOfLines:(double)arg1;
+ (long long)numberOfLinesForTitle:(id)arg1 itemWidth:(double)arg2;

- (void).cxx_destruct;
- (id)activityImageView;
- (void)applyLayoutAttributes:(id)arg1;
- (id)bottomInsetConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setActivityImageView:(id)arg1;
- (void)setBottomInsetConstraint:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setStackView:(id)arg1;
- (void)setTallBottomInsetConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stackView;
- (id)tallBottomInsetConstraint;
- (id)titleLabel;
- (void)updateConstraints;

@end
