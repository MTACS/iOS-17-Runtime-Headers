
@interface MSPSenderLiveStrategy : MSPSenderMapsStrategy {
    NSMutableSet * _participantsNeedingRoute;
}

- (void).cxx_destruct;
- (bool)_needToSendEtaRefreshFor:(id)arg1;
- (void)_sendInitialRouteIfNeeded;
- (void)addParticipants:(id)arg1;
- (void)didFetchCapabilitiesForParticipants:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (id)initWithGroupSession:(id)arg1;
- (void)routeUpdated:(id)arg1;
- (void)setState:(id)arg1;
- (void)trafficUpdated:(id)arg1;
- (void)waypointsUpdated:(id)arg1;

@end
