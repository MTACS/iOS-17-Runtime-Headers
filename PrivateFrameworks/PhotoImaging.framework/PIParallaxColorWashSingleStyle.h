
@interface PIParallaxColorWashSingleStyle : PIParallaxStyle <PIParallaxBackgroundParameterStyle, PIParallaxColorParameterStyle> {
    PFParallaxColor * _color;
    bool  _showsBackground;
}

@property (nonatomic, retain) PFParallaxColor *color;
@property (nonatomic) bool showsBackground;

+ (id)styleWithColorAnalysis:(id)arg1;
+ (id)styleWithParameters:(id)arg1 colorSuggestions:(id)arg2;

- (void).cxx_destruct;
- (id)color;
- (bool)configureForCategory:(id)arg1;
- (id)defaultDominantColorWithAnalysis:(id)arg1;
- (bool)hasBackgroundParameter;
- (bool)hasColorParameter;
- (id)initWithColor:(id)arg1 background:(bool)arg2 clockColor:(id)arg3 suggestions:(id)arg4;
- (id)kind;
- (id)parameters;
- (id)recipeIdentifier;
- (void)setColor:(id)arg1;
- (void)setShowsBackground:(bool)arg1;
- (bool)showsBackground;

@end
