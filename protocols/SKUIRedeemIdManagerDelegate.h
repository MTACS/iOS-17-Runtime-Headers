
@protocol SKUIRedeemIdManagerDelegate <NSObject>

@required

- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didChangeToText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didReturnText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 movedToRowAtIndexPath:(NSIndexPath *)arg2;

@end
