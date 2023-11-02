
@interface CSStatusTextView : UIView <SBUILegibility> {
    SBUILegibilityLabel * _deviceInformationLabel;
    NSArray * _deviceInformationText;
    NSString * _internalLegalText;
    SBUILegibilityLabel * _internalLegalTextLabel;
    _UILegibilitySettings * _legibilitySettings;
    SBUILegibilityLabel * _provisionalEnrollmentLabel;
    NSString * _provisionalEnrollmentText;
    double  _strength;
    SBUILegibilityLabel * _supervisionLabel;
    NSString * _supervisionText;
    unsigned long long  _transactionCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *deviceInformationText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *internalLegalText;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *provisionalEnrollmentText;
@property (nonatomic) double strength;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *supervisionText;

- (void).cxx_destruct;
- (id)_font;
- (id)_largeFont;
- (double)_lineHeightOfNonLegalLabels;
- (double)_nonLegalLabelFontLeading;
- (double)_nonLegalTextParagraphSpacing;
- (double)_spacingBetweenNonLegalLabels;
- (void)_updateDeviceInformationLabel;
- (void)_updateInternalLegalLabel;
- (void)_updateLegibilityStrength;
- (void)_updateProvisionalEnrollmentLabel;
- (void)_updateSupervisionLabel;
- (void)_updateTextViews;
- (void)_updateTextViewsIfNecessary;
- (id)deviceInformationText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)internalLegalText;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)provisionalEnrollmentText;
- (void)setDeviceInformationText:(id)arg1;
- (void)setInternalLegalText:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setProvisionalEnrollmentText:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setSupervisionText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;
- (id)supervisionText;
- (void)updateTextsWithBlock:(id /* block */)arg1;

@end
