
@interface PIParallaxStyleColorParameter : PIParallaxStyleParameter {
    NSNumber * _alphaValue;
    NSNumber * _blueValue;
    NSNumber * _greenValue;
    NSNumber * _redValue;
}

@property (nonatomic, readonly) NSNumber *alphaValue;
@property (nonatomic, readonly) NSNumber *blueValue;
@property (nonatomic, readonly) NSNumber *greenValue;
@property (nonatomic, readonly) NSNumber *redValue;

- (void).cxx_destruct;
- (id)alphaValue;
- (id)blueValue;
- (id)description;
- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (id)greenValue;
- (id)init;
- (id)initWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (bool)isEqualToParallaxStyleParameter:(id)arg1;
- (id)redValue;
- (id)type;

@end
