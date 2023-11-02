
@interface AVPresentationContainerViewLayer : CALayer {
    AVPresentationContainerViewAppearanceProxy * _appearanceProxy;
    bool  _wantsAppearanceConfigValues;
}

@property (nonatomic, readonly) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) bool wantsAppearanceConfigValues;

- (void).cxx_destruct;
- (id)appearanceProxy;
- (id)cornerCurve;
- (double)cornerRadius;
- (unsigned long long)maskedCorners;
- (bool)masksToBounds;
- (void)setCornerCurve:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setMasksToBounds:(bool)arg1;
- (void)setWantsAppearanceConfigValues:(bool)arg1;
- (bool)wantsAppearanceConfigValues;

@end
