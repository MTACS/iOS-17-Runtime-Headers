
@interface VCPCNNGazeAnalysis : NSObject {
    float * _inputData;
    VCPCNNModelEspresso * _modelEspresso;
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

+ (id)sharedModel:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)dealloc;
- (int)detectEyeOpennessForFace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBuffer:(struct __CVBuffer { }*)arg2 eyeOpenness:(bool*)arg3;
- (id)init;

@end
