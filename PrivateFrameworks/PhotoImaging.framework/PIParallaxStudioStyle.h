
@interface PIParallaxStudioStyle : PIParallaxStyle <PIParallaxTonalityModeStyle> {
    long long  tonality;
}

@property (nonatomic) long long tonality;

+ (id)styleWithColorAnalysis:(id)arg1;
+ (id)styleWithParameters:(id)arg1 colorSuggestions:(id)arg2;

- (bool)configureForCategory:(id)arg1;
- (bool)hasTonalityMode;
- (id)kind;
- (id)parameters;
- (id)recipeIdentifier;
- (void)setTonality:(long long)arg1;
- (long long)tonality;

@end
