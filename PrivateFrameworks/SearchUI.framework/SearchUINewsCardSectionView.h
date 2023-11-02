
@interface SearchUINewsCardSectionView : SearchUICardSectionView {
    NUIContainerBoxView * _baseBoxView;
    SearchUINewsCardGradientView * _gradientView;
    bool  _overlaysTextInImage;
    SearchUIImageView * _providerImageView;
    SearchUILabel * _providerLabel;
    SearchUILabel * _subtitleLabel;
    NUIContainerBoxView * _textContentBoxView;
    NUIContainerStackView * _textContentStackView;
    SearchUIImageView * _thumbnailImageView;
    SearchUILabel * _titleLabel;
}

@property (retain) NUIContainerBoxView *baseBoxView;
@property (retain) NUIContainerStackView *contentView;
@property (retain) SearchUINewsCardGradientView *gradientView;
@property bool overlaysTextInImage;
@property (retain) SearchUIImageView *providerImageView;
@property (retain) SearchUILabel *providerLabel;
@property (retain) SearchUILabel *subtitleLabel;
@property (retain) NUIContainerBoxView *textContentBoxView;
@property (retain) NUIContainerStackView *textContentStackView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUILabel *titleLabel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)baseBoxView;
- (void)didMoveToWindow;
- (id)gradientView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightFrame;
- (id)highlightReferenceView;
- (struct CGSize { double x1; double x2; })largeThumbnailSize;
- (double)minThumbnailBottomSpacing;
- (bool)overlaysTextInImage;
- (double)providerImageVerticalOffset;
- (double)providerImageVerticalSizeDelta;
- (id)providerImageView;
- (id)providerLabel;
- (void)setBaseBoxView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setOverlaysTextInImage:(bool)arg1;
- (void)setProviderImageView:(id)arg1;
- (void)setProviderLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTextContentBoxView:(id)arg1;
- (void)setTextContentStackView:(id)arg1;
- (void)setThumbnailImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (struct CGSize { double x1; double x2; })smallThumbnailSize;
- (double)stackViewVerticalSpacing;
- (id)subtitleLabel;
- (id)textContentBoxView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContentInset;
- (id)textContentStackView;
- (id)thumbnailImageView;
- (id)titleLabel;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutForCardSection:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end
