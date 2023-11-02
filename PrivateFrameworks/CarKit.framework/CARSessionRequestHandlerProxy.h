
@interface CARSessionRequestHandlerProxy : NSObject <CARSessionRequestService> {
    <CARSessionRequestHandling> * _requestHandler;
}

@property (nonatomic) <CARSessionRequestHandling> *requestHandler;

- (void).cxx_destruct;
- (id)requestHandler;
- (void)service_cancelRequestsWithReply:(id /* block */)arg1;
- (void)service_prepareForRemovingWiFiUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)service_startAdvertisingCarPlayControlForUSBWithReply:(id /* block */)arg1;
- (void)service_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)service_startSessionWithHost:(id)arg1 requestIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)service_stoppedSessionWithHostIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)setRequestHandler:(id)arg1;

@end
