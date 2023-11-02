
@interface ANSTISPAlgorithmV1 : ANSTISPAlgorithm {
    ANSTISPAlgorithmConfiguration * _config;
    struct AcANSTContext { } * _det;
    struct { 
        unsigned int originalImageWidth; 
        unsigned int originalImageHeight; 
        unsigned int networkInputWidth; 
        unsigned int networkInputHeight; 
        int imageOrientation; 
        unsigned char restart; 
        unsigned char ratioOfFPS; 
        unsigned char initWithDetResults; 
        struct { 
            float x; 
            float y; 
            float width; 
            float height; 
        } besCropInfo; 
    }  _detControl;
    struct { 
        struct { 
            unsigned int height; 
            unsigned int width; 
            unsigned int channels; 
            int pixelFormat; 
            float scale; 
            float bias; 
        } netInputBufferDesc[2]; 
        struct { 
            unsigned int height; 
            unsigned int width; 
            unsigned int channels; 
            int pixelFormat; 
            float scale; 
            float bias; 
        } netOutputBufferDescs[25]; 
        BOOL netInputNames[2][64]; 
        BOOL netOutputNames[25][64]; 
        unsigned int maxResultCount; 
        unsigned int maxAssoCount; 
        unsigned int maxTrackCount; 
        float undetOverlapThreshold; 
        float oldObjOverlapThreshold; 
        float oldCrossClassObjOverlapThreshold; 
    }  _detParams;
    struct { 
        unsigned char data[202416]; 
    }  _detState;
    ANSTBaseNetworkEspresso * _network;
    NSMutableArray * _networkOutputNames;
    struct __CVPixelBufferPool { } * _outputSaliencyBufferPool;
    struct __CVPixelBufferPool { } * _outputSemanticBufferPool;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    bool  _readyForInference;
    struct __CVBuffer { } * _resizedInputBuffer;
}

+ (unsigned long long)_version;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_createCVPixelBuffer_Uint8_fromAcSaliencyHeatMap:(struct { unsigned char x1[3072]; unsigned short x2; unsigned short x3; unsigned short x4; unsigned char x5; })arg1;
- (struct __CVBuffer { }*)_createCVPixelBuffer_Uint8_fromEspressoBufferFloat32:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1;
- (id)_networkResult;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)networkInputBufferHeight;
- (unsigned int)networkInputBufferPixelFormat;
- (unsigned long long)networkInputBufferWidth;
- (bool)prepareWithError:(id*)arg1;
- (id)resultForPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(long long)arg2 error:(id*)arg3;
- (void)undoPrepareSideEffects;

@end
