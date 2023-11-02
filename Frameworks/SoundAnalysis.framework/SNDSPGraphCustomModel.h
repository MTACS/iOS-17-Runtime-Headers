
@interface SNDSPGraphCustomModel : NSObject {
    struct unique_ptr<DSPGraph::Graph, std::default_delete<DSPGraph::Graph>> { 
        struct __compressed_pair<DSPGraph::Graph *, std::default_delete<DSPGraph::Graph>> { 
            struct Graph {} *__value_; 
        } __ptr_; 
    }  _graph;
    MLMultiArrayConstraint * _inputConstraint;
    MLModelDescription * _modelDescription;
    MLMultiArray * _modelOutput;
    MLMultiArrayConstraint * _outputConstraint;
    id /* block */  _preProcessCallback;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _scratchFloatSpace;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
