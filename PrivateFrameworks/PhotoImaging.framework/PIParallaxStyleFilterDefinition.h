
@interface PIParallaxStyleFilterDefinition : PIParallaxStyleDefinition {
    NSString * _filterName;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly, copy) NSString *filterName;
@property (nonatomic, readonly, copy) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)description;
- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (id)filterName;
- (id)init;
- (id)initWithFilterName:(id)arg1 parameters:(id)arg2;
- (bool)isEqualToParallaxStyleDefinition:(id)arg1;
- (bool)isEqualToParallaxStyleFilterDefinition:(id)arg1;
- (id)parameters;
- (id)type;

@end
