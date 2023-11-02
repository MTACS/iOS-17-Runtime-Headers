
@interface RBMetalRenderState : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _CTM;
    float  _alpha;
    int  _blendMode;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    }  _bounds;
    <MTLCommandBuffer> * _commandBuffer;
    MTLRenderPassDescriptor * _descriptor;
    <MTLRenderCommandEncoder> * _encoder;
    unsigned int  _flags;
    unsigned long long  _formatKey;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } CTM;
@property (nonatomic) float alpha;
@property (nonatomic) int blendMode;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } bounds;
@property (nonatomic, retain) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, retain) MTLRenderPassDescriptor *descriptor;
@property (nonatomic, retain) <MTLRenderCommandEncoder> *encoder;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long formatKey;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CTM;
- (float)alpha;
- (int)blendMode;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })bounds;
- (id)commandBuffer;
- (void)dealloc;
- (id)descriptor;
- (id)encoder;
- (unsigned int)flags;
- (unsigned long long)formatKey;
- (void)setAlpha:(float)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setBounds:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setCommandBuffer:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setEncoder:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFormatKey:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
