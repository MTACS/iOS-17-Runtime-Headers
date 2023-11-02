
@interface DCIMImageWriter : NSObject

+ (id)defaultFileExtensionForAssetType:(short)arg1;
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)arg1;
+ (id)incomingDirectoryPath;
+ (id)incomingDirectoryPathForPhotoStream;
+ (bool)isLivePhotoFilteredVideoPath:(id)arg1;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)arg1;
+ (short)savedAssetTypeForCameraCapturedAsset;
+ (short)savedAssetTypeForPhotoBoothAsset;
+ (id)sharedDCIMWriter;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(bool)arg3;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(id)arg4 imageSource:(struct CGImageSource { }*)arg5 exifProperties:(id)arg6 imageOrientation:(long long)arg7 thumbnailDataOut:(id*)arg8 imageUTITypeOut:(id*)arg9 exifPropertiesOut:(id*)arg10 isJPEGOut:(bool*)arg11 imageDataOut:(id*)arg12;
+ (void)writeableDataForImageData:(id)arg1 imageUTIType:(id)arg2 imageSource:(struct CGImageSource { }*)arg3 thumbnailDataOut:(id*)arg4 imageUTITypeOut:(id*)arg5 exifPropertiesOut:(id*)arg6 imageDataOut:(id*)arg7;

- (id)_cameraAssetExtensionForType:(short)arg1;
- (bool)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(bool)arg5;
- (int)copyPrimaryFormatImageData:(id)arg1 toURL:(id)arg2 properties:(id)arg3;
- (bool)saveImageJobToDisk:(id)arg1;
- (bool)writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4;

@end
