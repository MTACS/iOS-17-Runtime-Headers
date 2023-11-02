
@interface STSResultDetailView : UIView {
    UIVisualEffectView * _backgroundView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIView * _customContentView;
    <STSResultDetailViewDelegate> * _delegate;
    STSResultDetailFooter * _footer;
    bool  _isFullscreen;
    UIButton * _reportConcernButton;
    bool  _showReportConcern;
    UIImage * _thumbnail;
    STSAnimatedImageInfo * _thumbnailInfo;
    UIImageView * _thumbnailView;
    bool  _useBackgroundBlur;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIView *customContentView;
@property (nonatomic) <STSResultDetailViewDelegate> *delegate;
@property (nonatomic) bool isFullscreen;
@property (nonatomic, retain) UIImage *providerIcon;
@property (nonatomic) struct CGSize { double x1; double x2; } providerIconSize;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, retain) UIButton *reportConcernButton;
@property (nonatomic) bool showReportConcern;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly) STSAnimatedImageInfo *thumbnailInfo;
@property (nonatomic) bool useBackgroundBlur;

- (void).cxx_destruct;
- (void)_calculateFramesForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 traitCollection:(id)arg2 andSetFrames:(bool)arg3 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (void)_didTapProvider:(id)arg1;
- (void)_didTapReportConcern:(id)arg1;
- (void)_didTapSend:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 traitCollection:(id)arg2;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)customContentView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFullscreen;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (id)providerIcon;
- (struct CGSize { double x1; double x2; })providerIconSize;
- (id)providerName;
- (id)reportConcernButton;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCustomContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFullscreen:(bool)arg1;
- (void)setProviderIcon:(id)arg1;
- (void)setProviderIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProviderName:(id)arg1;
- (void)setReportConcernButton:(id)arg1;
- (void)setShowReportConcern:(bool)arg1;
- (void)setUseBackgroundBlur:(bool)arg1;
- (bool)showReportConcern;
- (id)thumbnail;
- (id)thumbnailInfo;
- (void)updateReportConcernButtonTitle;
- (void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2;
- (bool)useBackgroundBlur;

@end
