
@interface SearchUIVerticalLayoutCardSectionView : SearchUICardSectionView {
    SearchUILabel * _footnoteLabel;
    UIImageView * _gradientImageView;
    NUIContainerBoxView * _thumbnailOverlayContainer;
    SearchUIImageView * _thumbnailOverlayImageView;
    SearchUILabel * _thumbnailOverlayLabel;
    SearchUIImageView * _thumbnailView;
    SearchUILabel * _titleLabel;
    bool  _useAppIconMetrics;
}

@property (nonatomic, retain) NUIContainerStackView *contentView;
@property (nonatomic, retain) SearchUILabel *footnoteLabel;
@property (nonatomic, retain) UIImageView *gradientImageView;
@property (nonatomic, retain) SFVerticalLayoutCardSection *section;
@property (nonatomic, retain) NUIContainerBoxView *thumbnailOverlayContainer;
@property (nonatomic, retain) SearchUIImageView *thumbnailOverlayImageView;
@property (nonatomic, retain) SearchUILabel *thumbnailOverlayLabel;
@property (nonatomic, retain) SearchUIImageView *thumbnailView;
@property (nonatomic, retain) SearchUILabel *titleLabel;
@property (nonatomic) bool useAppIconMetrics;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (void)buildThumbnailOverlayContainerIfNecessary;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)didMoveToWindow;
- (id)footnoteLabel;
- (id)gradientImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightFrame;
- (id)highlightReferenceView;
- (void)setFootnoteLabel:(id)arg1;
- (void)setGradientImageView:(id)arg1;
- (void)setThumbnailOverlayContainer:(id)arg1;
- (void)setThumbnailOverlayImageView:(id)arg1;
- (void)setThumbnailOverlayLabel:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUseAppIconMetrics:(bool)arg1;
- (id)setupContentView;
- (id)thumbnailOverlayContainer;
- (id)thumbnailOverlayImageView;
- (id)thumbnailOverlayLabel;
- (id)thumbnailView;
- (id)titleLabel;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateThumbnailOverlayContainerWithText:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (bool)useAppIconMetrics;

@end
