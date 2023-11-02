
@interface TCMPSTransformerDescriptor : NSObject {
    TCMPSConvolutionDescriptor * _conv;
    TCMPSDecodingDescriptor * _decode1;
    TCMPSDecodingDescriptor * _decode2;
    TCMPSEncodingDescriptor * _encode1;
    TCMPSEncodingDescriptor * _encode2;
    TCMPSEncodingDescriptor * _encode3;
    TCMPSInstanceNormalizationDescriptor * _inst;
    TCMPSResidualDescriptor * _residual1;
    TCMPSResidualDescriptor * _residual2;
    TCMPSResidualDescriptor * _residual3;
    TCMPSResidualDescriptor * _residual4;
    TCMPSResidualDescriptor * _residual5;
}

@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv;
@property (nonatomic, retain) TCMPSDecodingDescriptor *decode1;
@property (nonatomic, retain) TCMPSDecodingDescriptor *decode2;
@property (nonatomic, retain) TCMPSEncodingDescriptor *encode1;
@property (nonatomic, retain) TCMPSEncodingDescriptor *encode2;
@property (nonatomic, retain) TCMPSEncodingDescriptor *encode3;
@property (nonatomic, retain) TCMPSInstanceNormalizationDescriptor *inst;
@property (nonatomic, retain) TCMPSResidualDescriptor *residual1;
@property (nonatomic, retain) TCMPSResidualDescriptor *residual2;
@property (nonatomic, retain) TCMPSResidualDescriptor *residual3;
@property (nonatomic, retain) TCMPSResidualDescriptor *residual4;
@property (nonatomic, retain) TCMPSResidualDescriptor *residual5;

- (void).cxx_destruct;
- (id)conv;
- (id)decode1;
- (id)decode2;
- (id)encode1;
- (id)encode2;
- (id)encode3;
- (id)init;
- (id)inst;
- (id)residual1;
- (id)residual2;
- (id)residual3;
- (id)residual4;
- (id)residual5;
- (void)setConv:(id)arg1;
- (void)setDecode1:(id)arg1;
- (void)setDecode2:(id)arg1;
- (void)setEncode1:(id)arg1;
- (void)setEncode2:(id)arg1;
- (void)setEncode3:(id)arg1;
- (void)setInst:(id)arg1;
- (void)setResidual1:(id)arg1;
- (void)setResidual2:(id)arg1;
- (void)setResidual3:(id)arg1;
- (void)setResidual4:(id)arg1;
- (void)setResidual5:(id)arg1;

@end
