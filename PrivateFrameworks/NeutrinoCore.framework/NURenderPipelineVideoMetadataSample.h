
@interface NURenderPipelineVideoMetadataSample : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameTime;
    AVTimedMetadataGroup * _metadataGroup;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameTime;
@property (nonatomic, readonly) AVTimedMetadataGroup *metadataGroup;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameTime;
- (id)initWithFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 metadataGroup:(id)arg2;
- (id)metadataGroup;

@end
