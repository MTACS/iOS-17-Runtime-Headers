
@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate> {
    id /* block */  _frameSelectorDidSelectFrame;
    id /* block */  _frameSelectorDidSkipFrame;
    id /* block */  _frameSelectorPrepareFrame;
}

@property (copy) id /* block */ frameSelectorDidSelectFrame;
@property (copy) id /* block */ frameSelectorDidSkipFrame;
@property (copy) id /* block */ frameSelectorPrepareFrame;

- (void).cxx_destruct;
- (void)frameSelector:(id)arg1 didSelectFrame:(struct opaqueCMSampleBuffer { }*)arg2 reference:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)frameSelector:(id)arg1 didSkipFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (struct opaqueCMSampleBuffer { }*)frameSelector:(id)arg1 prepareFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (id /* block */)frameSelectorDidSelectFrame;
- (id /* block */)frameSelectorDidSkipFrame;
- (id /* block */)frameSelectorPrepareFrame;
- (void)setFrameSelectorDidSelectFrame:(id /* block */)arg1;
- (void)setFrameSelectorDidSkipFrame:(id /* block */)arg1;
- (void)setFrameSelectorPrepareFrame:(id /* block */)arg1;

@end
