
@interface _HMDCameraPowerAssertion : HMFObject {
    HMDCameraPowerAssertionHandler * _assertionHandler;
    HMDCameraSessionID * _remoteRequestHandlerSessionID;
}

@property (nonatomic, readonly) HMDCameraPowerAssertionHandler *assertionHandler;
@property (nonatomic, readonly) HMDCameraSessionID *remoteRequestHandlerSessionID;

- (void).cxx_destruct;
- (id)assertionHandler;
- (void)dealloc;
- (id)initWithPowerAssertionHandler:(id)arg1 remoteRequestHandlerSessionID:(id)arg2;
- (id)remoteRequestHandlerSessionID;

@end
