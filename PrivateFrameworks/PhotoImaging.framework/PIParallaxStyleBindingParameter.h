
@interface PIParallaxStyleBindingParameter : PIParallaxStyleParameter {
    NSString * _variableName;
}

@property (nonatomic, readonly, copy) NSString *variableName;

- (void).cxx_destruct;
- (id)description;
- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithVariableName:(id)arg1;
- (bool)isEqualToParallaxStyleParameter:(id)arg1;
- (id)type;
- (id)variableName;

@end
