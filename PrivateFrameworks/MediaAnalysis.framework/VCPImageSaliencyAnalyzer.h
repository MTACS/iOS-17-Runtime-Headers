
@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer {
    int  _chunk;
    int  _maxNumRegions;
    bool  _prune;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _region;
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
    float  _score;
}

+ (id)analyzerWith:(int)arg1 prune:(bool)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 landscape:(bool)arg4 results:(id)arg5;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (float)computeScore:(float*)arg1 width:(int)arg2 height:(int)arg3 posX:(int)arg4 posY:(int)arg5;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2 withChunk:(int)arg3;
- (int)generateSalientRegion:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (int)getSalientRegions:(id /* block */)arg1;
- (id)initWithMaxNumRegions:(int)arg1 prune:(bool)arg2;
- (float)outputScaling;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (int)processTile:(struct __CVBuffer { }*)arg1 results:(id)arg2 cancel:(id /* block */)arg3;
- (id)pruneRegions:(id)arg1;
- (int)saliencyDetection:(struct __CVBuffer { }*)arg1 salientRegions:(id)arg2 cancel:(id /* block */)arg3;
- (int)scaleImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2 withWidth:(int)arg3 andHeight:(int)arg4;

@end
