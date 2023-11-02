
@protocol CPLDerivativeGenerator

@required

+ (bool)canGenerateImageDerivativesFromUTI:(NSString *)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(void *)arg1 withAdjustments:(void *)arg2 destinationDirectory:(void *)arg3 fingerprintScheme:(void *)arg4 derivativesFilter:(void *)arg5 recordChangeType:(void *)arg6 includePosterFrameForVideo:(void *)arg7 completionHandler:(void *)arg8; // needs 8 arg types, found 14: CPLResource *, CPLAdjustments *, NSURL *, CPLFingerprintScheme *, CPLDerivativesFilter *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
+ (bool)isMovieUTI:(NSString *)arg1;
+ (bool)isUnsupportedOriginalFormatError:(NSError *)arg1;

@end
