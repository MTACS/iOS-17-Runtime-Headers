
@interface PXGColorProgram : NSObject {
    <MTLTexture> * _TRCLUTs;
    <MTLTexture> * _colorCube;
    struct CGColorSpace { } * _destinationColorSpace;
    unsigned long long  _flags;
    PXGMetalRenderContext * _metalRenderContext;
    unsigned short  _numInputs;
    unsigned int  _num_trc_luts;
    unsigned int  _opcodes;
    unsigned short  _paramCount;
    <MTLBuffer> * _params;
    struct CGColorSpace { } * _sourceColorSpace;
    unsigned int * _trc_lut_widths;
}

@property (nonatomic, readonly) <MTLTexture> *TRCLUTs;
@property (nonatomic, readonly) <MTLTexture> *colorCube;
@property (nonatomic, readonly) struct CGColorSpace { }*destinationColorSpace;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) PXGMetalRenderContext *metalRenderContext;
@property (nonatomic, readonly) bool needsHDRToSDRConversion;
@property (nonatomic, readonly) unsigned short numInputs;
@property (nonatomic, readonly) unsigned int opcodes;
@property (nonatomic, readonly) unsigned short paramCount;
@property (nonatomic, readonly) <MTLBuffer> *params;
@property (nonatomic, readonly) struct CGColorSpace { }*sourceColorSpace;

- (void).cxx_destruct;
- (id)TRCLUTs;
- (bool)_compactProgramWithConversionInfo:(struct CGColorConversionInfo { }*)arg1 cubeSize:(int)arg2 cubeOnly:(bool)arg3;
- (bool)_generateProgram;
- (id)colorCube;
- (void)dealloc;
- (id)description;
- (struct CGColorSpace { }*)destinationColorSpace;
- (id)diagnosticDescription;
- (unsigned long long)flags;
- (id)init;
- (id)initWithContext:(id)arg1 sourceColorSpace:(struct CGColorSpace { }*)arg2 destinationColorSpace:(struct CGColorSpace { }*)arg3 flags:(unsigned long long)arg4;
- (id)metalRenderContext;
- (bool)needsHDRToSDRConversion;
- (unsigned short)numInputs;
- (unsigned int)opcodes;
- (unsigned short)paramCount;
- (id)params;
- (struct CGColorSpace { }*)sourceColorSpace;

@end
