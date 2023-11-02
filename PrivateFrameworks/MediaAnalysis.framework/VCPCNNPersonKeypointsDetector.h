
@interface VCPCNNPersonKeypointsDetector : NSObject {
    float * _inputData;
    int  _inputHeight;
    int  _inputWidth;
    int  _maxNumRegions;
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

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withBox:(id)arg2 keypoints:(id)arg3;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5;
- (void)dealloc;
- (id)initWithForceCPU:(bool)arg1 sharedModel:(bool)arg2;
- (int)parseKeypoints:(id)arg1;

@end
