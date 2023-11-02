
@interface PIParallaxStyleRecipe : NSObject {
    NSArray * _backgroundFilters;
    NSArray * _foregroundFilters;
    NSArray * _matteFilters;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly, copy) NSArray *backgroundFilters;
@property (nonatomic, readonly, copy) NSArray *foregroundFilters;
@property (nonatomic, readonly, copy) NSArray *matteFilters;
@property (nonatomic, readonly, copy) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)backgroundFilters;
- (id)description;
- (id)foregroundFilters;
- (id)init;
- (id)initWithParameters:(id)arg1 foregroundFilters:(id)arg2 backgroundFilters:(id)arg3 matteFilters:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParallaxStyleRecipe:(id)arg1;
- (id)matteFilters;
- (id)parameters;

@end
