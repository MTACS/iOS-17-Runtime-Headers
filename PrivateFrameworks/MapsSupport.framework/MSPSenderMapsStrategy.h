
@interface MSPSenderMapsStrategy : MSPSenderStrategy {
    NSMutableDictionary * _capabilitiesByParticipant;
    NSMutableDictionary * _lastEtaUpdateDates;
    NSMutableDictionary * _participantsByCapabilities;
}

@property (nonatomic, retain) NSMutableDictionary *capabilitiesByParticipant;
@property (nonatomic, retain) NSMutableDictionary *lastEtaUpdateDates;
@property (nonatomic, retain) NSMutableDictionary *participantsByCapabilities;

- (void).cxx_destruct;
- (void)_sendCompatibleInstancesOfState:(id)arg1 to:(id)arg2;
- (void)_sendDestinationReachedUpdate:(id)arg1 to:(id)arg2;
- (void)_sendETAUpdate:(id)arg1 to:(id)arg2;
- (void)_sendResumingToNextDestinationUpdate:(id)arg1 to:(id)arg2;
- (void)_sendRouteUpdate:(id)arg1 to:(id)arg2;
- (void)_sendStoppedUpdate:(id)arg1 to:(id)arg2;
- (void)_sendTrafficUpdate:(id)arg1 to:(id)arg2;
- (void)_sendUpdatedWaypoints:(id)arg1 to:(id)arg2;
- (void)addParticipants:(id)arg1;
- (id)capabilitiesByParticipant;
- (void)destinationReached:(id)arg1;
- (void)didFetchCapabilitiesForParticipants:(id)arg1;
- (id)initWithGroupSession:(id)arg1;
- (id)lastEtaUpdateDates;
- (id)participantsByCapabilities;
- (void)restoreState:(id)arg1;
- (void)resumingToNextDestination:(id)arg1;
- (void)sessionStopped:(id)arg1;
- (void)setCapabilitiesByParticipant:(id)arg1;
- (void)setLastEtaUpdateDates:(id)arg1;
- (void)setParticipantsByCapabilities:(id)arg1;

@end
