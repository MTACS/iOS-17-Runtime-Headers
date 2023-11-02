
@interface PXGMetalRenderState : NSObject {
    NSArray * _captureSpriteTextures;
    PXGMetalRenderPassState * _currentRenderPassState;
    <MTLDevice> * _device;
    const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } * _originalSpriteGeometries;
    <MTLBuffer> * _resizableCapInsetsBuffer;
    <MTLBuffer> * _spriteEntitiesBuffer;
    <MTLBuffer> * _spriteGeometriesBuffer;
    const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; } * _spriteInfos;
    <MTLBuffer> * _spriteStylesBuffer;
    NSArray * _textures;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } viewMatrix; 
        struct { 
            void*columns[4]; 
        } viewProjectionMatrix; 
        void*renderOrigin; 
    }  _uniforms;
}

@property (nonatomic, retain) NSArray *captureSpriteTextures;
@property (nonatomic, readonly) PXGMetalRenderPassState *currentRenderPassState;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic) const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*originalSpriteGeometries;
@property (nonatomic, readonly) <MTLBuffer> *resizableCapInsetsBuffer;
@property (nonatomic, readonly) const struct { unsigned int x1; }*spriteEntities;
@property (nonatomic, readonly) <MTLBuffer> *spriteEntitiesBuffer;
@property (nonatomic, readonly) const struct { float x1; float x2; float x3; }*spriteGeometries;
@property (nonatomic, readonly) <MTLBuffer> *spriteGeometriesBuffer;
@property (nonatomic) const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*spriteInfos;
@property (nonatomic, readonly) const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*spriteStyles;
@property (nonatomic, readonly) <MTLBuffer> *spriteStylesBuffer;
@property (nonatomic, retain) NSArray *textures;
@property (nonatomic, readonly) struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; float x3; }*uniforms;

- (void).cxx_destruct;
- (id)_resizedBufferIfNeeded:(id)arg1 neededLength:(long long)arg2;
- (id)captureSpriteTextures;
- (id)currentRenderPassState;
- (id)description;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)originalSpriteGeometries;
- (void)prepareForCommit;
- (void)prepareForReuse;
- (id)renderPassStateForSpriteCount:(long long)arg1;
- (id)resizableCapInsetsBuffer;
- (struct { float x1; float x2; float x3; float x4; }*)resizableCapInsetsBufferWithCount:(long long)arg1;
- (void)setCaptureSpriteTextures:(id)arg1;
- (void)setOriginalSpriteGeometries:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg1;
- (void)setSpriteInfos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg1;
- (void)setTextures:(id)arg1;
- (const struct { unsigned int x1; }*)spriteEntities;
- (id)spriteEntitiesBuffer;
- (struct { unsigned int x1; }*)spriteEntitiesBufferWithCount:(long long)arg1;
- (const struct { float x1; float x2; float x3; }*)spriteGeometries;
- (id)spriteGeometriesBuffer;
- (struct { float x1; float x2; float x3; }*)spriteGeometriesBufferWithCount:(long long)arg1;
- (const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)spriteInfos;
- (const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)spriteStyles;
- (id)spriteStylesBuffer;
- (struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)spriteStylesBufferWithCount:(long long)arg1;
- (id)textures;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; float x3; }*)uniforms;

@end
