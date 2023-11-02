
@interface PIParallaxStylePointParameter : PIParallaxStyleParameter {
    NSString * _unit;
    NSNumber * _xValue;
    NSNumber * _yValue;
}

@property (nonatomic, readonly) NSString *unit;
@property (nonatomic, readonly) NSNumber *xValue;
@property (nonatomic, readonly) NSNumber *yValue;

- (void).cxx_destruct;
- (id)description;
- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithX:(id)arg1 Y:(id)arg2;
- (id)initWithX:(id)arg1 Y:(id)arg2 unit:(id)arg3;
- (bool)isEqualToParallaxStyleParameter:(id)arg1;
- (id)type;
- (id)unit;
- (id)xValue;
- (id)yValue;

@end
