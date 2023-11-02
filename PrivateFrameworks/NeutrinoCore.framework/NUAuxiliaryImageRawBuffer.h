
@interface NUAuxiliaryImageRawBuffer : NSObject <NUAuxiliaryImage> {
    long long  _auxiliaryImageType;
    struct CGImageMetadata { } * _metadata;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (readonly) long long auxiliaryImageType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) struct CGImageMetadata { }*metadata;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (readonly) Class superclass;

- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (long long)auxiliaryImageType;
- (struct CGImage { }*)cgImageRef;
- (struct __CVBuffer { }*)cvPixelBufferRef;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 auxiliaryImageType:(long long)arg2;
- (struct CGImageMetadata { }*)metadata;
- (struct __CVBuffer { }*)pixelBuffer;
- (unsigned int)pixelFormatType;
- (void)setMetadata:(struct CGImageMetadata { }*)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
