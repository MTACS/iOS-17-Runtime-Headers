
@protocol SESSessionCallbackInterface <NSObject>

@required

- (void)didEndUnexpectedly:(NSError *)arg1;
- (void)didStartSession:(NSError *)arg1;

@end
