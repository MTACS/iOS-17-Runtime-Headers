
@protocol RMSDAAPRequestManagerDelegate <NSObject>

@required

- (void)requestManagerFailedWithUnauthorizedError:(RMSDAAPRequestManager *)arg1;
- (void)requestManagerFailedWithUnknownError:(RMSDAAPRequestManager *)arg1;

@end
