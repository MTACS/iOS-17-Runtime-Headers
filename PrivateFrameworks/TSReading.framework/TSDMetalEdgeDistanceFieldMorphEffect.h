
@interface TSDMetalEdgeDistanceFieldMorphEffect : NSObject {
    bool  _didSetupTextureAdjustment;
    bool  _didTeardown;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _incomingTextBounds;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _incomingTextColor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _incomingTextureEdgeInsetsAdjustmentMatrix;
    TSDMetalTextureInfo * _incomingTextureInfo;
    <MTLDevice> * _metalDevice;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outgoingTextBounds;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _outgoingTextColor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _outgoingTextureEdgeInsetsAdjustmentMatrix;
    TSDMetalTextureInfo * _outgoingTextureInfo;
    struct { 
        double skew; 
        double skewOffset; 
        double scale; 
    }  _textureAdjustment;
    bool  isTextStyleIdenticalExceptSize;
}

@property (nonatomic, readonly) TSDMetalTextureInfo *incomingTextureInfo;
@property (nonatomic) bool isTextStyleIdenticalExceptSize;
@property (nonatomic, readonly) TSDMetalTextureInfo *outgoingTextureInfo;

+ (void)didEndWithDevice:(id)arg1;
+ (void)willBeginWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 motionBlur:(bool)arg3 motionBlurIgnoreTextureOpacity:(bool)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWith:(id)arg1 morphPercent:(double)arg2 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3 opacity:(double)arg4 generateTextureMatrices:(bool)arg5;
- (void)encodeWith:(id)arg1 morphPercent:(double)arg2 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3 opacity:(double)arg4 outgoingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 incomingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6;
- (id)incomingTextureInfo;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2 metalContext:(id)arg3 motionBlur:(bool)arg4 motionBlurIgnoreTextureOpacity:(bool)arg5 capabilities:(id)arg6;
- (id)initWithOutgoingTextureName:(id)arg1 outgoingTextureSize:(struct CGSize { double x1; double x2; })arg2 outgoingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outgoingColor:(struct { float x1; float x2; float x3; float x4; })arg4 incomingTextureName:(id)arg5 incomingTextureSize:(struct CGSize { double x1; double x2; })arg6 incomingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 incomingColor:(struct { float x1; float x2; float x3; float x4; })arg8 metalContext:(id)arg9 motionBlur:(bool)arg10 motionBlurIgnoreTextureOpacity:(bool)arg11 capabilities:(id)arg12;
- (bool)isTextStyleIdenticalExceptSize;
- (struct CGContext { }*)newContextFromTexture:(id)arg1;
- (id)outgoingTextureInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_affineTransformWithTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 textureSize:(struct CGSize { double x1; double x2; })arg2;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 toOutgoingScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg2 outgoingScanlineZeroes:(struct CGPoint { double x1; double x2; }*)arg3 incomingScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg4 incomingScanlineZeroes:(struct CGPoint { double x1; double x2; }*)arg5 samples:(unsigned long long)arg6;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 toOutgoingValue:(double)arg2 incomingValue:(double)arg3 sample:(unsigned long long)arg4 sampleCount:(unsigned long long)arg5;
- (bool)p_fillScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg1 scanlineMinMaxZeroes:(struct CGPoint { double x1; double x2; }*)arg2 samples:(unsigned long long)arg3 fromTexture:(id)arg4 textureSize:(struct CGSize { double x1; double x2; })arg5;
- (void)setIsTextStyleIdenticalExceptSize:(bool)arg1;
- (void)setupIfNecessary;
- (void)teardown;
- (struct { double x1; double x2; double x3; })textureMatchingTextureAdjustment;

@end
