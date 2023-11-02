
@interface NUAuxiliaryImageAVDepthData : NSObject <NUAuxiliaryImage> {
    long long  _auxiliaryImageType;
    AVDepthData * _avDepthData;
    struct CGImageMetadata { } * metadata;
}

@property (readonly) long long auxiliaryImageType;
@property (readonly) AVDepthData *avDepthData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImageMetadata { }*metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (long long)auxiliaryImageType;
- (id)avDepthData;
- (struct CGImage { }*)cgImageRef;
- (struct __CVBuffer { }*)cvPixelBufferRef;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (id)initAuxiliaryImageFromAVDepthData:(id)arg1;
- (struct CGImageMetadata { }*)metadata;
- (unsigned int)pixelFormatType;
- (id)underlyingAVDepthData;

@end
