
@interface UPCalibrationModel : NSObject {
    UPLoadedModelConfiguration * __loadedModelConfiguration;
}

@property (nonatomic, readonly) UPLoadedModelConfiguration *_loadedModelConfiguration;

+ (id)modelWithLoadedModelConfiguration:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_loadedModelConfiguration;
- (double)forwardWithSpanLabels:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_1_1; unsigned long long *x_1_1_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; })arg1 embeddings:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_1_1; unsigned long long *x_1_1_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; })arg2 utterance:(id)arg3;
- (id)initWithLoadedModelConfiguration:(id)arg1;
- (id)scoreFromQuery:(id)arg1 preprocessorOutput:(id)arg2 error:(id*)arg3;

@end
