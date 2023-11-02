
@interface CMHeadphoneMotionManagerInternal : NSObject {
    id /* block */  _callbackHandler;
    NSOperationQueue * _callbackQueue;
    RMConnectionClient * _connectionClient;
    bool  _deviceConnected;
    CMDeviceMotion * _deviceMotion;
    bool  _deviceMotionActive;
    double  _deviceMotionStartTime;
    bool  _deviceMotionStreaming;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CMAttitude * _initialReferenceAttitude;
}

@property (retain) CMDeviceMotion *deviceMotion;
@property (nonatomic, retain) CMAttitude *initialReferenceAttitude;

- (void)connect;
- (void)dealloc;
- (id)deviceMotion;
- (void)disconnect;
- (id)init;
- (id)initialReferenceAttitude;
- (void)setDeviceMotion:(id)arg1;
- (void)setInitialReferenceAttitude:(id)arg1;

@end
