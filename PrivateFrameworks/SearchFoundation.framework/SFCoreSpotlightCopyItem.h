
@interface SFCoreSpotlightCopyItem : SFCopyItem <NSCopying, NSSecureCoding, SFCoreSpotlightCopyItem> {
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
    NSArray * _dataProviderTypeIdentifiers;
    NSArray * _fileProviderTypeIdentifiers;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (nonatomic, copy) NSArray *dataProviderTypeIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *fileProviderTypeIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)dataProviderTypeIdentifiers;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderTypeIdentifiers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setDataProviderTypeIdentifiers:(id)arg1;
- (void)setFileProviderTypeIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)searchUI_copyItemToPasteboard;

@end
