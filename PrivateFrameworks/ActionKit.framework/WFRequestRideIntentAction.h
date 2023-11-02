
@interface WFRequestRideIntentAction : WFHandleSystemIntentAction <WFIntentExecutorDelegate, WFRideOptionsLoaderDelegate> {
    INInteraction * _requestRideInteraction;
    WFRideOptionsLoader * _rideOptionsLoader;
    WFIntentExecutor * _rideStatusExecutor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INInteraction *requestRideInteraction;
@property (nonatomic, readonly) WFRideOptionsLoader *rideOptionsLoader;
@property (nonatomic, retain) WFIntentExecutor *rideStatusExecutor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromListRideOptionsResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromRequestRideResponse:(id)arg1 intent:(id)arg2;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleExecutionCompletionWithInteraction:(id)arg1 error:(id)arg2;
- (id)icon;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveError:(id)arg2;
- (void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveUpdate:(id)arg2;
- (id)mustVerifyCredentialsError;
- (id)noServiceInAreaError;
- (id)previousRideNeedsCompletionError;
- (id)previousRideNeedsFeedback;
- (id)requestRideInteraction;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (id)rideOptionsLoader;
- (void)rideOptionsLoader:(id)arg1 errorFromListRideOptionsError:(id)arg2 updatedErrorHandler:(id /* block */)arg3;
- (id)rideScheduledTooFarError;
- (id)rideStatusExecutor;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (id)serviceTemporarilyUnavailableError;
- (void)setRequestRideInteraction:(id)arg1;
- (void)setRideStatusExecutor:(id)arg1;

@end
