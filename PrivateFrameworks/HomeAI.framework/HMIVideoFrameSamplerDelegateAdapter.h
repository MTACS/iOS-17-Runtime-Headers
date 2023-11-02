
@interface HMIVideoFrameSamplerDelegateAdapter : HMFObject <HMIVideoFrameSamplerDelegate> {
    id /* block */  _frameSamplerDidDropFrame;
    id /* block */  _frameSamplerDidSampleFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ frameSamplerDidDropFrame;
@property (copy) id /* block */ frameSamplerDidSampleFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)frameSampler:(id)arg1 didDropFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)frameSampler:(id)arg1 didSampleFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (id /* block */)frameSamplerDidDropFrame;
- (id /* block */)frameSamplerDidSampleFrame;
- (void)setFrameSamplerDidDropFrame:(id /* block */)arg1;
- (void)setFrameSamplerDidSampleFrame:(id /* block */)arg1;

@end
