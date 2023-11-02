
@interface XRMobileAgentItinerary : NSObject {
    <XRMobileAgentStop> * _currentStop;
    <XRMobileAgentStop> * _finalDestination;
    id  _finalDestinationTicket;
    NSString * _nextMode;
    int  _nextMovementType;
    unsigned int  _nextQoS;
    <XRMobileAgentStop> * _nextStop;
    <XRMobileAgentStop> * _nextStopTicket;
    bool  _updated;
}

@property (nonatomic, readonly) <XRMobileAgentStop> *currentStop;
@property (nonatomic, retain) <XRMobileAgentStop> *finalDestination;
@property (nonatomic, retain) id finalDestinationTicket;
@property (nonatomic, readonly) bool updated;

+ (id)inlineStop;

- (void).cxx_destruct;
- (int)_nextMovementType;
- (void)_visitNextStop:(id)arg1;
- (id)currentStop;
- (id)finalDestination;
- (id)finalDestinationTicket;
- (void)finishedWithMode:(id)arg1;
- (void)revisit;
- (void)setFinalDestination:(id)arg1;
- (void)setFinalDestinationTicket:(id)arg1;
- (void)setNextStop:(id)arg1 mode:(id)arg2;
- (void)setNextStop:(id)arg1 mode:(id)arg2 ticket:(id)arg3;
- (void)setNextStop:(id)arg1 mode:(id)arg2 ticket:(id)arg3 desiredQoS:(unsigned int)arg4;
- (bool)updated;

@end
