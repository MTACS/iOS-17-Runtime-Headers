
@interface CSUserPictureView : CSCoverSheetViewBase <SBUILegibility> {
    CNContact * _contact;
    double  _diameter;
    _UILegibilitySettings * _legibilitySettings;
    double  _legibilityStrength;
    _UILegibilityView * _monogramLegibilityView;
}

@property (nonatomic, copy) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double diameter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;

- (void).cxx_destruct;
- (void)_regenerateImage;
- (id)contact;
- (double)diameter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)presentationRegions;
- (void)setContact:(id)arg1;
- (void)setDiameter:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (double)strength;

@end
