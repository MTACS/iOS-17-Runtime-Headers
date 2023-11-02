
@protocol BLProgressReceiving <NSObject>

@required

- (void)didFailWithUserInfo:(NSDictionary *)arg1;
- (void)downloadCompleteWithUserInfo:(NSDictionary *)arg1;
- (void)progressWithUserInfo:(NSDictionary *)arg1;
- (void)purchaseFailedWithUserInfo:(NSDictionary *)arg1;
- (void)purchaseSucceededWithUserInfo:(NSDictionary *)arg1;

@end
