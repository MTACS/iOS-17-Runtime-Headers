
@protocol SoftISPProcessorDelegate <NSObject>

@required

- (struct __CVBuffer { }*)newOutputAuxiliaryPixelBufferForUniqueID:(unsigned long long)arg1 pixelFormat:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (struct __CVBuffer { }*)newOutputPixelBufferForUniqueID:(unsigned long long)arg1 pixelFormat:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;

@optional

- (void)notifyProcessInputFrameForUniqueID:(unsigned long long)arg1;
- (void)outputFrameCompleted:(SoftISPOutputFrame *)arg1;
- (void)outputFrameEnqueueFailure:(SoftISPOutputFrame *)arg1;
- (void)outputFrameEnqueued:(SoftISPOutputFrame *)arg1;
- (void)outputFrameGPUFailure:(SoftISPOutputFrame *)arg1;

@end
