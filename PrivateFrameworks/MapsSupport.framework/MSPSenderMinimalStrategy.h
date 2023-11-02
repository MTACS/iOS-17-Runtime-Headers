
@interface MSPSenderMinimalStrategy : MSPSenderMapsStrategy {
    NSMutableSet * _participantsNeedingInitialState;
}

- (void).cxx_destruct;
- (bool)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2;
- (void)_sendInitialStateIfNeedded;
- (bool)_validDestinationState:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)didFetchCapabilitiesForParticipants:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (id)initWithGroupSession:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)setState:(id)arg1;
- (void)waypointsUpdated:(id)arg1;

@end
