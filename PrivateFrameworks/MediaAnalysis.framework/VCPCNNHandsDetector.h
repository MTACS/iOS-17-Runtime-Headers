
@interface VCPCNNHandsDetector : NSObject {
    int  _cnnInputHeight;
    int  _cnnInputWidth;
    float * _inputData;
    int  _maxNumRegions;
    VCPCNNModelEspresso * _modelEspresso;
    int  _numClass;
    NSArray * _outputNames;
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
}

+ (id)detector:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 inputConfig:(id)arg4 revision:(int)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2;
- (int)createModelWithResConfig:(id)arg1;
- (void)dealloc;
- (int)drawLine:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 point0:(struct CGPoint { double x1; double x2; })arg5 point1:(struct CGPoint { double x1; double x2; })arg6 drawPoint:(int)arg7;
- (int)drawRectangle:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 keypoints:(struct CGPoint { double x1; double x2; }*)arg5;
- (int)generateHandsBoxes:(id)arg1;
- (int)generateHandsRegions:(const void*)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3;
- (int)handsDetection:(struct __CVBuffer { }*)arg1 handsRegions:(id)arg2 cancel:(id /* block */)arg3;
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 inputConfig:(id)arg4 revision:(int)arg5;
- (void)nonMaxSuppression:(id)arg1;
- (int)retrieveBoxes:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float)arg5;
- (int)updateMaxNumRegions:(int)arg1;
- (int)updateModelWithResConfig:(id)arg1;

@end
