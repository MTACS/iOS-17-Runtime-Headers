
@interface TPKContentView : TPKBaseContentView {
    void displayBottomSeparator;
    void imageProxy;
    void preferredTraitCollection;
}

@property (nonatomic, retain) UITraitCollection *_preferredTraitCollection;
@property (nonatomic) bool displaysBottomSeparator;
@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic, retain) UIColor *preferredActionTintColor;
@property (nonatomic, retain) UIColor *preferredIconImageTintColor;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredMicaLayerSize;
@property (nonatomic, retain) UIVisualEffect *visualEffect;

+ (id)SiriIconWithTraitCollection:(id)arg1;
+ (id)TipsIconWithTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })defaultMicaSize;

- (void).cxx_destruct;
- (id)_preferredTraitCollection;
- (void)bottomSeperatorNeedsUpdate;
- (id)createHostingView;
- (bool)displaysBottomSeparator;
- (id)iconImageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 content:(id)arg2;
- (id)initWithReusableTipView:(id)arg1;
- (void)monitorDeviceOrientationChanges;
- (id)preferredActionTintColor;
- (id)preferredIconImageTintColor;
- (struct CGSize { double x1; double x2; })preferredMicaLayerSize;
- (void)setDisplaysBottomSeparator:(bool)arg1;
- (void)setPreferredActionTintColor:(id)arg1;
- (void)setPreferredIconImageTintColor:(id)arg1;
- (void)setPreferredMicaLayerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisualEffect:(id)arg1;
- (void)set_preferredTraitCollection:(id)arg1;
- (void)setupHostingViewWithController:(id)arg1 content:(id)arg2;
- (void)updateDisplaysBottomSeparator:(bool)arg1;
- (void)updatePreferredTraitCollection:(id)arg1;
- (id)visualEffect;
- (void)willMoveToWindow:(id)arg1;

@end
