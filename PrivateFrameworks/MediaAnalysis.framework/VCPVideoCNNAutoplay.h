
@interface VCPVideoCNNAutoplay : VCPVideoCNNTask {
    float * _analysisInput;
    NSArray * _inputNames;
    struct vector<float *, std::allocator<float *>> { 
        float **__begin_; 
        float **__end_; 
        struct __compressed_pair<float **, std::allocator<float *>> { 
            float **__value_; 
        } __end_cap_; 
    }  _inputsData;
    VCPCNNModelEspresso * _modelEspresso;
    NSMutableDictionary * _settlingGatingResults;
    bool  _skip;
    NSMutableDictionary * _summaryResults;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)init;
- (int)loadAnalysisResults:(id)arg1 audioResults:(id)arg2;
- (id)results;
- (int)run:(id)arg1;

@end
