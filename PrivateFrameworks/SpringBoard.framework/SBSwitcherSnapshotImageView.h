
@interface SBSwitcherSnapshotImageView : UIView <SBReusableView> {
    bool  _allowStatusBarToOverlap;
    bool  _allowsEdgeAntialiasing;
    double  _cornerRadius;
    bool  _hasOpaqueContents;
    UIImageView * _imageView;
    unsigned long long  _maskedCorners;
    long long  _orientationForClassicLayout;
    UIView * _scalingView;
    bool  _stretchToFillBounds;
    bool  _usesNonuniformScaling;
}

@property (nonatomic) bool allowStatusBarToOverlap;
@property (nonatomic) bool allowsEdgeAntialiasing;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasOpaqueContents;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientationForClassicLayout;
@property (nonatomic) bool stretchToFillBounds;
@property (readonly) Class superclass;
@property (nonatomic) bool usesNonuniformScaling;

- (void).cxx_destruct;
- (bool)_isUsingExternalClassicLayout;
- (double)_transformHorizontalScale;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (void)_updateCornerRadius;
- (bool)allowStatusBarToOverlap;
- (bool)allowsEdgeAntialiasing;
- (double)cornerRadius;
- (bool)hasOpaqueContents;
- (id)image;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)maskedCorners;
- (long long)orientationForClassicLayout;
- (void)prepareForReuse;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })scalingTransform;
- (void)setAllowStatusBarToOverlap:(bool)arg1;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHasOpaqueContents:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setOrientationForClassicLayout:(long long)arg1;
- (void)setStretchToFillBounds:(bool)arg1;
- (void)setUsesNonuniformScaling:(bool)arg1;
- (bool)stretchToFillBounds;
- (bool)usesNonuniformScaling;

@end
