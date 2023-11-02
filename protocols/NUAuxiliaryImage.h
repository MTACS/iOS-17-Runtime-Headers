
@protocol NUAuxiliaryImage <NSObject>

@required

- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (long long)auxiliaryImageType;
- (struct CGImage { }*)cgImageRef;
- (struct __CVBuffer { }*)cvPixelBufferRef;
- (NSDictionary *)dictionaryRepresentation;
- (NSDictionary *)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (struct CGImageMetadata { }*)metadata;
- (unsigned int)pixelFormatType;

@optional

- (AVDepthData *)underlyingAVDepthData;
- (AVPortraitEffectsMatte *)underlyingAVPortraitEffectsMatte;
- (AVSemanticSegmentationMatte *)underlyingAVSemanticSegmentationMatte;

@end
