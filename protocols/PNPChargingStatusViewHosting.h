
@protocol PNPChargingStatusViewHosting

@required

- (PNPChargingStatusView *)chargingStatusView;
- (void)layoutIfNeeded;
- (void)setChargingStatusView:(PNPChargingStatusView *)arg1;
- (void)setShowsChargingStatusView:(bool)arg1;
- (bool)showsChargingStatusView;

@end
