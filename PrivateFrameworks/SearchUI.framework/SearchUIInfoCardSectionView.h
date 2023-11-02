
@interface SearchUIInfoCardSectionView : SearchUICardSectionView <SearchUIInfoSizingDelegate> {
    NUIContainerStackView * _baseView;
    NUIContainerStackView * _expandedView;
    bool  _isExpanded;
    UIFont * _labelFont;
    NSMutableArray * _rowStackViews;
    TLKTextButton * _showMoreButton;
    NUIContainerStackView * _showMoreStackView;
}

@property (nonatomic, retain) NUIContainerStackView *baseView;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NUIContainerStackView *expandedView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExpanded;
@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic, retain) NSMutableArray *rowStackViews;
@property (nonatomic, retain) SFInfoCardSection *section;
@property (nonatomic, retain) TLKTextButton *showMoreButton;
@property (nonatomic, retain) NUIContainerStackView *showMoreStackView;
@property (readonly) Class superclass;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)baseView;
- (void)configureShowMoreViewIfNecessary;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)didInvalidateSizeAnimate:(bool)arg1;
- (id)expandedView;
- (bool)isExpanded;
- (id)labelFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (id)rowStackViews;
- (void)setBaseView:(id)arg1;
- (void)setExpandedView:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setRowStackViews:(id)arg1;
- (void)setShowMoreButton:(id)arg1;
- (void)setShowMoreStackView:(id)arg1;
- (id)setupContentView;
- (id)showMoreButton;
- (void)showMoreButtonPressed;
- (id)showMoreStackView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithRowModel:(id)arg1;

@end
