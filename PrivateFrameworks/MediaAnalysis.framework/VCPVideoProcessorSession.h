
@interface VCPVideoProcessorSession : NSObject {
    unsigned long long  _frameCount;
    bool  _modified;
    struct CF<opaqueCMSampleBuffer *> { 
        struct opaqueCMSampleBuffer {} *value_; 
    }  _nextSampleBuffer;
    NSMutableArray * _nodes;
    unsigned int  _orientation;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
}

@property (nonatomic) unsigned int orientation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addFrameProcessingRequest:(id /* block */)arg1 withConfiguration:(id)arg2 error:(id*)arg3;
- (bool)addRequest:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3;
- (bool)allRequestsFinished;
- (bool)flushWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 error:(id*)arg2;
- (id)init;
- (unsigned int)orientation;
- (bool)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (bool)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id*)arg3;
- (bool)removeRequest:(id)arg1 error:(id*)arg2;
- (void)setOrientation:(unsigned int)arg1;
- (bool)shouldProcessSampleWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 atSamplingInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
