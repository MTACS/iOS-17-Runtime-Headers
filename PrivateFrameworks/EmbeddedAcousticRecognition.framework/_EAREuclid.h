
@interface _EAREuclid : NSObject {
    struct unique_ptr<quasar::TextEmbedder, std::default_delete<quasar::TextEmbedder>> { 
        struct __compressed_pair<quasar::TextEmbedder *, std::default_delete<quasar::TextEmbedder>> { 
            struct TextEmbedder {} *__value_; 
        } __ptr_; 
    }  _embedder;
    struct unique_ptr<quasar::NearestNeighborSearch, std::default_delete<quasar::NearestNeighborSearch>> { 
        struct __compressed_pair<quasar::NearestNeighborSearch *, std::default_delete<quasar::NearestNeighborSearch>> { 
            struct NearestNeighborSearch {} *__value_; 
        } __ptr_; 
    }  _nearestNeighbors;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findClosestStrings:(id)arg1;
- (id)findClosestStrings:(id)arg1 numberOfNeighbors:(long long)arg2;
- (id)findClosestStringsHelper:(id)arg1 vector:(struct optional<kaldi::Matrix<float>> { union { BOOL x_1_1_1; struct Matrix<float> { float *x_2_2_1; int x_2_2_2; int x_2_2_3; int x_2_2_4; int x_2_2_5; void *x_2_2_6; bool x_2_2_7; } x_1_1_2; } x1; bool x2; })arg2 numberOfNeighbors:(long long)arg3;
- (id)initWithConfiguration:(id)arg1 gModelConfigFile:(id)arg2 embeddingDims:(int)arg3 str2numFile:(id)arg4 searchMatrixFilename:(id)arg5 tableFilename:(id)arg6;

@end
