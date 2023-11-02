
@protocol ASCBackoff <NSObject>

@required

- (double)nextSleepTimeInterval;
- (void)reset;

@end
