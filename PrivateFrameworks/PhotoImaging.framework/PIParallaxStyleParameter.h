
@interface PIParallaxStyleParameter : NSObject

@property (nonatomic, readonly) NSString *type;

- (id)evaluateWithContext:(id)arg1 error:(out id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParallaxStyleParameter:(id)arg1;
- (id)type;

@end
