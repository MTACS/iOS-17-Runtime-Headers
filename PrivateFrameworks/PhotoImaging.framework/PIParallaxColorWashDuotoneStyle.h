
@interface PIParallaxColorWashDuotoneStyle : PIParallaxStyle <PIParallaxBackgroundParameterStyle, PIParallaxColorParameterStyle> {
    PFParallaxColor * _primaryColor;
    PFParallaxColor * _secondaryColor;
    bool  _showsBackground;
}

@property (nonatomic, retain) PFParallaxColor *color;
@property (nonatomic, retain) PFParallaxColor *primaryColor;
@property (nonatomic, retain) PFParallaxColor *secondaryColor;
@property (nonatomic) bool showsBackground;

+ (id)styleWithColorAnalysis:(id)arg1;
+ (id)styleWithParameters:(id)arg1 colorSuggestions:(id)arg2;

- (void).cxx_destruct;
- (id)color;
- (bool)configureForCategory:(id)arg1;
- (id)defaultDominantColorWithAnalysis:(id)arg1;
- (bool)hasBackgroundParameter;
- (bool)hasColorParameter;
- (id)initWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 background:(bool)arg3 clockColor:(id)arg4 colorSuggestions:(id)arg5;
- (id)kind;
- (id)parameters;
- (id)primaryColor;
- (id)recipeIdentifier;
- (id)secondaryColor;
- (void)setColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setShowsBackground:(bool)arg1;
- (bool)showsBackground;

@end
