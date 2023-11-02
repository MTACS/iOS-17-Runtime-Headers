
@protocol SSRequestDelegate <NSObject>

@optional

- (void)request:(SSRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinish:(SSRequest *)arg1;

@end
