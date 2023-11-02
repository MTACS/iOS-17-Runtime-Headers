
@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject <NUAuxiliaryImage> {
    long long  _auxiliaryImageType;
    AVSemanticSegmentationMatte * _avSemanticSegmentationMatte;
    struct CGImageMetadata { } * metadata;
}

@property (readonly) long long auxiliaryImageType;
@property (readonly) AVSemanticSegmentationMatte *avSemanticSegmentationMatte;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImageMetadata { }*metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (long long)auxiliaryImageType;
- (id)avSemanticSegmentationMatte;
- (struct CGImage { }*)cgImageRef;
- (struct __CVBuffer { }*)cvPixelBufferRef;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)arg1;
- (struct CGImageMetadata { }*)metadata;
- (unsigned int)pixelFormatType;
- (id)underlyingAVSemanticSegmentationMatte;

@end
