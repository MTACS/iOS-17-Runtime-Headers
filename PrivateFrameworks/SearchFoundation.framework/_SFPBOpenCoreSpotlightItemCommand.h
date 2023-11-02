
@interface _SFPBOpenCoreSpotlightItemCommand : PBCodable <NSSecureCoding, _SFPBOpenCoreSpotlightItemCommand> {
    NSString * _actionIdentifier;
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionIdentifier;
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
- (void)setActionIdentifier:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
