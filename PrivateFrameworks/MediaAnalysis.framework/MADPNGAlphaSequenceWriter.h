
@interface MADPNGAlphaSequenceWriter : MADAlphaSequenceWriter {
    NSMutableData * _data;
    struct CF<CGImageDestination *> { 
        struct CGImageDestination {} *value_; 
    }  _destination;
    struct CF<CGImage *> { 
        struct CGImage {} *value_; 
    }  _lastImage;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPTS;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _lastPixelBuffer;
    unsigned long long  _remainingFrameCount;
    int  _status;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addPixelBuffer:(struct __CVBuffer { }*)arg1 withTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)finishWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithFrameCount:(unsigned long long)arg1;
- (id)transcodeWithMaxDimension:(unsigned long long)arg1;

@end
