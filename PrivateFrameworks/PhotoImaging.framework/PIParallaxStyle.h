
@interface PIParallaxStyle : NSObject {
    PFParallaxColor * _clockColor;
    double  _clockVibrancy;
    NSArray * _colorSuggestions;
}

@property (nonatomic, retain) PFParallaxColor *clockColor;
@property (nonatomic, readonly, copy) NSString *clockFont;
@property (nonatomic, readonly) double clockVibrancy;
@property (nonatomic, retain) NSArray *colorSuggestions;
@property (nonatomic, readonly) bool hasBackgroundParameter;
@property (nonatomic, readonly) bool hasColorParameter;
@property (nonatomic, readonly) bool hasHeadroomLook;
@property (nonatomic, readonly) bool hasTonalityMode;
@property (nonatomic, readonly, copy) NSString *inactiveRecipeIdentifier;
@property (nonatomic, readonly) bool isSegmented;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) PIParallaxStyleRecipe *recipe;
@property (nonatomic, readonly, copy) NSString *recipeIdentifier;

+ (id)_filterForRecipeIdentifier:(id)arg1;
+ (id)colorPaletteWithStyleKind:(id)arg1;
+ (id)defaultOriginalStyle;
+ (id)defaultStyleForKind:(id)arg1 colorAnalysis:(id)arg2;
+ (id)styleWithBakedStyle:(id)arg1;
+ (id)styleWithColorAnalysis:(id)arg1;
+ (id)styleWithParameters:(id)arg1 colorSuggestions:(id)arg2;

- (void).cxx_destruct;
- (id)bakedStyle;
- (id)clockColor;
- (id)clockFont;
- (double)clockVibrancy;
- (id)colorSuggestionForCategory:(id)arg1;
- (id)colorSuggestions;
- (bool)configureForCategory:(id)arg1;
- (id)defaultDominantColorWithAnalysis:(id)arg1;
- (id)description;
- (id)filter;
- (bool)hasBackgroundParameter;
- (bool)hasColorParameter;
- (bool)hasHeadroomLook;
- (bool)hasTonalityMode;
- (unsigned long long)hash;
- (id)inactiveFilter;
- (id)inactiveRecipeIdentifier;
- (id)init;
- (id)initWithClockColor:(id)arg1 colorSuggestions:(id)arg2;
- (id)initWithClockColor:(id)arg1 vibrancy:(double)arg2 colorSuggestions:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isSegmented;
- (id)kind;
- (id)parameters;
- (id)recipe;
- (id)recipeIdentifier;
- (void)setClockColor:(id)arg1;
- (void)setColorSuggestions:(id)arg1;

@end
