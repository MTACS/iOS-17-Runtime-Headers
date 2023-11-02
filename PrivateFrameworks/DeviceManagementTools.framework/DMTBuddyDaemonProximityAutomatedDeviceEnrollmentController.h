
@interface DMTBuddyDaemonProximityAutomatedDeviceEnrollmentController : NSObject <CATTaskServerDelegate> {
    <DMTRemoteSetupBroadcasting> * _broadcaster;
    <DMTRemoteSetupBroadcastingProvider> * _broadcastingProvider;
    bool  _complete;
    <DMTBuddyDaemonProximityAutomatedDeviceEnrollmentControllerDelegate> * _delegate;
    <DMTDeviceInformationPrimitives> * _deviceInformationPrimitives;
    DMTAutomatedDeviceEnroller * _enroller;
    NSError * _enrollmentError;
    bool  _observingEnroller;
    DMTTaskOperationBuilder * _operationBuilder;
    CATTaskServer * _taskServer;
}

@property (nonatomic, retain) <DMTRemoteSetupBroadcasting> *broadcaster;
@property (getter=isBroadcasting, nonatomic, readonly) bool broadcasting;
@property (nonatomic, readonly) <DMTRemoteSetupBroadcastingProvider> *broadcastingProvider;
@property (getter=isComplete, nonatomic) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <DMTBuddyDaemonProximityAutomatedDeviceEnrollmentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <DMTDeviceInformationPrimitives> *deviceInformationPrimitives;
@property (nonatomic, readonly) DMTAutomatedDeviceEnroller *enroller;
@property (nonatomic, readonly) NSError *enrollmentError;
@property (readonly) unsigned long long hash;
@property (getter=isObservingEnroller, nonatomic) bool observingEnroller;
@property (nonatomic, readonly) DMTTaskOperationBuilder *operationBuilder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTaskServer *taskServer;

+ (id)keyPathsForValuesAffectingBroadcasting;

- (void).cxx_destruct;
- (void)addHandlersToBroadcaster:(id)arg1;
- (void)beginBroadcasting;
- (void)beginEraseAndShutdown;
- (void)beginObservingEnroller;
- (id)broadcaster;
- (void)broadcasterEncounteredError:(id)arg1;
- (void)broadcasterHasPairedTransport:(id)arg1;
- (void)broadcasterUpdatedDisplayedPin:(id)arg1;
- (id)broadcastingProvider;
- (void)dealloc;
- (id)delegate;
- (void)delegateEnrollmentError:(id)arg1;
- (void)delegateStatusUpdate;
- (void)delegateSuccessfullEnrollment;
- (id)deviceInformationPrimitives;
- (void)endBroadcasting;
- (void)endObservingEnrollerIfNeeded;
- (id)enroller;
- (id)enrollmentError;
- (void)handleServerFailureWithError:(id)arg1;
- (id)initWithBroadcastingProvider:(id)arg1 enrollmentPrimitives:(id)arg2 deviceInformationPrimitives:(id)arg3 enrollmentInformationPrimitives:(id)arg4 reachabilityPrimitives:(id)arg5 wifiActivationPrimitives:(id)arg6 wifiPrimitives:(id)arg7 profileInstallationPrimitives:(id)arg8 destructiveErasePrimitives:(id)arg9 powerOffPrimitives:(id)arg10 delegate:(id)arg11;
- (bool)isBroadcasting;
- (bool)isComplete;
- (bool)isObservingEnroller;
- (id)makeFailureCompletionViewModelWithError:(id)arg1;
- (id)makeStatusViewModelForCurrentEnrollerState;
- (id)makeSuccessfulCompletionViewModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationBuilder;
- (void)removeHandlersFromBroadcaster:(id)arg1;
- (void)resetNetworking;
- (void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;
- (id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id*)arg4;
- (void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;
- (void)serverDidInvalidate:(id)arg1;
- (void)setBroadcaster:(id)arg1;
- (void)setComplete:(bool)arg1;
- (void)setObservingEnroller:(bool)arg1;
- (id)taskServer;

@end
