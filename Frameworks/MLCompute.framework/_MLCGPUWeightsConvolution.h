
@interface _MLCGPUWeightsConvolution : NSObject <MPSCNNConvolutionDataSource, NSCopying> {
    MLCTensor * _biasTerm;
    MLCConvolutionDescriptor * _desc;
    MPSCNNConvolutionDescriptor * _descMPS;
    MLCTensor * _localBiasTerm;
    MLCTensor * _localWeight;
    MLCActivationDescriptor * _neuronDesc;
    MLCTensor * _weight;
}

@property (nonatomic, readonly) MLCTensor *biasTerm;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) MLCConvolutionDescriptor *desc;
@property (nonatomic, readonly) MPSCNNConvolutionDescriptor *descMPS;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MLCTensor *localBiasTerm;
@property (nonatomic, retain) MLCTensor *localWeight;
@property (nonatomic, readonly) MLCActivationDescriptor *neuronDesc;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MLCTensor *weight;

+ (id)weightWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3;
+ (id)weightWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 neuronDescriptor:(id)arg4;

- (void).cxx_destruct;
- (id)biasTerm;
- (float*)biasTerms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (id)desc;
- (id)descMPS;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 neuronDescriptor:(id)arg4;
- (unsigned int)kernelWeightsDataType;
- (id)label;
- (bool)load;
- (id)localBiasTerm;
- (id)localWeight;
- (id)neuronDesc;
- (void)purge;
- (void)setLocalBiasTerm:(id)arg1;
- (void)setLocalWeight:(id)arg1;
- (id)weight;
- (void*)weights;
- (unsigned int)weightsLayout;

@end
