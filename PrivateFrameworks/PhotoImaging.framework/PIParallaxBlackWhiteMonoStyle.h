
@interface PIParallaxBlackWhiteMonoStyle : PIParallaxStyle <PIParallaxHeadroomLookStyle> {
    long long  headroomLook;
}

@property (nonatomic) long long headroomLook;

+ (id)styleWithColorAnalysis:(id)arg1;
+ (id)styleWithParameters:(id)arg1 colorSuggestions:(id)arg2;

- (bool)configureForCategory:(id)arg1;
- (id)defaultDominantColorWithAnalysis:(id)arg1;
- (bool)hasHeadroomLook;
- (long long)headroomLook;
- (id)kind;
- (id)parameters;
- (id)recipeIdentifier;
- (void)setHeadroomLook:(long long)arg1;

@end
