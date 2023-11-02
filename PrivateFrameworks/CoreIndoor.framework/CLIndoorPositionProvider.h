
@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation> {
    ServiceState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ServiceState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clVisionNotificationAvailable:(id)arg1;
- (void)clpOutdoorEstimatorLogEntryNotificationAvailable:(id)arg1;
- (id)endpointName;
- (void)gpsEstimateAvailable:(id)arg1;
- (void)gpsSignalQualityAvailable:(id)arg1;
- (id)initWithApiKey:(id)arg1;
- (id)initWithApiKey:(id)arg1 onServer:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (void)outdoorLocationAvailable:(id)arg1;
- (void)playbackDatarun:(id)arg1;
- (id)remoteObjectProtocol;
- (void)setApiKey:(id)arg1;
- (void)setApiKey:(id)arg1 onServer:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setState:(id)arg1;
- (void)startUpdatingLocationAtLocation:(id)arg1;
- (id)state;
- (void)stopUpdatingLocation;
- (bool)withinQueueCanReinitializeRemoteState;
- (void)withinQueueInvalidateState;
- (id)withinQueuePermanentShutdownReason;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;
- (void)withinQueueReinitializeRemoteState;
- (void)withinQueueSetDelegate:(id)arg1;

@end
