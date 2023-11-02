
@interface HMIVideoDecoderDelegateAdapter : HMFObject <HMIVideoDecoderDelegate> {
    id /* block */  _decoderDidDecodeSampleBuffer;
    id /* block */  _decoderDidFailWithError;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ decoderDidDecodeSampleBuffer;
@property (copy) id /* block */ decoderDidFailWithError;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)decoder:(id)arg1 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)decoder:(id)arg1 didFailWithError:(id)arg2;
- (id /* block */)decoderDidDecodeSampleBuffer;
- (id /* block */)decoderDidFailWithError;
- (void)setDecoderDidDecodeSampleBuffer:(id /* block */)arg1;
- (void)setDecoderDidFailWithError:(id /* block */)arg1;

@end
