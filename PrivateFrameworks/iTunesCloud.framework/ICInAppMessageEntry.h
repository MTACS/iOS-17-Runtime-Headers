
@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ICIAMApplicationMessage * _applicationMessage;
    NSString * _bundleIdentifier;
    bool  _didCacheRequiredResources;
    bool  _isBadgingApplication;
    NSMutableDictionary * _metadata;
    NSMutableDictionary * _resourceCache;
    bool  _shouldDownloadResources;
}

@property (nonatomic, readonly) ICIAMApplicationMessage *applicationMessage;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) bool didCacheRequiredResources;
@property (nonatomic) bool isBadgingApplication;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic) bool shouldDownloadResources;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allCachedResourceLocations;
- (id)applicationMessage;
- (id)bundleIdentifier;
- (id)cachedLocationForResourceWithIdentifier:(id)arg1;
- (void)clearCachedResources;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didCacheRequiredResources;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationMessage:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isBadgingApplication;
- (id)metadata;
- (void)setCacheLocation:(id)arg1 forResourceWithIdentifier:(id)arg2;
- (void)setDidCacheRequiredResources:(bool)arg1;
- (void)setIsBadgingApplication:(bool)arg1;
- (void)setShouldDownloadResources:(bool)arg1;
- (bool)shouldDownloadResources;
- (void)updateMetadataValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages

- (long long)comparePriorityWithMessageEntry:(id)arg1;

@end
