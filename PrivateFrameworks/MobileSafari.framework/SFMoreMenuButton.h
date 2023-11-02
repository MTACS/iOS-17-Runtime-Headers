
@interface SFMoreMenuButton : _SFDimmingButton <SFDeferrableUpdateView> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    struct { 
        id foregroundNotificationObserver; 
        id backgroundNotificationObserver; 
        bool needsDeferredContentUpdate; 
        bool sceneIsForeground; 
    }  _deferrableUpdateViewState;
    double  _downloadProgress;
    bool  _iconFilled;
    bool  _isShowingArrowDown;
    double  _movedToWindowTime;
    long long  _progressStyle;
    UIColor * _progressTintColor;
    SFProgressView * _progressView;
    long long  _symbolScale;
    UIView * _viewPendingPulse;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) double downloadProgress;
@property (getter=isIconFilled, nonatomic) bool iconFilled;
@property (nonatomic) long long progressStyle;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic) long long symbolScale;

- (void).cxx_destruct;
- (double)_progressViewRadius;
- (double)_progressViewTrackWidth;
- (void)_setShowsProgressView:(bool)arg1;
- (bool)_shouldShowProgressView;
- (void)_updateContentsAnimated:(bool)arg1;
- (void)_updateImage;
- (void)_updateImageAllowingDissolve:(bool)arg1;
- (void)_updateProgressViewMetrics;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct { id x1; id x2; bool x3; bool x4; }*)deferrableUpdateViewState;
- (void)didMoveToWindow;
- (double)downloadProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isIconFilled;
- (void)layoutSubviews;
- (long long)progressStyle;
- (id)progressTintColor;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadProgress:(double)arg1 animated:(bool)arg2;
- (void)setIconFilled:(bool)arg1;
- (void)setNeedsPulseOnView:(id)arg1;
- (void)setProgressStyle:(long long)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSymbolScale:(long long)arg1;
- (long long)symbolScale;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContents;

@end
