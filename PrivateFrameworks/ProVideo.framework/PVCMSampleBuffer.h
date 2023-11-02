
@interface PVCMSampleBuffer : NSObject {
    PVImageBuffer * _backingPVImageBuffer;
    struct opaqueCMSampleBuffer { } * _sampleBufferRef;
}

@property (nonatomic, readonly) PVImageBuffer *backingPVImageBuffer;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*sampleBufferRef;

+ (struct opaqueCMSampleBuffer { }*)createCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2 error:(out id*)arg3;
+ (id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
+ (id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;

- (void).cxx_destruct;
- (id)backingPVImageBuffer;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(out id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (struct opaqueCMSampleBuffer { }*)sampleBufferRef;

@end
