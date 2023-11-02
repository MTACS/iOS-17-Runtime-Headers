
@interface PIParallaxColorPalette : NSObject {
    NSArray * _primaryColors;
    NSArray * _secondaryColors;
    NSIndexSet * _suggestionIndices;
}

@property (nonatomic, readonly, copy) NSArray *primaryColors;
@property (nonatomic, readonly, copy) NSArray *secondaryColors;
@property (nonatomic, readonly, copy) NSIndexSet *suggestionIndices;

+ (id)_loadColorsFromValues:(id)arg1 mode:(id)arg2 space:(id)arg3 error:(out id*)arg4;
+ (id)_paletteWithConfigurationDictionary:(id)arg1 error:(out id*)arg2;
+ (id)_serializeColors:(id)arg1 mode:(id)arg2;
+ (id)colorBGPalette;
+ (id)colorWashDuotonePalette;
+ (id)colorWashSinglePalette;
+ (id)customPalette;
+ (id)greenScreenMutedPalette;
+ (id)greenScreenVibrantPalette;
+ (id)loadPaletteFromURL:(id)arg1 error:(out id*)arg2;
+ (id)loadPaletteWithName:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_lookupColor:(id)arg1 withPredicate:(id /* block */)arg2;
- (unsigned long long)indexOfColor:(id)arg1;
- (id)initWithColors:(id)arg1;
- (id)initWithPrimaryColors:(id)arg1 secondaryColors:(id)arg2;
- (id)initWithPrimaryColors:(id)arg1 secondaryColors:(id)arg2 suggestionIndices:(id)arg3;
- (id)paletteColorForColor:(id)arg1;
- (id)primaryColors;
- (id)secondaryColors;
- (id)suggestionAtIndex:(unsigned long long)arg1;
- (id)suggestionForColor:(id)arg1;
- (id)suggestionIndices;
- (bool)writeToURL:(id)arg1 mode:(id)arg2 space:(id)arg3 error:(out id*)arg4;

@end
