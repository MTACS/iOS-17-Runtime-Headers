
@interface PXSearchResultsHeaderView : UICollectionReusableView {
    NSString * _sectionIdentifier;
    UIButton * _seeAllButton;
    id /* block */  _seeAllButtonHandler;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic, retain) UIButton *seeAllButton;
@property (nonatomic, copy) id /* block */ seeAllButtonHandler;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_didSelectSeeAllButton:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (id)sectionIdentifier;
- (id)seeAllButton;
- (id /* block */)seeAllButtonHandler;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSectionIdentifier:(id)arg1 seeAllButtonHandler:(id /* block */)arg2;
- (void)setSeeAllButton:(id)arg1;
- (void)setSeeAllButtonHandler:(id /* block */)arg1;
- (void)setSeeAllButtonHidden:(bool)arg1;
- (void)setSeeAllButtonTitle:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelString:(id)arg1;
- (void)setupConstraints;
- (id)stackView;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAlignmentForTextSize;
- (void)updateStackViewMarginsForTextSize;

@end
