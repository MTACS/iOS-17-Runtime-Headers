
@interface TCMPSResidualDescriptor : NSObject {
    TCMPSConvolutionDescriptor * _conv1;
    TCMPSConvolutionDescriptor * _conv2;
    TCMPSInstanceNormalizationDescriptor * _inst1;
    TCMPSInstanceNormalizationDescriptor * _inst2;
}

@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv1;
@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv2;
@property (nonatomic, retain) TCMPSInstanceNormalizationDescriptor *inst1;
@property (nonatomic, retain) TCMPSInstanceNormalizationDescriptor *inst2;

- (void).cxx_destruct;
- (id)conv1;
- (id)conv2;
- (id)init;
- (id)inst1;
- (id)inst2;
- (void)setConv1:(id)arg1;
- (void)setConv2:(id)arg1;
- (void)setInst1:(id)arg1;
- (void)setInst2:(id)arg1;

@end
