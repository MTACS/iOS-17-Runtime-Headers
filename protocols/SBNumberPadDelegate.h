
@protocol SBNumberPadDelegate <NSObject>

@optional

- (void)buttonCancelled:(UIControl *)arg1;
- (void)buttonDown:(UIControl *)arg1;
- (void)buttonUp:(UIControl *)arg1;

@end
