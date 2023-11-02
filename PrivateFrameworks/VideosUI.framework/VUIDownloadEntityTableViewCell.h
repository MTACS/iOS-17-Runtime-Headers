
@interface VUIDownloadEntityTableViewCell : UITableViewCell <VUIDownloadEntityDelegate, VUIRentalExpirationLabelDelegate> {
    VUISeparatorView * _bottomSeparatorView;
    <VUIDownloadEntityTableViewCellDelegate> * _delegate;
    VUILabel * _dotSeparatorLabel;
    VUIDownloadButton * _downloadButton;
    VUIDownloadEntity * _downloadEntity;
    VUILibraryEpisodeFrameView * _episodeImageView;
    VUILabel * _metaDataHeaderFirstLabel;
    VUILabel * _metaDataHeaderSecondLabel;
    VUIImageView * _posterImageView;
    unsigned long long  _previousDownloadState;
    VUIVideosImageView * _rightImageView;
    VUILabel * _titleLabel;
    VUISeparatorView * _topSeparatorView;
}

@property (nonatomic, retain) VUISeparatorView *bottomSeparatorView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIDownloadEntityTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUILabel *dotSeparatorLabel;
@property (nonatomic, retain) VUIDownloadButton *downloadButton;
@property (nonatomic, retain) VUIDownloadEntity *downloadEntity;
@property (nonatomic, retain) VUILibraryEpisodeFrameView *episodeImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUILabel *metaDataHeaderFirstLabel;
@property (nonatomic, retain) VUILabel *metaDataHeaderSecondLabel;
@property (nonatomic, retain) VUIImageView *posterImageView;
@property (nonatomic) unsigned long long previousDownloadState;
@property (nonatomic, retain) VUIVideosImageView *rightImageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) VUISeparatorView *topSeparatorView;

+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1;
+ (void)configureVUIDownloadEntityTableViewCell:(id)arg1 withDownloadEntity:(id)arg2 forMetrics:(bool)arg3;

- (void).cxx_destruct;
- (void)_addDownloadButtonIfRequired:(id)arg1;
- (void)_addMetaDataLabelsIfRequired:(id)arg1;
- (void)_configureViewElementsForAX;
- (id)_episodePlaceholderImage;
- (double)_imageHeightForCurrentSizeClass;
- (struct CGSize { double x1; double x2; })_layoutForCategoryAccessibility:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutForCompact:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (void)_removeDownloadButtonIfRequired;
- (double)_verticalPaddingForCurrentSizeClass;
- (id)bottomSeparatorView;
- (id)delegate;
- (id)dotSeparatorLabel;
- (id)downloadButton;
- (id)downloadEntity;
- (void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2;
- (void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2;
- (id)episodeImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)metaDataHeaderFirstLabel;
- (id)metaDataHeaderSecondLabel;
- (id)posterImageView;
- (void)prepareForReuse;
- (unsigned long long)previousDownloadState;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (id)rightImageView;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDotSeparatorLabel:(id)arg1;
- (void)setDownloadButton:(id)arg1;
- (void)setDownloadEntity:(id)arg1;
- (void)setEpisodeImageView:(id)arg1;
- (void)setMetaDataHeaderFirstLabel:(id)arg1;
- (void)setMetaDataHeaderSecondLabel:(id)arg1;
- (void)setPosterImageView:(id)arg1;
- (void)setPreviousDownloadState:(unsigned long long)arg1;
- (void)setRightImageView:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTitleLabel:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)topSeparatorView;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
