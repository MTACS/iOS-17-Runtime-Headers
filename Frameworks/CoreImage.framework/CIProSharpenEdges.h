
@interface CIProSharpenEdges : CIFilter {
    NSNumber * inputEdgeScale;
    NSNumber * inputFalloff;
    CIImage * inputImage;
    NSNumber * inputSharpness;
}

+ (id)customAttributes;

- (id)_CIBlur1;
- (id)_CIBlur2;
- (id)_CIBlur4;
- (id)_CIConvertRGBtoY;
- (id)_CIEdgesPrep;
- (id)_CIFindEdges;
- (id)_CISharpenCombineEdges;
- (id)outputImage;

@end
