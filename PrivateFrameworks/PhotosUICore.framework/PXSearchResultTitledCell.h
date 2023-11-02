
@interface PXSearchResultTitledCell : _UICollectionViewListCell <PXSearchResultThumbnailCell> {
    UILabel * _countLabel;
    NSString * _countString;
    unsigned long long  _searchResultType;
    UILabel * _subtitleLabel;
    UIImageView * _thumbnailImageView;
    UILabel * _titleLabel;
    bool  _wantsPlayButton;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, retain) UILabel *countLabel;
@property (nonatomic, retain) NSString *countString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long searchResultType;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *thumbnailImageView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool wantsPlayButton;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_setupCountLabel;
- (id)_setupImageView;
- (id)_setupSubtitleLabel;
- (void)_setupSubviews;
- (id)_setupTitleLabel;
- (id)accessibilityLabel;
- (void)configureWithResult:(id)arg1;
- (id)countLabel;
- (id)countLabelFont;
- (id)countString;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)italicTitleLabelFont;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (unsigned long long)searchResultType;
- (void)setCountLabel:(id)arg1;
- (void)setCountString:(id)arg1;
- (void)setSearchResultType:(unsigned long long)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setWantsPlayButton:(bool)arg1;
- (bool)shouldUseAccessibilityLayout;
- (id)subtitleLabel;
- (id)subtitleLabelFont;
- (id)thumbnailImageView;
- (struct CGSize { double x1; double x2; })thumbnailImageViewPixelSize;
- (id)titleLabel;
- (id)titleLabelFont;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAccessories;
- (void)updateConfigurationUsingState:(id)arg1;
- (void)updateContentColors;
- (bool)wantsPlayButton;

@end
