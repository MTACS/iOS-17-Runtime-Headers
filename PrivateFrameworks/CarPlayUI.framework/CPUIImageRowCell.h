
@interface CPUIImageRowCell : _CPUIBaseTableCell {
    UIActivityIndicatorView * _activityIndicator;
    NSArray * _artworkCatalogs;
    UIImageView * _chevronView;
    UIImage * _fallbackImage;
    CPUIHighlightButton * _focusIndicator;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownBoundingSize;
    bool  _needsArtworkImagesLayout;
    NSMutableArray * _reusableMediaViews;
    id /* block */  _selectGridItemBlock;
    id /* block */  _selectTitleBlock;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewWidthConstraint;
    UILabel * _titleLabel;
    UIView * _trailingView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, copy) NSArray *artworkCatalogs;
@property (nonatomic, retain) UIImageView *chevronView;
@property (nonatomic, retain) UIImage *fallbackImage;
@property (nonatomic, retain) CPUIHighlightButton *focusIndicator;
@property (nonatomic, retain) NSMutableArray *reusableMediaViews;
@property (nonatomic, copy) id /* block */ selectGridItemBlock;
@property (nonatomic, copy) id /* block */ selectTitleBlock;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSLayoutConstraint *stackViewWidthConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIView *trailingView;

+ (double)minimumHeight;
+ (double)rowHeight;

- (void).cxx_destruct;
- (void)_layoutArtworkImagesIfNeeded;
- (void)_removeArtworkButton:(id)arg1;
- (void)_setNeedsArtworkImagesLayout;
- (void)_updateTintColors;
- (id)activityIndicator;
- (void)applyConfiguration:(id)arg1;
- (id)artworkCatalogs;
- (long long)artworkViewCountThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)canBecomeFocused;
- (id)chevronView;
- (void)configureCell;
- (void)coreCellItemTapped:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)fallbackImage;
- (id)focusIndicator;
- (void)gridCellItemTapped:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)reusableMediaViews;
- (id /* block */)selectGridItemBlock;
- (id /* block */)selectTitleBlock;
- (void)setActivityIndicator:(id)arg1;
- (void)setArtworkCatalogs:(id)arg1;
- (void)setChevronView:(id)arg1;
- (void)setFallbackImage:(id)arg1;
- (void)setFocusIndicator:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLoading:(bool)arg1;
- (void)setReusableMediaViews:(id)arg1;
- (void)setSelectGridItemBlock:(id /* block */)arg1;
- (void)setSelectTitleBlock:(id /* block */)arg1;
- (void)setStackView:(id)arg1;
- (void)setStackViewWidthConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingView:(id)arg1;
- (id)stackView;
- (id)stackViewWidthConstraint;
- (id)titleLabel;
- (id)trailingView;

@end
