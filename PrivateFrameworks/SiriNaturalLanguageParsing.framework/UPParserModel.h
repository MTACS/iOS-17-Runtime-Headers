
@interface UPParserModel : NSObject {
    UPLoadedModelConfiguration * __loadedModelConfiguration;
    UPUsoSerializer * __usoSerializer;
    UPModelIdentifier * _identifier;
}

@property (nonatomic, readonly) UPLoadedModelConfiguration *_loadedModelConfiguration;
@property (readonly) UPUsoSerializer *_usoSerializer;
@property (nonatomic, readonly) UPModelIdentifier *identifier;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly) UPPreprocessor *preprocessor;

+ (id)modelWithLoadedModelConfiguration:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_candidateForBeamSequence:(const void*)arg1 utterance:(const void*)arg2 outputTokens:(const void*)arg3 resolver:(void*)arg4 sharedEntityResolution:(id)arg5;
- (id)_candidateForUtterance:(const void*)arg1 probability:(float)arg2 labelledSpans:(const void*)arg3 intent:(id)arg4 sharedEntityResolution:(id)arg5;
- (id)_loadedModelConfiguration;
- (id)_resultFromInferenceResult:(const void*)arg1 query:(id)arg2 outputTokens:(const void*)arg3 resolver:(void*)arg4 sharedEntityResolution:(id)arg5;
- (id)_usoSerializer;
- (struct UPInferenceResult { struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_1_1_1; struct vector<float, std::allocator<float>> { float *x_2_2_1; float *x_2_2_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_3_1; } x_2_2_3; } x_1_1_2; } x1; struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_2_1_1; struct vector<float, std::allocator<float>> { float *x_2_2_1; float *x_2_2_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_3_1; } x_2_2_3; } x_2_1_2; } x2; struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; struct vector<float, std::allocator<float>> { float *x_2_2_1; float *x_2_2_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_3_1; } x_2_2_3; } x_3_1_2; } x3; })forwardWithSpanLabels:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_1_1; unsigned long long *x_1_1_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; })arg1 embeddings:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_1_1; unsigned long long *x_1_1_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; })arg2 utterance:(id)arg3;
- (id)identifier;
- (id)initWithLoadedModelConfiguration:(id)arg1;
- (id)locale;
- (id)predictionFromQuery:(id)arg1 error:(id*)arg2;
- (id)predictionFromQuery:(id)arg1 preprocessorOutput:(id)arg2 error:(id*)arg3;
- (id)preprocessor;

@end
