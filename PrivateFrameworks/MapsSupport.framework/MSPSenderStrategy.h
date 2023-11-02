
@interface MSPSenderStrategy : NSObject {
    MSPSharedTripGroupSession * _groupSession;
    NSMutableSet * _participants;
    GEOSharedNavState * _state;
}

@property (nonatomic, retain) NSMutableSet *participants;
@property (nonatomic, copy) GEOSharedNavState *state;

- (void).cxx_destruct;
- (void)addParticipants:(id)arg1;
- (void)destinationReached:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (id)initWithGroupSession:(id)arg1;
- (id)participants;
- (bool)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)restoreState:(id)arg1;
- (void)resumingToNextDestination:(id)arg1;
- (void)routeUpdated:(id)arg1;
- (void)sessionStopped:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)stateUpdated:(id)arg1;
- (void)trafficUpdated:(id)arg1;
- (void)waypointsUpdated:(id)arg1;

@end
