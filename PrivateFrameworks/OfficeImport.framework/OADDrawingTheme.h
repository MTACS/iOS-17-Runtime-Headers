
@interface OADDrawingTheme : NSObject {
    OADColorContext * mColorContext;
    OADFontScheme * mFontScheme;
    OADStyleMatrix * mStyleMatrix;
}

@property (nonatomic, readonly) OADColorContext *colorContext;
@property (nonatomic, readonly) OADColorMap *colorMap;
@property (nonatomic, readonly) <OADColorPalette> *colorPalette;
@property (nonatomic, readonly) OADColorScheme *colorScheme;
@property (nonatomic, readonly) OADFontScheme *fontScheme;
@property (nonatomic, readonly) OADStyleMatrix *styleMatrix;

- (void).cxx_destruct;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)colorContext;
- (id)colorMap;
- (id)colorPalette;
- (id)colorScheme;
- (id)description;
- (id)fontScheme;
- (unsigned long long)hash;
- (id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)styleMatrix;

@end
