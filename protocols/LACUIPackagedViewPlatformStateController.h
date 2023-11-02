
@protocol LACUIPackagedViewPlatformStateController <NSObject>

@required

- (<LACUIPackagedViewPlatformStateControllerDelegate> *)delegate;
- (bool)hasState:(NSString *)arg1;
- (void)setDelegate:(id <LACUIPackagedViewPlatformStateControllerDelegate>)arg1;
- (void)setState:(NSString *)arg1 speed:(double)arg2;
- (NSString *)state;

@end
