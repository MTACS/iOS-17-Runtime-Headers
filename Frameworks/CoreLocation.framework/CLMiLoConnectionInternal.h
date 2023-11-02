
@interface CLMiLoConnectionInternal : NSObject {
    NSUUID * _connectedServiceIdentifier;
    <CLMiLoConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    void * _locationdConnection;
    CLMiLoConnection * _sender;
}

+ (bool)_isKnownNonActionableMessage:(void*)arg1;

- (void)_connectServiceWithIdentifier:(id)arg1;
- (void)_createServiceWithServiceType:(unsigned long long)arg1 locationTypes:(id)arg2;
- (void)_deleteServiceWithIdentifier:(id)arg1;
- (void)_disconnectServiceWithIdentifier:(id)arg1;
- (void)_handleDaemonEvent:(id)arg1;
- (void)_handleDebugResponseEvent:(id)arg1;
- (void)_handleGenericEvent:(id)arg1;
- (void)_handleMiLoConnectionStatusEvent:(id)arg1;
- (void)_handlePredictionUpdateEvent:(id)arg1;
- (void)_invalidateLocationClient;
- (void)_labelEventWithRequestIdentifier:(id)arg1 placeIdentifier:(id)arg2 observationIdentifier:(id)arg3;
- (void)_labelEventsWithStartDate:(id)arg1 endDate:(id)arg2 placeIdentifier:(id)arg3 requestIdentifier:(id)arg4;
- (void)_notifyClientConnectServiceDidFailWithServiceIdentifier:(id)arg1 withError:(id)arg2;
- (void)_notifyClientCreateServiceDidFailWithError:(id)arg1;
- (void)_notifyClientDeleteServiceDidFailWithServiceIdentifier:(id)arg1 withError:(id)arg2;
- (void)_notifyClientDidCompleteClientRequest:(id)arg1 withError:(id)arg2;
- (void)_notifyClientDidCreateServiceWithServiceIdentifier:(id)arg1;
- (void)_notifyClientDidDeleteServiceWithServiceIdentifier:(id)arg1;
- (void)_notifyClientDidExportDatabaseWithResponse:(id)arg1;
- (void)_notifyClientDidFindMyServicesWithServiceDescriptors:(id)arg1;
- (void)_notifyClientDidUpdateMiLoConnectionStatus:(id)arg1;
- (void)_notifyClientDidUpdatePrediction:(id)arg1;
- (void)_notifyClientDidUpdateServiceStatus:(id)arg1;
- (void)_notifyClientDisconnectServiceDidFailWithError:(id)arg1 serviceIdentifier:(id)arg2;
- (void)_notifyClientOfGenericEventResponse:(id)arg1;
- (void)_notifyClientQueryMiLoConnectionStatusDidFailWithError:(id)arg1;
- (void)_notifyClientQueryServiceDidFailWithError:(id)arg1;
- (void)_notifyClientRecordingMetaInfo:(id)arg1;
- (void)_purgeAllMiLoDataWithRequestIdentifier:(id)arg1;
- (void)_queryMiLoConnectionStatus;
- (void)_queryMyServices;
- (void)_registerForMiLoConnectionStatusEvents;
- (void)_registerForMiLoDebugResponseEvents;
- (void)_registerForMiLoGenericEvents;
- (void)_registerForMiLoServiceEvents;
- (void)_removeLabels:(id)arg1 withRequestIdentifier:(id)arg2;
- (void)_requestExportDatabaseWithRequestIdentifier:(id)arg1;
- (void)_requestMiLoPredictionWithRequestIdentifier:(id)arg1;
- (void)_requestModelLearningWithRequestIdentifier:(id)arg1;
- (void)_requestObservationWithRequestIdentifier:(id)arg1 placeIdentifier:(id)arg2;
- (void)_setHandlerForMiLoPredictionEvents;
- (void)_startUpdatingMicroLocationWithConfiguration:(id)arg1 withRequestIdentifier:(id)arg2;
- (void)_stopUpdatingMicroLocationWithRequestIdentifier:(id)arg1;
- (void)_teardown;
- (void)_unregisterForMiLoConnectionStatusEvents;
- (void)_unregisterForMiLoDebugResponseEvents;
- (void)_unregisterForMiLoGenericEvents;
- (void)_unregisterForMiloServiceEvents;
- (void)_unsetHandlerForMiLoPredictionEvents;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end
