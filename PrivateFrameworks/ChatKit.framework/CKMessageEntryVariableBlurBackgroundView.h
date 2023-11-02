
@interface CKMessageEntryVariableBlurBackgroundView : UIView <CKMessageEntryBackgroundViewProtocol> {
    NSString * _backdropGroupName;
    UITraitCollection * _entryViewTraitCollection;
    long long  _style;
    UIImageView * _variableBlurColorOverlayView;
    UIVisualEffectView * _variableBlurEffectView;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITraitCollection *entryViewTraitCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *variableBlurColorOverlayView;
@property (nonatomic, retain) UIVisualEffectView *variableBlurEffectView;

+ (id)createVerticalGradientImageWithHeight:(double)arg1 scale:(double)arg2 bottomSolidAreaHeight:(double)arg3 gradientLocationPoints:(id)arg4 gradientAlphaValues:(id)arg5 color:(id)arg6;

- (void).cxx_destruct;
- (void)_updateVariableBlurImage;
- (id)backdropGroupName;
- (id)entryViewTraitCollection;
- (id)init;
- (id)inputAccessoryViewBackdropColor;
- (id)inputAccessoryViewBackdropEffects;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)setBackdropGroupName:(id)arg1;
- (void)setEntryViewTraitCollection:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVariableBlurColorOverlayView:(id)arg1;
- (void)setVariableBlurEffectView:(id)arg1;
- (long long)style;
- (id)variableBlurColorOverlayView;
- (id)variableBlurEffectView;

@end
