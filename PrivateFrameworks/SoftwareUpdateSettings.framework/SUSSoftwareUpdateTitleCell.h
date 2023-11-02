
@interface SUSSoftwareUpdateTitleCell : PSTableCell <SUSSoftwareUpdateCellProtocol> {
    SUSSoftwareUpdateAnimatedIcon * _animatedGearView;
    bool  _animatingGearView;
    <SUSUISoftwareUpdateTitleCellDelegate> * _delegate;
    UIImageView * _imageView;
    UILabel * _learnMoreLabel;
    UIProgressView * _progressBar;
    int  _progressStyle;
    PSWebContainerView * _releaseNotesSummaryView;
    bool  _showLearnMoreButton;
    UIStackView * _stackView;
    UIImage * _updateIcon;
    NSArray * _updateIconContraints;
    NSMutableArray * _updateNameConstraints;
    UILabel * _updateNameLabel;
    NSMutableArray * _updatePublisherConstraints;
    UILabel * _updatePublisherLabel;
    UILabel * _updateStatusLabel;
    NSLayoutConstraint * _updateStatusLabelVerticalConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUSUISoftwareUpdateTitleCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImage *gearBackgroundImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *learnMoreLabel;
@property (nonatomic, readonly) UIProgressView *progressBar;
@property (nonatomic) int progressDisplayStyle;
@property (nonatomic, readonly) PSWebContainerView *releaseNotesSummaryView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *updateNameLabel;
@property (nonatomic, readonly) UILabel *updatePublisherLabel;
@property (nonatomic, readonly) UILabel *updateStatusLabel;
@property (nonatomic, retain) NSLayoutConstraint *updateStatusLabelVerticalConstraint;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)configureImageView;
- (void)configureProgressBar:(bool)arg1;
- (void)configurePublisherLabel:(bool)arg1;
- (void)configureReleaseNotesSummaryView:(bool)arg1;
- (id)configureUpdateIcon;
- (void)configureUpdateImageViewFromImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)configureUpdateNameLabel:(bool)arg1;
- (void)configureUpdateStatusLabel:(bool)arg1;
- (id)delegate;
- (id)detailTextLabel;
- (id)gearBackgroundImage;
- (void)handleLearnMoreTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 updateIcon:(id)arg4 showLearnMore:(bool)arg5 delegate:(id)arg6;
- (void)layoutSubviews;
- (id)learnMoreLabel;
- (id)newLearnMoreLabel;
- (id)newProgressBar;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)newUpdateStatusLabel;
- (double)preferredHeightWithTable:(id)arg1;
- (id)progressBar;
- (int)progressDisplayStyle;
- (id)releaseNotesSummaryView;
- (void)setAnimatingGearView:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLearnMoreText:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressDisplayStyle:(int)arg1;
- (void)setPublisherText:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setStatusMessage:(id)arg1 symbolizingError:(bool)arg2;
- (void)setUpdateIcon:(id)arg1;
- (void)setUpdateName:(id)arg1;
- (void)setUpdateStatusLabelVerticalConstraint:(id)arg1;
- (void)setupViews;
- (void)updateConstraints;
- (id)updateNameLabel;
- (void)updateProgressTintColor;
- (id)updatePublisherLabel;
- (id)updateStatusLabel;
- (id)updateStatusLabelVerticalConstraint;
- (void)updateStatusLabelVerticalConstraints;

@end
