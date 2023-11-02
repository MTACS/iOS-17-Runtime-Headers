
@interface _SFPBCoreSpotlightButtonItem : PBCodable <NSSecureCoding, _SFPBCoreSpotlightButtonItem> {
    NSArray * _actionItemTypes;
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
    unsigned long long  _uniqueId;
}

@property (nonatomic, copy) NSArray *actionItemTypes;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uniqueId;

- (void).cxx_destruct;
- (id)actionItemTypes;
- (id)actionItemTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionItemTypesCount;
- (void)addActionItemTypes:(id)arg1;
- (id)applicationBundleIdentifier;
- (void)clearActionItemTypes;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionItemTypes:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;
- (void)writeTo:(id)arg1;

@end
