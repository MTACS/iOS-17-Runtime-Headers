
@interface VUIEpisodeDetailView : UIScrollView <VUILibraryEpisodeFrameViewDelegate> {
    UIFont * _contentDescriptionFont;
    VUIFocusableTextView * _contentDescriptionView;
    VUILabel * _dotSeparatorLabel;
    VUILabel * _episodeNumberLabel;
    VUILabel * _episodeTitleLabel;
    <VUIEpisodeDetailViewDelegate> * _episodeViewDelegate;
    VUILibraryEpisodeFrameView * _imageFrameView;
    VUIMediaTagsView * _mediaBadgeTagsView;
    VUIMediaItem * _mediaItem;
    VUILabel * _releaseDateLabel;
    VUILabel * _seasonNumberLabel;
}

@property (nonatomic, retain) UIFont *contentDescriptionFont;
@property (nonatomic, retain) VUIFocusableTextView *contentDescriptionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUILabel *dotSeparatorLabel;
@property (nonatomic, retain) VUILabel *episodeNumberLabel;
@property (nonatomic, retain) VUILabel *episodeTitleLabel;
@property (nonatomic) <VUIEpisodeDetailViewDelegate> *episodeViewDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUILibraryEpisodeFrameView *imageFrameView;
@property (nonatomic, retain) VUIMediaTagsView *mediaBadgeTagsView;
@property (nonatomic, retain) VUIMediaItem *mediaItem;
@property (nonatomic, retain) VUILabel *releaseDateLabel;
@property (nonatomic, retain) VUILabel *seasonNumberLabel;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_episodeFrameImageSizeForDetailView:(id)arg1 withViewSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)configureEpisodeDetailView:(id)arg1 withMedia:(id)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (void)_configureDotSeparator;
- (void)_configureViewElementsForAX;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;
- (double)_seasonMargin;
- (id)contentDescriptionFont;
- (id)contentDescriptionView;
- (void)didTapButtonForEpisodeFrameView:(id)arg1;
- (id)dotSeparatorLabel;
- (id)episodeNumberLabel;
- (id)episodeTitleLabel;
- (id)episodeViewDelegate;
- (id)imageFrameView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaBadgeTagsView;
- (id)mediaItem;
- (id)releaseDateLabel;
- (id)seasonNumberLabel;
- (void)setContentDescriptionFont:(id)arg1;
- (void)setContentDescriptionView:(id)arg1;
- (void)setDotSeparatorLabel:(id)arg1;
- (void)setEpisodeNumberLabel:(id)arg1;
- (void)setEpisodeTitleLabel:(id)arg1;
- (void)setEpisodeViewDelegate:(id)arg1;
- (void)setImageFrameView:(id)arg1;
- (void)setMediaBadgeTagsView:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setReleaseDateLabel:(id)arg1;
- (void)setSeasonNumberLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateProgress;

@end