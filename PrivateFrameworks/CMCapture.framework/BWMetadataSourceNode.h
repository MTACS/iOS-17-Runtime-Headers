
@interface BWMetadataSourceNode : BWSourceNode {
    struct OpaqueCMClock { } * _clock;
    NSObject<OS_dispatch_queue> * _emitSamplesDispatchQueue;
    struct opaqueCMFormatDescription { } * _formatDescription;
    bool  _running;
}

@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;

+ (void)initialize;

- (void)appendMetadataSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;
- (id)nodeSubType;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;

@end
