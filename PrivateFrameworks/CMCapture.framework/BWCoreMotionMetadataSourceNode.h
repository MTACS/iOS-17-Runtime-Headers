
@interface BWCoreMotionMetadataSourceNode : BWSourceNode {
    struct opaqueCMFormatDescription { } * _boxedMetadataFormatDescription;
    int  _bufferGenerationRate;
    NSObject<OS_dispatch_queue> * _emitSamplesDispatchQueue;
    struct opaqueCMFormatDescription { } * _formatDescription;
    unsigned int  _localIDOfCoreMotionMetadata_BE;
    CMMotionManager * _motionManager;
    int  _numSamplesInBuffer;
    bool  _running;
    struct BWCoreMotionMetadataSampleData { unsigned int x1; unsigned int x2; double x3; double x4; double x5; double x6; double x7; float x8; float x9; float x10; } * _sampleDataForBuffer;
    int  _samplesPerBuffer;
}

@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;

+ (int)extractBWCoreMotionMetadataFromBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData { unsigned int x1; unsigned int x2; double x3; double x4; double x5; double x6; double x7; float x8; float x9; float x10; }*)arg2;
+ (int)extractBWCoreMotionMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData { unsigned int x1; unsigned int x2; double x3; double x4; double x5; double x6; double x7; float x8; float x9; float x10; }*)arg2;
+ (void)initialize;

- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)initWithBufferGenerationRate:(int)arg1 samplesPerBuffer:(int)arg2;
- (id)nodeSubType;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;

@end
