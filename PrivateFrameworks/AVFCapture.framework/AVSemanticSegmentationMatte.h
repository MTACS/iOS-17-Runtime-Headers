
@interface AVSemanticSegmentationMatte : NSObject {
    NSString * _matteType;
    struct __CVBuffer { } * _pixelBuffer;
    int  _version;
}

@property (readonly) NSString *matteType;
@property (readonly) struct __CVBuffer { }*mattingImage;
@property (readonly) unsigned int pixelFormatType;

+ (id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+ (id)_allSupportedSemanticSegmentationMatteTypes;
+ (void)initialize;
+ (id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(struct __CFString { }*)arg1 dictionaryRepresentation:(id)arg2 error:(id*)arg3;

- (struct __CFString { }*)auxiliaryImageType;
- (struct CGImageMetadata { }*)copyAuxiliaryMetadata;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 auxiliaryMetadata:(struct CGImageMetadata { }*)arg3;
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 semanticSegmentationMatteMetadataDictionary:(id)arg3;
- (id)matteType;
- (struct __CVBuffer { }*)mattingImage;
- (unsigned int)pixelFormatType;
- (id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned int)arg1;
- (id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (short)versionMajor;
- (short)versionMinor;

@end
