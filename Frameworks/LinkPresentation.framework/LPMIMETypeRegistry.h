
@interface LPMIMETypeRegistry : NSObject

+ (id)MIMETypeForUTI:(id)arg1;
+ (id)UTIForFileExtension:(id)arg1;
+ (id)UTIForMIMEType:(id)arg1;
+ (id)fileExtensionForMIMEType:(id)arg1;
+ (id)fileExtensionForUTI:(id)arg1;
+ (bool)isARAssetType:(id)arg1;
+ (bool)isAudioType:(id)arg1;
+ (bool)isHLSType:(id)arg1;
+ (bool)isImageType:(id)arg1;
+ (bool)isJSONType:(id)arg1;
+ (bool)isLosslessImageType:(id)arg1;
+ (bool)isMediaType:(id)arg1;
+ (bool)isNonAnimatedMultiframeImageType:(id)arg1;
+ (bool)isVideoType:(id)arg1;
+ (bool)isWebPageType:(id)arg1;

@end
