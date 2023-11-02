
@interface SearchUIMiniCardSectionView : SearchUICardSectionView {
    SearchUIImageView * _imageView;
    SearchUILabel * _subtitleLabel;
    SearchUILabel * _titleLabel;
}

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUILabel *subtitleLabel;
@property (retain) SearchUILabel *titleLabel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (bool)highlightFrameMatchesHighlightView;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateImplicitVisibilityForWatchNowCardSection:(id)arg1 animated:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
