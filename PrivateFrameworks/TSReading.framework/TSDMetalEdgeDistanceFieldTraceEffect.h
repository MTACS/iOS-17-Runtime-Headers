
@interface TSDMetalEdgeDistanceFieldTraceEffect : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _bufferSize;
    bool  _canDraw;
    bool  _didTeardown;
    TSDMetalTextureInfo * _edgeDistanceFieldTextureInfo;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*Color; 
    }  _fragmentUniforms;
    bool  _isValid;
    <TSDAnimationRandomGenerator> * _randomGenerator;
    struct CGPoint { 
        double x; 
        double y; 
    }  _randomStrokePoint;
    TSDMetalShader * _shader;
    NSArray * _strokeLineSegment;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _textureEdgeInsetsAdjustmentMatrix;
    TSDMetalTextureInfo * _traceTextureInfo;
    long long  _traceTextureMaxValue;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } mvpMatrix; 
    }  _vertexUniforms;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewportRect;
    struct __CFArray { } * _zeroesArray;
}

@property (nonatomic, readonly) TSDMetalTextureInfo *edgeDistanceFieldTextureInfo;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) <TSDAnimationRandomGenerator> *randomGenerator;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } randomStrokePoint;
@property (nonatomic, readonly) TSDMetalShader *shader;
@property (nonatomic, readonly) NSArray *strokeLineSegment;
@property (nonatomic, readonly) TSDMetalTextureInfo *traceTextureInfo;

+ (void)didEndWithDevice:(id)arg1;
+ (void)willBeginWithDevice:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)drawWithContext:(id)arg1 andBuffer:(id)arg2 atPercent:(double)arg3 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg4 opacity:(double)arg5 color:(struct { float x1; float x2; float x3; float x4; })arg6 strokeFadeHardnessLeading:(double)arg7 strokeFadeHardnessTrailing:(double)arg8;
- (id)edgeDistanceFieldTextureInfo;
- (id)initWithTR:(id)arg1 strokeWidth:(double)arg2 downsampleScale:(double)arg3 clockwise:(bool)arg4 context:(id)arg5 randomGenerator:(id)arg6 capabilities:(id)arg7;
- (bool)isValid;
- (void)p_addNearbyPixelsToArray:(struct __CFArray { }*)arg1 pixel:(struct CGPoint { double x1; double x2; })arg2 edgeDataBuffer:(float*)arg3 dataBuffer:(char *)arg4 tempDataBuffer:(char *)arg5 localMaximumLookupBuffer:(bool*)arg6 bufferSize:(struct CGSize { double x1; double x2; })arg7;
- (void)p_fillFloatBuffer:(float*)arg1 withRGBAData:(char *)arg2 bufferSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)p_generateTraceTextureInfoWithStrokeWidth:(double)arg1 clockwise:(bool)arg2 context:(id)arg3 randomGenerator:(id)arg4;
- (id)p_houghTransformWithZeroes:(struct __CFArray { }*)arg1 bufferSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint { double x1; double x2; })arg1 inBufferSize:(struct CGSize { double x1; double x2; })arg2;
- (id)randomGenerator;
- (struct CGPoint { double x1; double x2; })randomStrokePoint;
- (id)shader;
- (id)strokeLineSegment;
- (void)teardown;
- (id)traceTextureInfo;

@end
