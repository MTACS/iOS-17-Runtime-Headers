
@interface BWDockKitNode : BWNode <NSXPCListenerDelegate> {
    DKTrackingAgent * _agent;
    NSString * _clientApplicationID;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    bool  _isRunningForContinuityCapture;
    double  minFrameDuration;
    NSDate * start;
}

@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)clientApplicationID;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithIsRunningForContinuityCapture:(bool)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setClientApplicationID:(id)arg1;

@end
