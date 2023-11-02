
@protocol GEOETAUpdaterDelegate <NSObject>

@required

- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedETATrafficUpdateResponse:(GEOETATrafficUpdateResponse *)arg2 etaRoute:(GEOComposedETARoute *)arg3;
- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedError:(NSError *)arg2;
- (void)etaUpdater:(GEOETAUpdater *)arg1 willSendETATrafficUpdateRequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(GEOETAUpdater *)arg1 newRoute:(GEOComposedRoute *)arg2 incidentsOnRoute:(NSArray *)arg3 incidentsOffRoute:(NSArray *)arg4;
- (void)etaUpdaterUpdatedETA:(GEOETAUpdater *)arg1;

@optional

- (void)etaUpdaterRequestCompleted:(GEOETAUpdater *)arg1;

@end
