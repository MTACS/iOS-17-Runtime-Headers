
@interface AVPortraitEffectsMatte : NSObject {
    AVPortraitEffectsMatteInternal * _internal;
}

@property (readonly) struct __CVBuffer { }*mattingImage;
@property (readonly) unsigned int pixelFormatType;

+ (id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+ (void)initialize;
+ (id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg1 error:(id*)arg2;

- (struct __CFString { }*)auxiliaryImageType;
- (struct CGImageMetadata { }*)copyAuxiliaryMetadata;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 auxiliaryMetadata:(struct CGImageMetadata { }*)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 portraitEffectsMatteMetadataDictionary:(id)arg2;
- (struct __CVBuffer { }*)mattingImage;
- (unsigned int)pixelFormatType;
- (id)portraitEffectsMatteByApplyingExifOrientation:(unsigned int)arg1;
- (id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (short)versionMajor;
- (short)versionMinor;

@end
