
@protocol SUUIRedeemIdManagerDelegate <NSObject>

@required

- (void)redeemIdManager:(SUUIRedeemIdManager *)arg1 didChangeToText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SUUIRedeemIdManager *)arg1 didReturnText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SUUIRedeemIdManager *)arg1 movedToRowAtIndexPath:(NSIndexPath *)arg2;

@end
