
@interface SCNRendererViewPoint : NSObject {
    MTLRenderPassDescriptor * _passDescriptor;
    struct SCNMatrix4 { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _projectionMatrix;
    struct SCNMatrix4 { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _viewMatrix;
    struct { 
        double originX; 
        double originY; 
        double width; 
        double height; 
        double znear; 
        double zfar; 
    }  _viewport;
}

@property (nonatomic, retain) MTLRenderPassDescriptor *passDescriptor;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } projectionMatrix;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } simdProjectionMatrix;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } simdViewMatrix;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } viewMatrix;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; } viewport;

- (void)dealloc;
- (id)passDescriptor;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })projectionMatrix;
- (void)setPassDescriptor:(id)arg1;
- (void)setProjectionMatrix:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setSimdProjectionMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSimdViewMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setViewMatrix:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })simdProjectionMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })simdViewMatrix;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })viewMatrix;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })viewport;

@end
