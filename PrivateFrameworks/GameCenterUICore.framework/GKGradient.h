
@interface GKGradient : NSObject {
    struct CGGradient { } * _CGGradient;
}

+ (id)gradientWithColors:(id)arg1 atLocations:(const double*)arg2;

- (struct CGGradient { }*)CGGradient;
- (void)dealloc;
- (id)initWithColors:(id)arg1 atLocations:(const double*)arg2;

@end
