
@interface JFXAVMediaVideoTrackReaderSample : NSObject <JFXMediaVideoTrackReaderSample> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct opaqueCMSampleBuffer { } * _sampleBufferRef;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*sampleBufferRef;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (struct opaqueCMSampleBuffer { }*)sampleBufferRef;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
