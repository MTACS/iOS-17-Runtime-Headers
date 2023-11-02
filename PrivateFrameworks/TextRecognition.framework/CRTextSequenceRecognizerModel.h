
@interface CRTextSequenceRecognizerModel : NSObject <CRTextRecognizerModel> {
    int * _codemapArray;
    unsigned long long  _codemapSize;
    CRNeuralRecognizerConfiguration * _configuration;
    long long  _ctcBlankLabelIndex;
    NSNumber * _outputFormatVersion;
    NSDictionary * _outputShape;
    NSNumber * _outputWidthDownscale;
    NSNumber * _outputWidthOffset;
}

@property (nonatomic) int*codemapArray;
@property (nonatomic) unsigned long long codemapSize;
@property (readonly) CRNeuralRecognizerConfiguration *configuration;
@property (nonatomic) long long ctcBlankLabelIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSURL *modelURL;
@property (nonatomic, retain) NSNumber *outputFormatVersion;
@property (nonatomic, retain) NSDictionary *outputShape;
@property (nonatomic, retain) NSNumber *outputWidthDownscale;
@property (nonatomic, retain) NSNumber *outputWidthOffset;
@property (readonly) Class superclass;

+ (id)defaultURLOfModelInThisBundle;

- (void).cxx_destruct;
- (struct TextBoxesOffsets { double x1; double x2; double x3; double x4; })characterBoxesOffsets;
- (int*)codemapArray;
- (unsigned long long)codemapSize;
- (id)configuration;
- (long long)ctcBlankLabelIndex;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)inputBatchFromLineRegions:(id)arg1 image:(id)arg2 regionWidth:(double)arg3 configuration:(id)arg4 rectifier:(id)arg5;
- (id)modelURL;
- (id)outputFormatVersion;
- (id)outputShape;
- (id)outputWidthDownscale;
- (id)outputWidthOffset;
- (id)populateInputBatchData:(float*)arg1 lineRegions:(id)arg2 image:(id)arg3 batchSize:(long long)arg4 width:(double)arg5 configuration:(id)arg6 rectifier:(id)arg7;
- (id)predictFromInputs:(id)arg1 error:(id*)arg2;
- (bool)preheatWithError:(id*)arg1;
- (void)releaseIntermediateBuffers;
- (void)setCodemapArray:(int*)arg1;
- (void)setCodemapSize:(unsigned long long)arg1;
- (void)setCtcBlankLabelIndex:(long long)arg1;
- (void)setOutputFormatVersion:(id)arg1;
- (void)setOutputShape:(id)arg1;
- (void)setOutputWidthDownscale:(id)arg1;
- (void)setOutputWidthOffset:(id)arg1;
- (bool)supportCharacterBoxes;
- (struct TextBoxesOffsets { double x1; double x2; double x3; double x4; })wordBoxesOffsets;

@end
