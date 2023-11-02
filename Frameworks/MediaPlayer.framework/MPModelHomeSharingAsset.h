
@interface MPModelHomeSharingAsset : MPModelObject

@property (nonatomic, copy) NSURL *URL;
@property (getter=isAvailable, nonatomic) bool available;
@property (nonatomic, copy) NSURL *protectedContentSupportStorageFileURL;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyHomeSharingAssetAvailable__MAPPING_MISSING__;
+ (void)__MPModelPropertyHomeSharingAssetProtectedContentSupportStorageFileURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyHomeSharingAssetURL__MAPPING_MISSING__;
+ (id)__URL_KEY;
+ (id)__available_KEY;
+ (id)__protectedContentSupportStorageFileURL_KEY;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

@end
