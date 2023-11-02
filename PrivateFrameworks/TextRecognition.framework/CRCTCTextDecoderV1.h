
@interface CRCTCTextDecoderV1 : NSObject <CRTextDecoding> {
    CRCtcBeamSearch * _beamSearch;
    CRNeuralRecognizerConfiguration * _configuration;
    CRTextSequenceRecognizerModel * _model;
    CRRegex * _regExpressions;
}

@property (nonatomic, retain) CRCtcBeamSearch *beamSearch;
@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (nonatomic, retain) CRRegex *regExpressions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)beamSearch;
- (id)configuration;
- (id)correctLMDecodingWithRegex:(id)arg1 noLMDecoding:(id)arg2;
- (bool)decodeOutput:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
- (id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id*)arg3;
- (bool)lmDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (void)maxDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (id)model;
- (id)regExpressions;
- (void)setBeamSearch:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRegExpressions:(id)arg1;
- (bool)shouldDecodeWithLM;

@end
