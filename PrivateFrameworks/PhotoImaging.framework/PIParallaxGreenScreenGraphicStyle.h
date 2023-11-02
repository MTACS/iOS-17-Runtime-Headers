
@interface PIParallaxGreenScreenGraphicStyle : PIParallaxStyle <PIParallaxColorParameterStyle> {
    PFParallaxColor * _color;
}

@property (nonatomic, retain) PFParallaxColor *color;

+ (id)styleWithColorAnalysis:(id)arg1;
+ (id)styleWithParameters:(id)arg1 colorSuggestions:(id)arg2;

- (void).cxx_destruct;
- (id)color;
- (bool)configureForCategory:(id)arg1;
- (id)defaultDominantColorWithAnalysis:(id)arg1;
- (bool)hasColorParameter;
- (id)initWithColor:(id)arg1 clockColor:(id)arg2 colorSuggestions:(id)arg3;
- (id)kind;
- (id)parameters;
- (id)recipeIdentifier;
- (void)setColor:(id)arg1;

@end
