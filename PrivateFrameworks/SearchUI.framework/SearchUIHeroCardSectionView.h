
@interface SearchUIHeroCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, TLKImageViewDelegate> {
    SearchUIImageView * _backgroundImageView;
    SearchUIFeatheredBlurView * _blurEffectView;
    SearchUIButtonItemStackView * _buttonItemStackView;
    NUIContainerStackView * _buttonStackView;
    NUIContainerStackView * _containerStackView;
    SFImage * _currentImage;
    NUIContainerStackView * _labelsStackView;
    UIVisualEffectView * _punchoutIndicatorBackgroundBlurView;
    SearchUIImageView * _punchoutIndicatorImageView;
    SearchUILabel * _subtitleLabel;
    NUIContainerStackView * _thumbnailAndLabelsStackView;
    SearchUIImageView * _thumbnailImageView;
    SearchUILabel * _titleLabel;
}

@property (retain) SearchUIImageView *backgroundImageView;
@property (retain) SearchUIFeatheredBlurView *blurEffectView;
@property (nonatomic, retain) SearchUIButtonItemStackView *buttonItemStackView;
@property (retain) NUIContainerStackView *buttonStackView;
@property (retain) NUIContainerStackView *containerStackView;
@property (retain) NUIContainerBoxView *contentView;
@property (retain) SFImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NUIContainerStackView *labelsStackView;
@property (retain) UIVisualEffectView *punchoutIndicatorBackgroundBlurView;
@property (retain) SearchUIImageView *punchoutIndicatorImageView;
@property (nonatomic, readonly) SFHeroCardSection *section;
@property (retain) SearchUILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (retain) NUIContainerStackView *thumbnailAndLabelsStackView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUILabel *titleLabel;

+ (int)defaultSeparatorStyleForRowModel:(id)arg1;
+ (bool)fillsBackgroundWithContentForRowModel:(id)arg1;
+ (bool)showsBackgroundImageViewForRowModel:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)blurEffectView;
- (id)buttonItemStackView;
- (void)buttonPressed:(id)arg1;
- (id)buttonStackView;
- (id)containerStackView;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)currentImage;
- (void)didFailToLoadImage;
- (void)didUpdateWithImage:(id)arg1;
- (bool)hasBackground;
- (id)highlightReferenceView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)labelsStackView;
- (void)layoutSubviews;
- (id)punchoutIndicatorBackgroundBlurView;
- (id)punchoutIndicatorImageView;
- (void)setBackgroundImageView:(id)arg1;
- (void)setBlurEffectView:(id)arg1;
- (void)setButtonItemStackView:(id)arg1;
- (void)setButtonStackView:(id)arg1;
- (void)setContainerStackView:(id)arg1;
- (void)setCurrentImage:(id)arg1;
- (void)setLabelsStackView:(id)arg1;
- (void)setPunchoutIndicatorBackgroundBlurView:(id)arg1;
- (void)setPunchoutIndicatorImageView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setThumbnailAndLabelsStackView:(id)arg1;
- (void)setThumbnailImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (bool)showBackgroundImageView;
- (void)showGradientAnimated:(bool)arg1;
- (id)subtitleLabel;
- (id)thumbnailAndLabelsStackView;
- (id)thumbnailImageView;
- (id)titleLabel;
- (void)updateButtonsForCardSection:(id)arg1;
- (void)updatePunchoutIconForRowModel:(id)arg1;
- (void)updatePunchoutImageWithBundleIdentifier:(id)arg1;
- (void)updateWithButtonViews:(id)arg1 visible:(bool)arg2 addBackground:(bool)arg3 animate:(bool)arg4;
- (void)updateWithPunchoutImage:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end
