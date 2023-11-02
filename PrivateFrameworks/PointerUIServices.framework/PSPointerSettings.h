
@interface PSPointerSettings : PTSettings {
    double  _materialAlphaDot;
    double  _materialAlphaIBeam;
    double  _materialAlphaSmallItemDark;
    double  _materialAlphaSmallItemDarkHighContrast;
    double  _materialAlphaSmallItemLight;
}

@property (nonatomic) double materialAlphaDot;
@property (nonatomic) double materialAlphaIBeam;
@property (nonatomic) double materialAlphaSmallItemDark;
@property (nonatomic) double materialAlphaSmallItemDarkHighContrast;
@property (nonatomic) double materialAlphaSmallItemLight;

+ (id)settingsControllerModule;

- (double)materialAlphaDot;
- (double)materialAlphaIBeam;
- (double)materialAlphaSmallItemDark;
- (double)materialAlphaSmallItemDarkHighContrast;
- (double)materialAlphaSmallItemLight;
- (void)setDefaultValues;
- (void)setMaterialAlphaDot:(double)arg1;
- (void)setMaterialAlphaIBeam:(double)arg1;
- (void)setMaterialAlphaSmallItemDark:(double)arg1;
- (void)setMaterialAlphaSmallItemDarkHighContrast:(double)arg1;
- (void)setMaterialAlphaSmallItemLight:(double)arg1;

@end
