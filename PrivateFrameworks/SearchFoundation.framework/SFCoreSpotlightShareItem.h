
@interface SFCoreSpotlightShareItem : SFShareItem <NSCopying, NSSecureCoding, SFCoreSpotlightShareItem> {
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
    NSString * _shareProviderTypeIdentifier;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *shareProviderTypeIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setShareProviderTypeIdentifier:(id)arg1;
- (id)shareProviderTypeIdentifier;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)searchUI_fetchShareableItemWithCompletionHandler:(id /* block */)arg1;

@end
