
@interface VCStreamInputVideo : VCStreamInput {
    VCVideoCapture * _videoCapture;
}

- (unsigned int)addSink:(id)arg1;
- (void)dealloc;
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription { }*)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;
- (void)invalidate;
- (unsigned int)removeSink:(id)arg1;

@end
