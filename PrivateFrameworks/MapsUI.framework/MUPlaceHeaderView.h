
@interface MUPlaceHeaderView : UIView <MUActivityObserving> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    UILabel * _contactAddressDescription;
    MULinkView * _containmentLabel;
    MUPlaceCoverPhotoOptions * _coverPhotoOptions;
    MUPlaceCoverPhotoTransitionController * _coverPhotoTransitionController;
    <MUPlaceHeaderViewDelegate> * _delegate;
    struct MUPlaceHeaderMetrics { 
        double topToTitleSpacing; 
        struct MUPlaceCoverPhotoMetrics { 
            double aspectRatio; 
            bool hasLogo; 
            struct CGSize { 
                double width; 
                double height; 
            } logoSize; 
            double coverPhotoBottomToLogoBottomSpacing; 
            double coverPhotoContainerToTitleSpacing; 
            double startingLogoAlphaTransitionValue; 
            double endingLogoAlphaTransitionValue; 
        } coverPhotoMetrics; 
    }  _headerMetrics;
    MUImageView * _heroImageView;
    UILabel * _secondaryTitleLabel;
    MUCardButton * _shareButton;
    MUStackLayout * _stackLayout;
    bool  _suppressContainmentTap;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleTrailingConstraint;
    UILayoutGuide * _topToTitleLayoutGuide;
    id /* block */  _trailingConstraintProvider;
    MKTransitInfoLabelView * _transitInfoLabelView;
    UIView * _verifiedBusinessContainerView;
    MUImageView * _verifiedBusinessCoverPhotoImageView;
    NSLayoutConstraint * _verifiedBusinessHeaderHeightConstraint;
    MUVerifiedLogoImageView * _verifiedBusinessLogoImageView;
    UILabel * _verifiedLabel;
    <MUPlaceHeaderViewModel> * _viewModel;
}

@property (nonatomic, readonly) MUPlaceCoverPhotoOptions *coverPhotoOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlaceHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldBlurChromeHeaderButtons;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressContainmentTap;
@property (nonatomic, readonly) UILayoutGuide *titleLabelToTopLayoutGuide;
@property (nonatomic) double verifiedBusinessHeaderAlpha;
@property (nonatomic) double verifiedBusinessHeaderHeight;
@property (nonatomic, readonly) UIView *viewForContainmentString;
@property (nonatomic, retain) <MUPlaceHeaderViewModel> *viewModel;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_shareButtonPressed;
- (void)_tappedEnclosingPlace;
- (double)_trailingPadding;
- (void)_updateAppearance;
- (void)_updateContainmentLineWithAttributedString;
- (void)_updateCoverPhoto;
- (void)_updateWithTransitionController:(id)arg1;
- (id)_verifiedAttributedString;
- (void)beginAnimatingActivityIndicator;
- (id)coverPhotoOptions;
- (id)delegate;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (void)hideTitle:(bool)arg1;
- (id)initWithViewModel:(id)arg1 coverPhotoOptions:(id)arg2 trailingConstraintProvider:(id /* block */)arg3;
- (id)initWithViewModel:(id)arg1 trailingConstraintProvider:(id /* block */)arg2;
- (void)layoutSubviews;
- (void)reloadTrailingConstraint;
- (void)setDelegate:(id)arg1;
- (void)setSuppressContainmentTap:(bool)arg1;
- (void)setVerifiedBusinessHeaderAlpha:(double)arg1;
- (void)setVerifiedBusinessHeaderExpansionProgress:(double)arg1;
- (void)setVerifiedBusinessHeaderHeight:(double)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldBlurChromeHeaderButtons;
- (bool)suppressContainmentTap;
- (id)titleLabelToTopLayoutGuide;
- (double)verifiedBusinessHeaderAlpha;
- (double)verifiedBusinessHeaderHeight;
- (id)viewForContainmentString;
- (id)viewModel;

@end
