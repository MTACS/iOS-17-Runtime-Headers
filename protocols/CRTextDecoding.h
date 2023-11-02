
@protocol CRTextDecoding <NSObject>

@required

- (bool)decodeOutput:(NSObject<CRTextRecognizerModelOutput> *)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
- (id)initWithConfiguration:(CRNeuralRecognizerConfiguration *)arg1 model:(NSObject<CRTextRecognizerModel> *)arg2 error:(id*)arg3;
- (bool)shouldDecodeWithLM;

@optional

- (void)computeLanguageRecognitionForSession:(NSObject<CRTextDecodingLanguageRecognitionSession> *)arg1 output:(NSObject<CRTextRecognizerModelOutput> *)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (NSObject<CRTextDecodingLanguageRecognitionSession> *)newLanguageRecognizerSession;
- (void)releaseUnusedResources;

@end
