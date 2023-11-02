
@protocol SESSession <NSObject>

@required

- (void)endSession;
- (unsigned long long)state;

@end
