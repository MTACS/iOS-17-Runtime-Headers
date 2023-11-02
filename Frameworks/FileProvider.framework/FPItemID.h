
@interface FPItemID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domainIdentifier;
    NSString * _identifier;
    NSString * _providerID;
}

@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isDiskIdentifier;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerIdentifier;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)coreSpotlightEncodedDomainIdentifier:(id)arg1;
+ (id)csIdentifierFromFPIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (id)fpIdentifierFromCoreSpotlightIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (void)getDomainIdentifier:(id*)arg1 andIdentifier:(id*)arg2 fromCoreSpotlightIdentifier:(id)arg3;
+ (id)rootItemIDWithProviderDomainID:(id)arg1;
+ (id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (id)stringByRemovingPrefix:(id)arg1 fromIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 coreSpotlightIdentifier:(id)arg3;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)initWithSearchableItem:(id)arg1;
- (bool)isDiskIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemID:(id)arg1;
- (bool)isPlaceholder;
- (id)providerDomainID;
- (id)providerID;
- (id)providerIdentifier;
- (void)setProviderDomainID:(id)arg1;
- (id)transformForMigratedCloudDocsProviderDomainIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)br_fpItemIDFromItemIdentifier:(id)arg1;

@end
