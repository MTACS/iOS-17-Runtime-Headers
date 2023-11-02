
@interface PIParallaxStyleNumberParameter : PIParallaxStyleParameter {
    NSNumber * _numberValue;
    NSString * _unit;
}

@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSString *unit;

- (void).cxx_destruct;
- (id)description;
- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithNumber:(id)arg1;
- (id)initWithNumber:(id)arg1 unit:(id)arg2;
- (bool)isEqualToParallaxStyleParameter:(id)arg1;
- (id)numberValue;
- (id)type;
- (id)unit;

@end
