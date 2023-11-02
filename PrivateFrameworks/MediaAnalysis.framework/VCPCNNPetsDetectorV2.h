
@interface VCPCNNPetsDetectorV2 : NSObject {
    int  _cnnInputHeight;
    int  _cnnInputWidth;
    float * _inputData;
    int  _maxNumRegions;
    VCPCNNModelEspresso * _modelEspresso;
    int  _numClass;
    NSArray * _outputNames;
    NSString * _resConfig;
    int  _revision;
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
    int  _srcHeight;
    int  _srcWidth;
}

+ (id)detector:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 revision:(int)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)configForAspectRatio:(id)arg1;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)generatePetsBoxes:(id)arg1;
- (int)generatePetsRegions:(const void*)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3;
- (long long)getClosestAspectRatio:(id)arg1;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 revision:(int)arg4;
- (void)nonMaxSuppression:(id)arg1;
- (int)petsDetection:(struct __CVBuffer { }*)arg1 petsRegions:(id)arg2 cancel:(id /* block */)arg3;
- (int)retrieveBoxes:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float)arg5;

@end
