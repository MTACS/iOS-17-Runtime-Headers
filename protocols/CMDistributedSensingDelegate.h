
@protocol CMDistributedSensingDelegate <NSObject>

@optional

- (void)distributedSensingManager:(CMDistributedSensingManager *)arg1 didFailToSubscribeToVehicleState:(NSError *)arg2;
- (void)distributedSensingManager:(CMDistributedSensingManager *)arg1 didUpdateVehicleState:(CMVehicleStateData *)arg2;

@end
