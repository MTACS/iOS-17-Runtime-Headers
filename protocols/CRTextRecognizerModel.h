
@protocol CRTextRecognizerModel <NSObject, CRTextRecognizerModelInputProvider>

@required

- (struct TextBoxesOffsets { double x1; double x2; double x3; double x4; })characterBoxesOffsets;
- (int*)codemapArray;
- (long long)ctcBlankLabelIndex;
- (id)initWithConfiguration:(CRNeuralRecognizerConfiguration *)arg1 error:(id*)arg2;
- (NSArray *)predictFromInputs:(NSArray *)arg1 error:(id*)arg2;
- (bool)preheatWithError:(id*)arg1;
- (void)releaseIntermediateBuffers;
- (void)setCodemapArray:(int*)arg1;
- (void)setCtcBlankLabelIndex:(long long)arg1;
- (bool)supportCharacterBoxes;
- (struct TextBoxesOffsets { double x1; double x2; double x3; double x4; })wordBoxesOffsets;

@end
