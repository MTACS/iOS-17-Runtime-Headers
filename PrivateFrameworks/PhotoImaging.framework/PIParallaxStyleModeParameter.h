
@interface PIParallaxStyleModeParameter : PIParallaxStyleParameter {
    NSString * _modeValue;
}

@property (nonatomic, readonly, copy) NSString *modeValue;

- (void).cxx_destruct;
- (id)description;
- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithMode:(id)arg1;
- (bool)isEqualToParallaxStyleParameter:(id)arg1;
- (id)modeValue;
- (id)type;

@end
