
@interface HMIVideoEncoderDelegateAdapter : HMFObject <HMIVideoEncoderDelegate> {
    id /* block */  _encoderDidEncodeSampleBuffer;
    id /* block */  _encoderDidFailWithError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ encoderDidEncodeSampleBuffer;
@property (copy) id /* block */ encoderDidFailWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encoder:(id)arg1 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)encoder:(id)arg1 didFailWithError:(id)arg2;
- (id /* block */)encoderDidEncodeSampleBuffer;
- (id /* block */)encoderDidFailWithError;
- (void)setEncoderDidEncodeSampleBuffer:(id /* block */)arg1;
- (void)setEncoderDidFailWithError:(id /* block */)arg1;

@end
