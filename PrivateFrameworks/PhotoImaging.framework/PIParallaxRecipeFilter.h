
@interface PIParallaxRecipeFilter : PIParallaxFilter {
    NSDictionary * _parameters;
    PIParallaxStyleRecipe * _recipe;
}

@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, retain) PIParallaxStyleRecipe *recipe;
@property (nonatomic, readonly) NSDictionary *resolvedParameters;

- (void).cxx_destruct;
- (id)_evaluateImageWithFilterDefinitions:(id)arg1 inputImage:(id)arg2;
- (id)initWithRecipe:(id)arg1;
- (id)outputBackgroundImage;
- (id)outputForegroundImage;
- (id)outputMatteImage;
- (id)parameters;
- (id)recipe;
- (id)resolvedParameters;
- (void)setParameters:(id)arg1;
- (void)setRecipe:(id)arg1;

@end
