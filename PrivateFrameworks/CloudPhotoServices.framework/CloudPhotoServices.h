
@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>

+ (unsigned long long)_bestImageResourceTypeForPixelCount:(long long)arg1;
+ (id)_createCPLResourceFromURL:(id)arg1 withResourceType:(unsigned long long)arg2 uniformType:(id)arg3 itemScopedIdentifier:(id)arg4 fingerprintScheme:(id)arg5;
+ (void)_createDerivativeResourcesFromInputURL:(id)arg1 resourceTypes:(id)arg2 withItemScopedIdentifier:(id)arg3 destinationDirectory:(id)arg4 fingerprintScheme:(id)arg5 outputResources:(id)arg6 convertToSRGB:(bool)arg7;
+ (void)_createPosterFrameResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 includeDerivative:(id /* block */)arg3 destinationDirectory:(id)arg4 fingerprintScheme:(id)arg5 outputResources:(id)arg6;
+ (bool)_createVideoResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 videoAdjustments:(id)arg3 resourceType:(unsigned long long)arg4 forIris:(bool)arg5 destinationDirectory:(id)arg6 fingerprintScheme:(id)arg7 outputResources:(id)arg8 error:(id*)arg9;
+ (id)_extractVideoMetadataResourceFrom:(id)arg1 destinationDirectory:(id)arg2 fingerprintScheme:(id)arg3;
+ (id)_filenameForResourceWithItemScopedIdentifier:(id)arg1 resourceType:(unsigned long long)arg2 extension:(id)arg3;
+ (void)_generateImageDerivativeResourcesFromInputResource:(id)arg1 destinationDirectory:(id)arg2 fingerprintScheme:(id)arg3 isAdjusted:(bool)arg4 derivativesFilter:(id)arg5 recordChangeType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
+ (void)_generateVideoDerivativeResourcesFromInputResource:(id)arg1 withCPLAdjustments:(id)arg2 destinationDirectory:(id)arg3 fingerprintScheme:(id)arg4 derivativesFilter:(id)arg5 recordChangeType:(unsigned long long)arg6 includePosterFrame:(bool)arg7 completionHandler:(id /* block */)arg8;
+ (id)_imageServiceClient;
+ (bool)_shouldGenerateHDRMediumVideoDerivative;
+ (bool)_shouldGenerateLargeVideoDerivativeForAVAsset:(id)arg1;
+ (id)_videoServiceClient;
+ (bool)canGenerateImageDerivativesFromUTI:(id)arg1;
+ (id)derivativeImageResourceUniformTypeForResourceType:(unsigned long long)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 fingerprintScheme:(id)arg4 derivativesFilter:(id)arg5 recordChangeType:(unsigned long long)arg6 includePosterFrameForVideo:(bool)arg7 completionHandler:(id /* block */)arg8;
+ (void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 fingerprintScheme:(id)arg4 includePosterFrameForVideo:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (void)generateFullSizeJPEGIfNecessaryFromInputResource:(id)arg1 destinationDirectory:(id)arg2 fingerprintScheme:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)generateGIFForVideoAtURL:(id)arg1 destinationURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)generatePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(long long)arg2 destinationURL:(id)arg3 reason:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)initialize;
+ (bool)isMovieUTI:(id)arg1;
+ (bool)isUnsupportedOriginalFormatError:(id)arg1;
+ (long long)paMediaConversionColorSpaceForCloudPhotoDerivativeColorOutput:(long long)arg1;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(long long)arg3 bakeInOrientation:(bool)arg4 colorOutput:(long long)arg5 reason:(id)arg6 completionHandler:(id /* block */)arg7;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)shouldGenerateVideoDerivativeForAVAsset:(id)arg1 forResourceType:(unsigned long long)arg2 adjusted:(bool)arg3;
+ (id)transcodeVideoAtURL:(id)arg1 withAdjustments:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 reason:(id)arg5 isCancellable:(bool)arg6 completionHandler:(id /* block */)arg7;
+ (id)workQueue;

@end
