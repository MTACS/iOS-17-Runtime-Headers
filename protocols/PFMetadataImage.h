
@protocol PFMetadataImage

@required

- (NSNumber *)GIFDelayTime;
- (NSNumber *)HEICSDelayTime;
- (NSNumber *)altitude;
- (NSNumber *)brightness;
- (NSString *)burstUuid;
- (NSString *)cameraSerialNumber;
- (struct CGColorSpace { }*)cgColorSpace;
- (struct CGImageMetadata { }*)cgImageMetadata;
- (NSDictionary *)cgImageProperties;
- (long long)customRendered;
- (NSString *)defaultProfileName;
- (NSString *)deferredPhotoProcessingIdentifier;
- (NSNumber *)digitalZoomRatio;
- (void)enumerateRawThumbnailInfoWithBlock:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, unsigned long long, unsigned long long, unsigned int, bool*, void*
- (NSNumber *)exposureBias;
- (NSNumber *)exposureTime;
- (NSNumber *)fNumber;
- (NSString *)firmware;
- (NSNumber *)flashCompensation;
- (bool)flashFired;
- (NSNumber *)flashValue;
- (NSNumber *)focalLength;
- (NSNumber *)focalLengthIn35mm;
- (NSNumber *)focusDistance;
- (NSNumber *)focusMode;
- (NSArray *)focusPoints;
- (NSDate *)gpsDateTime;
- (NSNumber *)gpsHPositioningError;
- (NSString *)groupingUuid;
- (bool)hasCustomRendered;
- (bool)hasDepthDataAndIsNotRenderedSDOF;
- (bool)hasHDRGainMap;
- (NSNumber *)hdrGain;
- (NSDictionary *)hdrGainMap;
- (NSNumber *)hdrGainMapPercentageValue;
- (NSString *)imageCaptureRequestIdentifier;
- (NSData *)imageData;
- (NSNumber *)imageDirection;
- (NSString *)imageDirectionRef;
- (struct CGImageSource { }*)imageSource;
- (bool)isDeferredPhotoProxy;
- (bool)isDeferredPhotoProxyExpectingDepth;
- (bool)isFrontFacingCamera;
- (bool)isPhotoBooth;
- (bool)isPortrait;
- (bool)isProRAW;
- (bool)isSDOF;
- (bool)isScreenshot;
- (NSNumber *)iso;
- (NSArray *)keywords;
- (NSString *)lensMake;
- (NSNumber *)lensMaximumMM;
- (NSNumber *)lensMinimumMM;
- (NSString *)lensModel;
- (NSNumber *)lightSource;
- (NSNumber *)meteringMode;
- (NSNumber *)nrfSrlStatus;
- (NSString *)ownerName;
- (unsigned long long)photoProcessingFlags;
- (NSString *)photoProcessingIdentifier;
- (unsigned long long)photosAppFeatureFlags;
- (NSString *)portraitInLandscapeCamera;
- (NSString *)profileName;
- (NSNumber *)semanticStylePreset;
- (NSNumber *)semanticStyleRenderingVersion;
- (NSNumber *)semanticStyleToneBias;
- (NSNumber *)semanticStyleWarmthBias;
- (NSNumber *)speed;
- (NSString *)speedRef;
- (NSNumber *)srlCompensationValue;
- (NSString *)userComment;
- (NSNumber *)whiteBalance;
- (NSNumber *)whiteBalanceIndex;

@end
