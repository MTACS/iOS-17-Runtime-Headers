
@protocol CTCellularPlanClientDelegate <NSObject>

@required

- (void)carrierInfoDidUpdate;
- (void)localPlanInfoDidUpdate:(NSError *)arg1;
- (void)pendingTransferPlanInfoDidUpdate;
- (void)planInfoDidUpdate;
- (void)remoteProvisioningDidBecomeAvailable;

@end
