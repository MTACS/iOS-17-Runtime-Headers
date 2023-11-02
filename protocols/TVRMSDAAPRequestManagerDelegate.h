
@protocol TVRMSDAAPRequestManagerDelegate <NSObject>

@required

- (void)requestManagerFailedWithUnauthorizedError:(TVRMSDAAPRequestManager *)arg1;
- (void)requestManagerFailedWithUnknownError:(TVRMSDAAPRequestManager *)arg1;

@end
