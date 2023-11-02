
@interface HMIVideoFrameIntervalSampler : HMIVideoFrameSampler <HMFLogging> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _interval;
    long long  _lastIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithFrameRate:(float)arg1;
- (id)initWithInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
