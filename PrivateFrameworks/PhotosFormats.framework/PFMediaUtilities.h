
@interface PFMediaUtilities : NSObject

+ (id)_cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (id)_cIImageFromPixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct __CVBuffer { }*)_createPixelBufferFromAuxiliaryImageInfo:(id)arg1;
+ (id)_debugDescriptionForAssetURL:(id)arg1;
+ (id)_debugDescriptionForAssetVariants:(id)arg1;
+ (id)_outOfBandHintsForAVAssetProxyOrFileURLAsset:(id)arg1;
+ (id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromImageSource:(struct CGImageSource { }*)arg1 imageIndex:(unsigned long long)arg2;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromPrimaryImageInImageSource:(struct CGImageSource { }*)arg1;
+ (id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(struct CGImageSource { }*)arg1 imageIndex:(unsigned long long)arg2;
+ (id)cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (id)cIImageFromPixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (bool)canGenerateImageDerivativesFromType:(id)arg1;
+ (bool)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg1;
+ (struct CGImage { }*)createImageRefFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct CGImage { }*)createImageRefFromAuxiliaryImagePixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct __CVBuffer { }*)createPixelBufferFromAuxiliaryImageInfo:(id)arg1;
+ (id)debugDescriptionForPlayerItem:(id)arg1;
+ (long long)defaultRasterizationDPI;
+ (long long)devicePerformanceMemoryClass;
+ (id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(struct CGImageMetadata { }*)arg2;
+ (bool)embeddedJPEGSuitableForDerivativesInImageOfType:(id)arg1 url:(id)arg2 imageProperties:(id)arg3;
+ (bool)embeddedJPEGSuitableForDerivativesInRawImageProperties:(id)arg1 enforcePixelCountLimits:(bool)arg2;
+ (bool)enumerateImageSourceIndexesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (void)enumerateVideoTrackFormatDescriptionsInAsset:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)formatDebugDescriptionForVideoTrack:(id)arg1;
+ (id)formattedCameraModelFromCameraModel:(id)arg1 cameraMake:(id)arg2;
+ (unsigned int)fourCharCodeFromString:(id)arg1;
+ (double)gainMapHeadroomForHDRGain:(double)arg1 gainMapValue:(double)arg2;
+ (id)hasEmbeddedJPEGSuitableForDerivativesInImageAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3;
+ (id)hevcProfileInformationForVideoTrackFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { }*)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { }*)arg1 atIndex:(unsigned long long)arg2;
+ (bool)isValidAVFileForURL:(id)arg1;
+ (bool)isValidImageFileForURL:(id)arg1;
+ (id)mainVideoTrackForAsset:(id)arg1;
+ (struct CGSize { double x1; double x2; })maximumImageSizeFromProperties:(id)arg1;
+ (id)outOfBandHintsBase64StringForAVAssetProxyOrFileURLAsset:(id)arg1;
+ (id)outOfBandHintsForURL:(id)arg1;
+ (id)outOfBandHintsForVideoAsset:(id)arg1;
+ (id)protectedTemporaryItemsSubdirectoryName;
+ (long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+ (long long)rawSourceMaximumPixelCountForInteractiveEditing;
+ (id)stringFromFourCharCode:(unsigned int)arg1;
+ (id)transformAuxiliaryImages:(id)arg1 scaleFactor:(double)arg2 applyingOrientation:(unsigned int)arg3;
+ (bool)typeRequiresRasterizationDPI:(id)arg1;
+ (id)urlByAttachingOutOfBandHintsBase64String:(id)arg1 toVideoURL:(id)arg2;

@end
