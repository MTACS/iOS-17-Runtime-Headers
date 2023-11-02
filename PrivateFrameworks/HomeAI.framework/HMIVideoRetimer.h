
@interface HMIVideoRetimer : HMIVideoProcessingNode <HMFLogging> {
    <HMIVideoRetimerDelegate> * _delegate;
    struct opaqueCMSampleBuffer { } * _lastSample;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoRetimerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)flushWithNextSamplePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
