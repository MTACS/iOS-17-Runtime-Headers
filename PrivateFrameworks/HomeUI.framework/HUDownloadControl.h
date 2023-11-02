
@interface HUDownloadControl : UIControl {
    bool  _allowsAddImage;
    UIView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _controlImageEdgeInsets;
    UIImageView * _controlImageView;
    struct HUDownloadControlStatus { 
        long long statusType; 
        double downloadProgress; 
    }  _controlStatus;
    long long  _controlStatusRevision;
    NSMutableDictionary * _controlStatusTypeToTitle;
    UILabel * _controlTitleLabel;
    long long  _displayStyle;
    HUDownloadProgressView * _downloadProgressView;
    UIColor * _filledTintColor;
    bool  _hadFirstTouchHighlight;
    double  _minTitleLength;
    bool  _scaleImageForAccessibility;
    bool  _showStopImageWhenDownloading;
    bool  _traitCollectionDidChangeWasCalled;
    UIView * _transientContentView;
    long long  _transientContentViewTransactionCount;
}

@property (nonatomic) bool allowsAddImage;
@property (nonatomic) struct HUDownloadControlStatus { long long x1; double x2; } controlStatus;
@property (nonatomic) long long displayStyle;
@property (nonatomic, retain) UIColor *filledTintColor;
@property (nonatomic) double minTitleLength;
@property (nonatomic) bool scaleImageForAccessibility;
@property (nonatomic) bool showStopImageWhenDownloading;

+ (struct CGSize { double x1; double x2; })_expectedSizeForControlStatusType:(long long)arg1 controlTitle:(id)arg2 hasControlImage:(bool)arg3 displayScale:(double)arg4 preferredHeight:(double)arg5 minTitleLength:(double)arg6;
+ (id)_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)_newControlTitleLabel;
+ (id)controlTitleFontForControlStatusType:(long long)arg1;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_beginTransientContentViewTransaction;
- (id)_currentContentSuperview;
- (void)_endTransientContentViewTransaction;
- (void)_removeAllAnimations:(bool)arg1;
- (void)_updateBackgroundViewCornerRadius;
- (void)_updateControlImageViewAnimation;
- (void)_updateControlStatusProperties;
- (void)_updateControlTitleLabelVisualProperties;
- (bool)allowsAddImage;
- (struct HUDownloadControlStatus { long long x1; double x2; })controlStatus;
- (void)dealloc;
- (void)didMoveToWindow;
- (long long)displayStyle;
- (id)filledTintColor;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maximumSizeWithPreferredHeight:(double)arg1;
- (double)minTitleLength;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)scaleImageForAccessibility;
- (void)setAllowsAddImage:(bool)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setControlStatus:(struct HUDownloadControlStatus { long long x1; double x2; })arg1;
- (void)setControlStatus:(struct HUDownloadControlStatus { long long x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDisplayStyle:(long long)arg1;
- (void)setFilledTintColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMinTitleLength:(double)arg1;
- (void)setScaleImageForAccessibility:(bool)arg1;
- (void)setShowStopImageWhenDownloading:(bool)arg1;
- (void)setTitle:(id)arg1 forControlStatusType:(long long)arg2;
- (bool)showStopImageWhenDownloading;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)titleForControlStatusType:(long long)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
