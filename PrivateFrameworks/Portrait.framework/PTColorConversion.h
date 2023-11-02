
@interface PTColorConversion : NSObject {
    <MTLComputePipelineState> * _convertRGB;
    <MTLComputePipelineState> * _convertRGBToYUV;
    <MTLComputePipelineState> * _convertYUVToRGB;
    PTMetalContext * _metalContext;
}

+ (struct half3x4 { struct half4 { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1[4]; } x1[3]; })colorMatrixAndBiasFor:(id)arg1 toRGB:(bool)arg2;
+ (struct half3x4 { struct half4 { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1[4]; } x1[3]; })colorMatrixAndBiasFor:(id)arg1 toRGB:(bool)arg2 fullRange:(bool)arg3 colorYCbCrDepth:(long long)arg4;
+ (struct bool2 { bool x1; bool x2; })getChromaFactor2BooleanFromPTTexture:(id)arg1;
+ (void)getChromaOffsetFromPTTexture:(id)arg1;
+ (int)getColorTransferFunctionAsEnum:(id)arg1 linearToEncoded:(bool)arg2;

- (void).cxx_destruct;
- (int)convertRGB:(id)arg1 inRGBA:(id)arg2 outRGBA:(id)arg3 colorTransferFunction:(int)arg4;
- (int)convertRGB:(id)arg1 inRGBA:(id)arg2 outRGBA:(id)arg3 colorTransferFunction:(int)arg4 rotateCCW:(bool)arg5;
- (int)convertRGBLinearFromPTTexture:(id)arg1 inPTTexture:(id)arg2 outRGBA:(id)arg3;
- (int)convertRGBLinearToPTTexture:(id)arg1 inRGBA:(id)arg2 outPTTexture:(id)arg3;
- (int)convertRGBtoYUV:(id)arg1 inRGBA:(id)arg2 outLuma:(id)arg3 outChroma:(id)arg4 colorTransferFunction:(int)arg5 colorYCbCrMatrix:(id)arg6 colorYCbCrFullRange:(bool)arg7 colorYCbCrDepthOut:(long long)arg8;
- (int)convertYUVtoRGB:(id)arg1 inLuma:(id)arg2 inChroma:(id)arg3 outRGBA:(id)arg4 colorTransferFunction:(int)arg5 colorYCbCrMatrix:(id)arg6 colorYCbCrFullRange:(bool)arg7 colorYCbCrDepthIn:(long long)arg8;
- (id)initWithMetalContext:(id)arg1;

@end
