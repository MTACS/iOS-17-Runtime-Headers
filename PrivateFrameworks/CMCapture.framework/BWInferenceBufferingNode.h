
@interface BWInferenceBufferingNode : BWInferenceNode {
    BWInferenceResultRingBuffers * _ringBuffers;
}

@property (nonatomic, readonly, retain) BWInferenceResultRingBuffers *ringBuffers;

- (int)addInferenceOfType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3 ringBufferCapacity:(int)arg4;
- (void)dealloc;
- (id)initWithConvEngineSupportWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)ringBuffers;
- (void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
