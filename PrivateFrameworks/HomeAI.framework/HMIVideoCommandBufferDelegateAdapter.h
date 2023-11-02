
@interface HMIVideoCommandBufferDelegateAdapter : HMFObject <HMIVideoCommandBufferDelegate> {
    id /* block */  _bufferWillFlush;
    id /* block */  _bufferWillHandleSampleBuffer;
}

@property (copy) id /* block */ bufferWillFlush;
@property (copy) id /* block */ bufferWillHandleSampleBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buffer:(id)arg1 willHandleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id /* block */)bufferWillFlush;
- (void)bufferWillFlush:(id)arg1;
- (id /* block */)bufferWillHandleSampleBuffer;
- (void)setBufferWillFlush:(id /* block */)arg1;
- (void)setBufferWillHandleSampleBuffer:(id /* block */)arg1;

@end
