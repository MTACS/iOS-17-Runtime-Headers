
@interface MPModelStoreAsset : MPModelObject

@property (nonatomic) unsigned long long accountIdentifier;
@property (nonatomic) long long endpointType;
@property (nonatomic, readonly) bool needsUserUpload;
@property (nonatomic, copy) NSString *redownloadParameters;
@property (getter=isRedownloadable, nonatomic) bool redownloadable;
@property (nonatomic) bool shouldReportPlayEvents;
@property (getter=isSubscriptionRequired, nonatomic) bool subscriptionRequired;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyStoreAssetAccountIdentifier__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetEndpointType__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetNeedsUserUpload__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetRedownloadParameters__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetRedownloadable__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetShouldReportPlayEvents__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetSubscriptionRequired__MAPPING_MISSING__;
+ (id)__accountIdentifier_KEY;
+ (id)__endpointType_KEY;
+ (id)__needsUserUpload_KEY;
+ (id)__redownloadParameters_KEY;
+ (id)__redownloadable_KEY;
+ (id)__shouldReportPlayEvents_KEY;
+ (id)__subscriptionRequired_KEY;
+ (id)allSupportedProperties;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

@end
