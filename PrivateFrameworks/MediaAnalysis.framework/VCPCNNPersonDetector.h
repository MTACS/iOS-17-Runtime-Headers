
@interface VCPCNNPersonDetector : NSObject {
    float * _inputData;
    int  _inputHeight;
    int  _inputWidth;
    int  _maxNumRegions;
    VCPCNNModelEspresso * _modelEspresso;
    NSArray * _outputNames;
    struct vector<float *, std::allocator<float *>> { 
        float **__begin_; 
        float **__end_; 
        struct __compressed_pair<float **, std::allocator<float *>> { 
            float **__value_; 
        } __end_cap_; 
    }  _outputsData;
    struct Scaler { 
        struct CF<__CVPixelBufferPool *> { 
            struct __CVPixelBufferPool {} *value_; 
        } pool_; 
        int width_; 
        int height_; 
        unsigned int format_; 
        struct CF<OpaqueVTPixelTransferSession *> { 
            struct OpaqueVTPixelTransferSession {} *value_; 
        } transfer_session_; 
    }  _scaler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 inputHeight:(int)arg3 inputWidth:(int)arg4;
- (int)generatePersonBoxes:(id)arg1;
- (int)generatePersonRegions:(const void*)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3;
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 inputConfig:(id)arg4;
- (void)nonMaxSuppression:(id)arg1;
- (int)personDetection:(struct __CVBuffer { }*)arg1 personRegions:(id)arg2 cancel:(id /* block */)arg3;
- (int)retrieveBoxes:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float)arg5;

@end
