
@interface VCPImageHumanActionAnalyzer : VCPImageAnalyzer {
    NSArray * _existingResults;
    float * _inputData;
    VCPCNNModelEspresso * _model;
    PHFetchResult * _phFaces;
    NSMutableArray * _results;
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

+ (id)sharedModel:(id)arg1 outputNames:(id)arg2 properties:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)aggregateWith:(id)arg1;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)dealloc;
- (id)initWithPHFaces:(id)arg1 existingResults:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectFromPHFace:(id)arg1;

@end
