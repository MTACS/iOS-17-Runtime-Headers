
@interface SBSystemNotesAppearanceSettings : PTSettings {
    double  _platterTintAlpha;
    double  _platterTintBlue;
    double  _platterTintGreen;
    double  _platterTintRed;
}

@property (nonatomic) double platterTintAlpha;
@property (nonatomic) double platterTintBlue;
@property (nonatomic) double platterTintGreen;
@property (nonatomic) double platterTintRed;

+ (id)settingsControllerModule;

- (double)platterTintAlpha;
- (double)platterTintBlue;
- (double)platterTintGreen;
- (double)platterTintRed;
- (void)setDefaultValues;
- (void)setPlatterTintAlpha:(double)arg1;
- (void)setPlatterTintBlue:(double)arg1;
- (void)setPlatterTintGreen:(double)arg1;
- (void)setPlatterTintRed:(double)arg1;

@end
