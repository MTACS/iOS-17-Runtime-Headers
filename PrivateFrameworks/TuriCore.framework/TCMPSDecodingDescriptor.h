
@interface TCMPSDecodingDescriptor : NSObject {
    TCMPSConvolutionDescriptor * _conv;
    TCMPSInstanceNormalizationDescriptor * _inst;
    TCMPSUpsamplingDescriptor * _upsample;
}

@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv;
@property (nonatomic, retain) TCMPSInstanceNormalizationDescriptor *inst;
@property (nonatomic, retain) TCMPSUpsamplingDescriptor *upsample;

- (void).cxx_destruct;
- (id)conv;
- (id)init;
- (id)inst;
- (void)setConv:(id)arg1;
- (void)setInst:(id)arg1;
- (void)setUpsample:(id)arg1;
- (id)upsample;

@end
