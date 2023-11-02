
@interface _SFPBCoreSpotlightShareItem : PBCodable <NSSecureCoding, _SFPBCoreSpotlightShareItem> {
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
    NSString * _shareProviderTypeIdentifier;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *shareProviderTypeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setShareProviderTypeIdentifier:(id)arg1;
- (id)shareProviderTypeIdentifier;
- (void)writeTo:(id)arg1;

@end
