
@interface PFImageMetadata : NSObject

+ (id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromImageSource:(struct CGImageSource { }*)arg1 imageIndex:(unsigned long long)arg2;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromPrimaryImageInImageSource:(struct CGImageSource { }*)arg1;
+ (id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(struct CGImageSource { }*)arg1 imageIndex:(unsigned long long)arg2;
+ (id)cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (id)cIImageFromPixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct CGImage { }*)createImageRefFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct CGImage { }*)createImageRefFromAuxiliaryImagePixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct __CVBuffer { }*)createPixelBufferFromAuxiliaryImageInfo:(id)arg1;
+ (id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(struct CGImageMetadata { }*)arg2;
+ (bool)enumerateImageSourceIndexesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (id)imagePropertiesByRemovingKey:(const void*)arg1 dictionaryKey:(const void*)arg2 fromImageProperties:(id)arg3;
+ (bool)imageSourceIsMonoski:(struct CGImageSource { }*)arg1;
+ (bool)imageSourceIsSpatial:(struct CGImageSource { }*)arg1;
+ (bool)metadataTypeRequiresImageSource:(unsigned char)arg1;
+ (bool)queryImagePropertiesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id*)arg3 error:(id*)arg4;
+ (bool)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4;
+ (bool)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 value:(id*)arg4 error:(id*)arg5;
+ (id)transformAuxiliaryImages:(id)arg1 scaleFactor:(double)arg2 applyingOrientation:(unsigned int)arg3;
+ (id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3;
+ (bool)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id*)arg4;

@end
