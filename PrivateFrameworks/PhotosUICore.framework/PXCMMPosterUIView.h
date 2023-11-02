
@interface PXCMMPosterUIView : UIView {
    id /* block */  _actionButtonAction;
    long long  _actionButtonType;
    bool  _actionInProgress;
    UIActivityIndicatorView * _activityIndicatorView;
    NSString * _bannerHeadline;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _bannerHeadlineBoldRange;
    NSString * _bannerSubheadline;
    PXCMMPosterBannerView * _bannerView;
    double  _cornerRadius;
    unsigned long long  _cornersToRound;
    PXCMMPosterHeaderView * _headerView;
    bool  _needsBannerView;
    UIColor * _opaqueAncestorBackgroundColor;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    long long  _selectedCount;
    long long  _totalCount;
    PXUpdater * _updater;
}

@property (getter=isActionInProgress, nonatomic) bool actionInProgress;
@property (nonatomic, copy) NSString *bannerHeadline;
@property (nonatomic, copy) NSString *bannerSubheadline;
@property (nonatomic, readonly) PXCMMPosterBannerView *bannerView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long cornersToRound;
@property (nonatomic, copy) NSString *dateString;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic) bool needsBannerView;
@property (nonatomic, copy) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic) long long selectedCount;
@property (nonatomic, copy) NSString *statusString;
@property (nonatomic) long long totalCount;

- (void).cxx_destruct;
- (id)_fontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateBannerActionButton;
- (void)_updateBannerTitles;
- (void)_updateBannerView;
- (void)_updateCorners;
- (id)bannerHeadline;
- (id)bannerSubheadline;
- (id)bannerView;
- (double)cornerRadius;
- (unsigned long long)cornersToRound;
- (id)dateString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActionInProgress;
- (void)layoutSubviews;
- (id)locationString;
- (bool)needsBannerView;
- (id)opaqueAncestorBackgroundColor;
- (long long)selectedCount;
- (void)setActionButtonWithType:(long long)arg1 actionBlock:(id /* block */)arg2;
- (void)setActionInProgress:(bool)arg1;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)setBannerHeadline:(id)arg1;
- (void)setBannerHeadline:(id)arg1 boldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBannerSubheadline:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornersToRound:(unsigned long long)arg1;
- (void)setDateString:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setNeedsBannerView:(bool)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;
- (void)setSelectedCount:(long long)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTotalCount:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusString;
- (long long)totalCount;
- (void)willMoveToWindow:(id)arg1;

@end
