
@interface VCPVanishingPointDetector : NSObject {
    float * _confidenceMap;
    float * _edgeWeightMap;
    VCPGaborFilter * _gaborFilter;
    unsigned long long  _height;
    unsigned long long  _heightPadded;
    float * _image;
    long long  _offset;
    float * _orientationResponses;
    float * _orientionMap;
    float  _pixelMean;
    float  _pixelVar;
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
    long long  _stride;
    long long  _stridePadded;
    bool  _validDimension;
    unsigned long long  _width;
    unsigned long long  _widthPadded;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)averageOrientationResponses:(int)arg1 withCurrentMap:(float*)arg2;
- (int)calculateConfidence:(id)arg1 lineDistance:(float)arg2 vaninshingPoint:(struct CGPoint { double x1; double x2; })arg3 vanishingPointConfidence:(float*)arg4;
- (int)calculateOrientationResponses;
- (void)dealloc;
- (int)detect:(struct CGPoint { double x1; double x2; }*)arg1 withConfidence:(float*)arg2 dominantLine:(id*)arg3;
- (void)extractUsefulAreaFrom:(float*)arg1 to:(float*)arg2 withOffset:(unsigned long long)arg3 stridePadded:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6;
- (int)generateLineWeightMap:(id)arg1 weightMap:(float*)arg2;
- (int)generateOrientationMap;
- (id)initWithImage:(struct __CVBuffer { }*)arg1;
- (bool)isVerticalOrHorizontal:(int)arg1;
- (int)prepareImage:(struct __CVBuffer { }*)arg1;
- (int)searchVanishingPointandDominantLine:(float*)arg1 lineGroup:(id)arg2 vanishingPoint:(struct CGPoint { double x1; double x2; }*)arg3 vanishingPointConfidence:(float*)arg4 dominantLine:(id*)arg5;
- (void)smoothFiltering:(float*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (int)voteVanishingPoint:(float*)arg1;

@end