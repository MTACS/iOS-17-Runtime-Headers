
@interface BPSIllustratedWatchView : UIView <BPSWatchViewProtocol> {
    bool  _allowScaling;
    NSLayoutConstraint * _centeredSubviewCenterXConstraint;
    NSValue * _preferredCGSizeValue;
    double  _scaledDownFactor;
    double  _scaledDownXDelta;
    double  _scaledDownYDelta;
    NSString * _screenImageName;
    NSString * _screenImageSearchBundleIdentifier;
    unsigned long long  _screenImageSize;
    bool  _usingAgaveWatchAsset;
    bool  _usingCompactWatchAsset;
    UIImageView * _watchScreenImageView;
    UIImageView * _watchView;
}

@property (nonatomic) bool allowScaling;
@property (nonatomic, retain) NSLayoutConstraint *centeredSubviewCenterXConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSValue *preferredCGSizeValue;
@property (nonatomic) double scaledDownFactor;
@property (nonatomic) double scaledDownXDelta;
@property (nonatomic) double scaledDownYDelta;
@property (nonatomic, copy) NSString *screenImageName;
@property (nonatomic, retain) NSString *screenImageSearchBundleIdentifier;
@property (nonatomic) unsigned long long screenImageSize;
@property (readonly) Class superclass;
@property (nonatomic) bool usingAgaveWatchAsset;
@property (nonatomic) bool usingCompactWatchAsset;
@property (nonatomic, retain) UIImageView *watchScreenImageView;
@property (nonatomic, retain) UIImageView *watchView;

- (void).cxx_destruct;
- (void)_configureWatchImage;
- (bool)_shouldUseCompactWatchAsset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unscaledWatchScreenInsetGuide;
- (void)_updateCenteredSubviewConstraints;
- (void)addSyncTrapProgressView:(id)arg1;
- (bool)allowScaling;
- (id)centeredSubviewCenterXConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredCGSizeValue;
- (double)scaledDownFactor;
- (double)scaledDownXDelta;
- (double)scaledDownYDelta;
- (id)screenImageName;
- (id)screenImageSearchBundleIdentifier;
- (unsigned long long)screenImageSize;
- (void)setAllowScaling:(bool)arg1;
- (void)setCenteredSubviewCenterXConstraint:(id)arg1;
- (void)setPreferredCGSizeValue:(id)arg1;
- (void)setScaledDownFactor:(double)arg1;
- (void)setScaledDownXDelta:(double)arg1;
- (void)setScaledDownYDelta:(double)arg1;
- (void)setScreenImageName:(id)arg1;
- (void)setScreenImageSearchBundleIdentifier:(id)arg1;
- (void)setScreenImageSize:(unsigned long long)arg1;
- (void)setUsingAgaveWatchAsset:(bool)arg1;
- (void)setUsingCompactWatchAsset:(bool)arg1;
- (void)setWatchScreenImageView:(id)arg1;
- (void)setWatchView:(id)arg1;
- (void)textSizeDidChange:(id)arg1;
- (bool)usingAgaveWatchAsset;
- (bool)usingCompactWatchAsset;
- (id)watchAssetBundle;
- (id)watchScreenImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })watchScreenInsetGuide;
- (id)watchView;

@end
