
@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate> {
    id /* block */  _retimerDidRetimeSampleBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ retimerDidRetimeSampleBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)retimer:(id)arg1 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id /* block */)retimerDidRetimeSampleBuffer;
- (void)setRetimerDidRetimeSampleBuffer:(id /* block */)arg1;

@end
