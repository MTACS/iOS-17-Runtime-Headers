
@protocol NPTPingDelegate <NSObject>

@required

- (void)pingDidFinishWithError:(NSError *)arg1;
- (void)pingDidFinishWithResults:(NPTPingResult *)arg1;
- (void)pingWillStartPinging;

@end
