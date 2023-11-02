
@protocol SKRequestDelegate <NSObject>

@optional

- (void)request:(SKRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinish:(SKRequest *)arg1;

@end
