
@protocol MSPReceiverETAControllerDelegate <NSObject>

@required

- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateDestinationForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateETAForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateReachedDestinationForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateRouteForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 sharedTripDidBecomeAvailable:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 sharedTripDidBecomeUnavailable:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 sharedTripDidClose:(GEOSharedNavState *)arg2;

@end
