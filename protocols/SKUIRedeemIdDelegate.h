
@protocol SKUIRedeemIdDelegate <NSObject>

@required

- (void)redeemIdViewController:(SKUIRedeemIdViewController *)arg1 submittedWithFields:(NSDictionary *)arg2;
- (void)redeemIdViewControllerDidCancel:(SKUIRedeemIdViewController *)arg1;

@end
