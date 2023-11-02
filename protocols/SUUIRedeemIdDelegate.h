
@protocol SUUIRedeemIdDelegate <NSObject>

@required

- (void)redeemIdViewController:(SUUIRedeemIdViewController *)arg1 submittedWithFields:(NSDictionary *)arg2;
- (void)redeemIdViewControllerDidCancel:(SUUIRedeemIdViewController *)arg1;

@end
