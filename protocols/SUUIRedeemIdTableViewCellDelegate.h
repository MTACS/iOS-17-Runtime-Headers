
@protocol SUUIRedeemIdTableViewCellDelegate <NSObject>

@required

- (void)redeemIdCell:(SUUIRedeemIdTableViewCell *)arg1 didChangeToText:(NSString *)arg2;
- (void)redeemIdCell:(SUUIRedeemIdTableViewCell *)arg1 didReturnWithText:(NSString *)arg2;

@end
