
@interface NUAuxiliaryImageAVPortraitEffectsMatte : NSObject <NUAuxiliaryImage> {
    long long  _auxiliaryImageType;
    AVPortraitEffectsMatte * _avPortraitEffectsMatte;
    struct CGImageMetadata { } * metadata;
}

@property (readonly) long long auxiliaryImageType;
@property (readonly) AVPortraitEffectsMatte *avPortraitEffectsMatte;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImageMetadata { }*metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (long long)auxiliaryImageType;
- (id)avPortraitEffectsMatte;
- (struct CGImage { }*)cgImageRef;
- (struct __CVBuffer { }*)cvPixelBufferRef;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)arg1;
- (struct CGImageMetadata { }*)metadata;
- (unsigned int)pixelFormatType;
- (id)underlyingAVPortraitEffectsMatte;

@end
