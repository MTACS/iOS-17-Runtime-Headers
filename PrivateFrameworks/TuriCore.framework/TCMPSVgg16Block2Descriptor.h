
@interface TCMPSVgg16Block2Descriptor : NSObject {
    TCMPSConvolutionDescriptor * _conv1;
    TCMPSConvolutionDescriptor * _conv2;
    TCMPSConvolutionDescriptor * _conv3;
    TCMPSPoolingDescriptor * _pooling;
}

@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv1;
@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv2;
@property (nonatomic, retain) TCMPSConvolutionDescriptor *conv3;
@property (nonatomic, retain) TCMPSPoolingDescriptor *pooling;

- (void).cxx_destruct;
- (id)conv1;
- (id)conv2;
- (id)conv3;
- (id)init;
- (id)pooling;
- (void)setConv1:(id)arg1;
- (void)setConv2:(id)arg1;
- (void)setConv3:(id)arg1;
- (void)setPooling:(id)arg1;

@end
