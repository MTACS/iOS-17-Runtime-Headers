
@interface CHCTCRecognitionModel : CHRecurrentNeuralNetworkCoreML {
    NSOrderedSet * __stringCodeMap;
    long long  _blankIndex;
    NSString * _characterProbabilityOutputName;
    struct CHCodeMap { char *x1; unsigned long long x2; unsigned int *x3; unsigned int x4; } * _codeMap;
    long long  _cosAlphaFeatureIndex;
    struct CVNLPTextDecodingPruningPolicy { 
        long long strategy; 
        bool shouldSort; 
        float threshold; 
        unsigned int maxNumberOfCandidates; 
    }  _decodingPruningPolicy;
    NSString * _directionalFeaturesInputName;
    double  _distMean;
    double  _distStd;
    long long  _distanceFeatureIndex;
    struct unique_ptr<CoreHandwriting::FeatureExtractionProcessor, std::default_delete<CoreHandwriting::FeatureExtractionProcessor>> { 
        struct __compressed_pair<CoreHandwriting::FeatureExtractionProcessor *, std::default_delete<CoreHandwriting::FeatureExtractionProcessor>> { 
            struct FeatureExtractionProcessor {} *__value_; 
        } __ptr_; 
    }  _featureExtractor;
    long long  _gapFeatureIndex;
    double  _interpointDistance;
    bool  _normalizeFeatures;
    struct unique_ptr<CoreHandwriting::PreprocessingManager, std::default_delete<CoreHandwriting::PreprocessingManager>> { 
        struct __compressed_pair<CoreHandwriting::PreprocessingManager *, std::default_delete<CoreHandwriting::PreprocessingManager>> { 
            struct PreprocessingManager {} *__value_; 
        } __ptr_; 
    }  _preprocessor;
    long long  _pseudospaceIndex;
    long long  _sequenceCompression;
    bool  _shouldUseArabicVisualOrderFeatureExtraction;
    bool  _shouldUseCPPFeatureExtraction;
    bool  _shouldUseStrokeDirectionFeature;
    long long  _sinAlphaFeatureIndex;
    long long  _spaceIndex;
    unsigned long long  _strokeOrdering;
}

@property (nonatomic, readonly) long long blankIndex;
@property (nonatomic, readonly) NSString *characterProbabilityOutputName;
@property (nonatomic, readonly) struct CHCodeMap { char *x1; unsigned long long x2; unsigned int *x3; unsigned int x4; }*codeMap;
@property (nonatomic, readonly) long long cosAlphaFeatureIndex;
@property (nonatomic) struct CVNLPTextDecodingPruningPolicy { long long x1; bool x2; float x3; unsigned int x4; } decodingPruningPolicy;
@property (nonatomic, readonly) NSString *directionalFeaturesInputName;
@property (nonatomic) double distMean;
@property (nonatomic) double distStd;
@property (nonatomic, readonly) long long distanceFeatureIndex;
@property (nonatomic, readonly) long long gapFeatureIndex;
@property (nonatomic) double interpointDistance;
@property (nonatomic) bool normalizeFeatures;
@property (nonatomic, readonly) long long pseudospaceIndex;
@property (nonatomic, readonly) long long sequenceCompression;
@property (nonatomic) bool shouldUseArabicVisualOrderFeatureExtraction;
@property (nonatomic) bool shouldUseCPPFeatureExtraction;
@property (nonatomic) bool shouldUseStrokeDirectionFeature;
@property (nonatomic, readonly) long long sinAlphaFeatureIndex;
@property (nonatomic, readonly) long long spaceIndex;
@property (nonatomic) unsigned long long strokeOrdering;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4;
- (long long)blankIndex;
- (id)characterProbabilityOutputName;
- (struct CHCodeMap { char *x1; unsigned long long x2; unsigned int *x3; unsigned int x4; }*)codeMap;
- (long long)cosAlphaFeatureIndex;
- (void)dealloc;
- (struct CVNLPTextDecodingPruningPolicy { long long x1; bool x2; float x3; unsigned int x4; })decodingPruningPolicy;
- (id)directionalFeaturesInputName;
- (double)distMean;
- (double)distStd;
- (long long)distanceFeatureIndex;
- (void)enumerateActivationsInResultArray:(id)arg1 indexArray:(id)arg2 block:(id /* block */)arg3;
- (id)featureProviderForDrawing:(id)arg1 initialVectorAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 normalizeFeatures:(bool)arg3 padFeatures:(bool)arg4 outStrokeEndings:(void*)arg5 outInputSequenceLength:(long long*)arg6 outOutputSequenceLength:(long long*)arg7;
- (long long)gapFeatureIndex;
- (double)highestSymbolActivationWithResultArray:(id)arg1 indexArray:(id)arg2 symbol:(id*)arg3;
- (id)initWithModelName:(id)arg1 decodingPruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x1; bool x2; float x3; unsigned int x4; })arg2;
- (double)interpointDistance;
- (bool)normalizeFeatures;
- (long long)pseudospaceIndex;
- (bool)reachesActivationThreshold:(double)arg1 inCharacterSet:(id)arg2 resultArray:(id)arg3 indexArray:(id)arg4;
- (id)recognizeDrawing:(id)arg1 minimumDrawingSize:(struct CGSize { double x1; double x2; })arg2 initialVectorAnchorPoint:(struct CGPoint { double x1; double x2; })arg3 activeCharacterSet:(id)arg4 outStrokeIndexMapping:(void*)arg5 outStrokeEndings:(void*)arg6 outFallbackSymbol:(id*)arg7 outFallbackSymbolScore:(double*)arg8;
- (long long)sequenceCompression;
- (void)setDecodingPruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x1; bool x2; float x3; unsigned int x4; })arg1;
- (void)setDistMean:(double)arg1;
- (void)setDistStd:(double)arg1;
- (void)setInterpointDistance:(double)arg1;
- (void)setNormalizeFeatures:(bool)arg1;
- (void)setShouldUseArabicVisualOrderFeatureExtraction:(bool)arg1;
- (void)setShouldUseCPPFeatureExtraction:(bool)arg1;
- (void)setShouldUseStrokeDirectionFeature:(bool)arg1;
- (void)setStrokeOrdering:(unsigned long long)arg1;
- (bool)shouldUseArabicVisualOrderFeatureExtraction;
- (bool)shouldUseCPPFeatureExtraction;
- (bool)shouldUseStrokeDirectionFeature;
- (long long)sinAlphaFeatureIndex;
- (long long)spaceIndex;
- (unsigned long long)strokeOrdering;
- (void)updateActivationsWithActiveCharacterSet:(id)arg1 resultArray:(id)arg2 indexArray:(id)arg3;

@end
