
@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette> {
    NTKOlympusColorPalette * _olympusPalette;
    NTKOlympusColorPalette * _tritiumPalette;
}

@property (nonatomic, readonly) UIColor *analogDotColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMulticolor;
@property (nonatomic, readonly) UIColor *numbersColor;
@property (nonatomic, retain) NTKOlympusColorPalette *olympusPalette;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKOlympusColorPalette *tritiumPalette;

- (void).cxx_destruct;
- (id)_softBlackColor;
- (id)analogDotColor;
- (id)backgroundColor;
- (id)dotMarkerAlpha;
- (id)dotMarkerColorAtIndex:(id)arg1;
- (bool)hasWhiteElements;
- (id)initWithOlympusColorPalette:(id)arg1;
- (id)initWithOlympusColorPalette:(id)arg1 alternatePalette:(id)arg2;
- (bool)isMulticolor;
- (id)logo;
- (id)logoColor;
- (id)numberColorAtIndex:(id)arg1;
- (id)numbersColor;
- (id)olympusPalette;
- (void)setOlympusPalette:(id)arg1;
- (void)setTritiumPalette:(id)arg1;
- (double)smallDotsColorBrightness;
- (double)smallNumbersColorBrightness;
- (id)tritiumBackgroundColor;
- (id)tritiumLargeNumbers;
- (id)tritiumLargeNumbersOutline;
- (id)tritiumNumbersColorAtIndex:(id)arg1;
- (id)tritiumOutlineNumbers;
- (id)tritiumOutlineNumbersColorAtIndex:(id)arg1;
- (id)tritiumPalette;
- (id)tritiumSmallNumbers;

@end
