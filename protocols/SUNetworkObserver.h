
@protocol SUNetworkObserver <NSObject>

@optional

- (void)carrierBundleChanged;
- (void)cellularChangedFromCellularType:(int)arg1 toCellularType:(int)arg2;
- (void)cellularRoamingStatusChanged:(bool)arg1;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)operatorBundleChanged;
- (void)pathSatisficationStatusChangedTo:(bool)arg1;

@end
