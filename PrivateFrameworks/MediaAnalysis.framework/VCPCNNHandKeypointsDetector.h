
@interface VCPCNNHandKeypointsDetector : NSObject {
    float  _mean;
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
    float  _std;
}

+ (id)detector:(bool)arg1 sharedModel:(bool)arg2 modelName:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5;
- (int)cvtHeatmaps2Keypoints:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 inHeight:(int)arg4 inWidth:(int)arg5 outChannel:(int)arg6 keypoints:(struct CGPoint { double x1; double x2; }*)arg7 keypointConfidence:(float*)arg8 offset:(float)arg9;
- (int)generateHandKeypoints:(struct CGPoint { double x1; double x2; }*)arg1 keypointConfidence:(float*)arg2 offset:(float)arg3;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 offset:(float*)arg5;
- (int)handKeypointsDetection:(struct __CVBuffer { }*)arg1 box:(id)arg2 keypoints:(struct CGPoint { double x1; double x2; })arg3 keypointConfidence:(float)arg4;

@end
