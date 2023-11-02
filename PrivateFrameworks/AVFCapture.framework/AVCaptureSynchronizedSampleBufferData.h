
@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedSampleBufferDataInternal * _internal;
}

@property (readonly) long long droppedReason;
@property (readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (readonly) bool sampleBufferWasDropped;

+ (void)initialize;

- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 sampleBufferWasDropped:(bool)arg2;
- (int)constituentDeviceCaptureID;
- (void)dealloc;
- (long long)droppedReason;
- (bool)hasCorrespondingDepthData;
- (bool)hasCorrespondingVisionData;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (bool)sampleBufferWasDropped;

@end
