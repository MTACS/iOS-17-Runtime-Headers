
@interface VCPCNNPetsDetector : NSObject {
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

+ (id)detector:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2 withChannels:(int)arg3;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(id /* block */)arg3;
- (int)generatePetsRegions:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 faceBoxes:(id)arg5 maxNumRegions:(int)arg6;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (void)nonMaxSuppression:(id)arg1;
- (int)petsDetection:(struct __CVBuffer { }*)arg1 petsRegions:(id)arg2 petsFaceRegions:(id)arg3 cancel:(id /* block */)arg4;
- (int)postProcBoxes:(id)arg1 maxNumRegions:(int)arg2;

@end
