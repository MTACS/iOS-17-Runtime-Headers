
@interface MUAppleRatingRowView : MKViewWithHairline {
    bool  _ratingsCountAnimationEnabled;
    MUStackLayout * _stackLayout;
    UILabel * _subtitleLabel;
    MUAppleRatingRowSubtitleView * _subtitleView;
    UILabel * _titleLabel;
    <MURatingPercentageViewModel> * _viewModel;
}

@property (nonatomic, retain) <MURatingPercentageViewModel> *viewModel;

+ (id)_numberOfPeopleMonospacedFont;
+ (long long)_ratingsValueAnimationFromViewModel:(id)arg1 toViewModel:(id)arg2;

- (void).cxx_destruct;
- (id)_attributesWithFont:(id)arg1 color:(id)arg2;
- (void)_contentSizeDidChange;
- (id)_percentageStringComponentsFromCurrentViewModel;
- (id)_ratingSubtitleAttributedString;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateAppearanceAnimatingFromPreviousViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ratingsCountAnimationEnabled:(bool)arg2;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
