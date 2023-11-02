
@interface TCMPSEncodingDescriptor : NSObject {
    TCMPSConvolutionDescriptor * _conv;
    TCMPSInstanceNormalizationDescriptor * _inst;
}

@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv;
@property (nonatomic, retain) TCMPSInstanceNormalizationDescriptor *inst;

- (void).cxx_destruct;
- (id)conv;
- (id)init;
- (id)inst;
- (void)setConv:(id)arg1;
- (void)setInst:(id)arg1;

@end
