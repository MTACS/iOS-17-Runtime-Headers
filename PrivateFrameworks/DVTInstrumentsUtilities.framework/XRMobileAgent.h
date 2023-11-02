
@interface XRMobileAgent : NSObject {
    unsigned int  _desiredQoS;
    XRMobileAgentItinerary * _itinerary;
    NSString * _mode;
    int  _movementType;
    id  _ticket;
}

@property (nonatomic, readonly) NSString *agentDiagnosticsName;
@property (nonatomic, readonly) unsigned int desiredQoS;
@property (nonatomic, readonly) XRMobileAgentItinerary *itinerary;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingHandle;
@property (nonatomic, retain) NSString *mode;
@property (nonatomic, readonly) int movementType;

+ (void)initialize;

- (void).cxx_destruct;
- (void)__park;
- (void)activateAtStop:(id)arg1 activationTicket:(id)arg2 activationQoS:(unsigned int)arg3 finalDestination:(id)arg4 finalTicket:(id)arg5;
- (void)activateAtStop:(id)arg1 activationTicket:(id)arg2 finalDestination:(id)arg3 finalTicket:(id)arg4;
- (id)activateUsingCompletionOperationAtStop:(id)arg1 activationTicket:(id)arg2;
- (void)activateWithFinalDestination:(id)arg1 ticket:(id)arg2;
- (id)agentDiagnosticsName;
- (void)deactivated;
- (unsigned int)desiredQoS;
- (void)executeStopOnItinerary:(id)arg1;
- (void)goodbye;
- (void)hello;
- (bool)holdsItinerary:(id)arg1;
- (id)init;
- (id)itinerary;
- (id)loggingHandle;
- (id)mode;
- (int)movementType;
- (int)nextMovementType;
- (void)setMode:(id)arg1;
- (id)ticket;

@end
