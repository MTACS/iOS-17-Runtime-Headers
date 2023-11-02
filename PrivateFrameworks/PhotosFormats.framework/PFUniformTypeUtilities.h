
@interface PFUniformTypeUtilities : NSObject

+ (id)adobeIllustratorType;
+ (id)adobePhotoshopType;
+ (id)apertureLibraryType;
+ (id)avifType;
+ (id)canonCR2RAWImageType;
+ (id)canonCRWRAWImageType;
+ (id)canonTIFFRAWImageType;
+ (bool)filenameExtension:(id)arg1 conformsToOneOfTypes:(id)arg2;
+ (id)fujiRAWImageType;
+ (id)hasselblad3FRRAWImageType;
+ (id)hasselbladFFFRAWImageType;
+ (id)heicSequenceType;
+ (id)iPhotoLibraryType;
+ (id)icoType;
+ (id)imageTypesNotWellSupportedForSharing;
+ (id)imageTypesUnsupportedForImport;
+ (id)jpeg2000Type;
+ (id)jpegXLType;
+ (id)leafamericaRAWImageType;
+ (id)livePhotoBundlePrivateType;
+ (id)livePhotoBundleType;
+ (id)macPaintType;
+ (id)nikonRAWImageType;
+ (id)olympusRAWImageType;
+ (id)openEXRImageType;
+ (id)panasonicRAWImageType;
+ (id)panasonicRW2RAWImageType;
+ (id)pentaxRAWImageType;
+ (id)photosLibraryType;
+ (id)pictType;
+ (id)preferredOrFallbackFilenameExtensionForType:(id)arg1;
+ (id)quicktimeImageType;
+ (id)resourceModelTypeForFilenameExtension:(id)arg1;
+ (id)samsungRAWImageType;
+ (id)sonyARWRAWImageType;
+ (id)supplementalResourceAAEType;
+ (id)supplementalResourceXMPType;
+ (id)supportedAudioTypes;
+ (id)supportedImageTypes;
+ (id)supportedMovieTypes;
+ (bool)type:(id)arg1 conformsToOneOfTypes:(id)arg2;
+ (id)typeForFilenameExtensionOrLastPathComponent:(id)arg1;
+ (id)typeForHFSType:(unsigned int)arg1;
+ (id)typeForHFSType:(unsigned int)arg1 conformingToType:(id)arg2;
+ (id)typeForURL:(id)arg1 error:(id*)arg2;
+ (id)typeWithFilenameExtension:(id)arg1;
+ (id)typeWithFilenameExtension:(id)arg1 conformingToType:(id)arg2;
+ (id)typeWithIdentifier:(id)arg1;
+ (id)typesSupportedForImport;
+ (bool)url:(id)arg1 conformsToOneOfTypes:(id)arg2;
+ (bool)url:(id)arg1 conformsToType:(id)arg2;

@end
