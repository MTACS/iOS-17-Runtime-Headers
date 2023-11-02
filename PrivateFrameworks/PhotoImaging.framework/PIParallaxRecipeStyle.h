
@interface PIParallaxRecipeStyle : PIParallaxStyle {
    NSString * _identifier;
    PIParallaxStyleRecipe * _recipe;
}

- (void).cxx_destruct;
- (id)clockFont;
- (id)description;
- (id)filter;
- (id)inactiveFilter;
- (id)initWithIdentifier:(id)arg1 recipe:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)parameters;
- (id)recipe;
- (id)recipeIdentifier;

@end
