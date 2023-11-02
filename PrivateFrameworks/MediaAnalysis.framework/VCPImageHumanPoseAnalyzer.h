
@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer {
    bool  _flushModel;
    bool  _forceCPU;
    float * _heatmapNms;
    float * _inputData;
    int  _inputHeight;
    int  _inputWidth;
    VCPCNNModelEspresso * _modelEspresso;
    NSURL * _netFileUrl;
    NSMutableArray * _persons;
    NSString * _resConfig;
    NSMutableArray * _results;
    bool  _saveKeypoints;
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
    bool  _sharedModel;
    bool  _trackingMode;
}

@property bool trackingMode;

+ (bool)saveKeypoints;
+ (id)sharedModel:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)configForAspectRatio:(id)arg1;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2 withChannels:(int)arg3;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;
- (int)createModelWithHeight:(int)arg1 srcWidth:(int)arg2;
- (void)dealloc;
- (int)generateHumanPose:(struct __CVBuffer { }*)arg1;
- (id)init;
- (id)initWithKeypointsOption:(bool)arg1 aspectRatio:(id)arg2 lightweight:(bool)arg3 forceCPU:(bool)arg4 sharedModel:(bool)arg5 flushModel:(bool)arg6;
- (int)parsePersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned int*)arg3;
- (int)processPersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)reInitModel;
- (void)setTrackingMode:(bool)arg1;
- (bool)trackingMode;
- (int)updateModelForAspectRatio:(id)arg1;

@end
