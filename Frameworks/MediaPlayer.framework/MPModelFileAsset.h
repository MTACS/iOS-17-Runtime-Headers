
@interface MPModelFileAsset : MPModelObject

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (setter=setHLSKeyCertificateURL:, nonatomic, copy) NSString *hlsKeyCertificateURL;
@property (setter=setHLSKeyServerProtocol:, nonatomic, copy) NSString *hlsKeyServerProtocol;
@property (setter=setHLSKeyServerURL:, nonatomic, copy) NSString *hlsKeyServerURL;
@property (getter=isNonPurgeable, nonatomic) bool nonPurgeable;
@property (nonatomic) long long protectionType;
@property (nonatomic, copy) NSString *purchaseBundleFilePath;
@property (nonatomic) long long qualityType;
@property (nonatomic) unsigned long long traits;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyFileAssetFilePath__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetFileSize__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetHLSKeyCertificateURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetHLSKeyServerProtocol__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetHLSKeyServerURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetNonPurgeable__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetProtectionType__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetPurchaseBundleFilePath__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetQualityType__MAPPING_MISSING__;
+ (void)__MPModelPropertyFileAssetTraits__MAPPING_MISSING__;
+ (id)__filePath_KEY;
+ (id)__fileSize_KEY;
+ (id)__hlsKeyCertificateURL_KEY;
+ (id)__hlsKeyServerProtocol_KEY;
+ (id)__hlsKeyServerURL_KEY;
+ (id)__nonPurgeable_KEY;
+ (id)__protectionType_KEY;
+ (id)__purchaseBundleFilePath_KEY;
+ (id)__qualityType_KEY;
+ (id)__traits_KEY;
+ (id)allSupportedProperties;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

@end
