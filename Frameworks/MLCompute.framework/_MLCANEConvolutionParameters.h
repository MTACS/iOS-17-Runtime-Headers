
@interface _MLCANEConvolutionParameters : NSObject {
    NSDictionary * _biasParams;
    NSDictionary * _convolutionParams;
    NSArray * _neuronParams;
}

@property (nonatomic, readonly, retain) NSDictionary *biasParams;
@property (nonatomic, readonly, retain) NSDictionary *convolutionParams;
@property (nonatomic, readonly, retain) NSArray *neuronParams;

+ (id)convolutionUnitParametersWith:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3;

- (void).cxx_destruct;
- (id)biasParams;
- (id)convolutionParams;
- (id)initWithConvolutionParams:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3;
- (id)neuronParams;

@end
