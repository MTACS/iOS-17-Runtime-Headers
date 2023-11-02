
@interface PIParallaxStyleFilterStackDefinition : PIParallaxStyleDefinition {
    NSArray * _filters;
    NSString * _stackName;
}

@property (nonatomic, readonly, copy) NSArray *filters;
@property (nonatomic, readonly, copy) NSString *stackName;

- (void).cxx_destruct;
- (id)description;
- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (id)filters;
- (id)init;
- (id)initWithStackName:(id)arg1 filters:(id)arg2;
- (bool)isEqualToParallaxStyleDefinition:(id)arg1;
- (bool)isEqualToParallaxStyleFilterStackDefinition:(id)arg1;
- (id)stackName;
- (id)type;

@end
