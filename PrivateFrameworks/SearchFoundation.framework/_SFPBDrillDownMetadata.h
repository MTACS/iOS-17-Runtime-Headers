
@interface _SFPBDrillDownMetadata : PBCodable <NSSecureCoding, _SFPBDrillDownMetadata> {
    NSArray * _cardDomains;
    NSString * _cardIdentifier;
    NSArray * _cardIdentifiers;
    _SFPBCardMetadata * _cardOnlyMetadata;
    _SFPBCardSearchMetadata * _cardSearchMetadata;
    NSString * _debugParams;
    _SFPBEntitySearchMetadata * _entitySearchMetadata;
    _SFPBEntitySearchMetadata * _entitySearchOnlyMetadata;
    NSString * _qtype;
    NSString * _viewConfigName;
    unsigned long long  _whichMetadata;
}

@property (nonatomic, copy) NSArray *cardDomains;
@property (nonatomic, copy) NSString *cardIdentifier;
@property (nonatomic, copy) NSArray *cardIdentifiers;
@property (nonatomic, retain) _SFPBCardMetadata *cardOnlyMetadata;
@property (nonatomic, retain) _SFPBCardSearchMetadata *cardSearchMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugParams;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBEntitySearchMetadata *entitySearchMetadata;
@property (nonatomic, retain) _SFPBEntitySearchMetadata *entitySearchOnlyMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *qtype;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewConfigName;
@property (nonatomic, readonly) unsigned long long whichMetadata;

- (void).cxx_destruct;
- (void)addCardDomains:(id)arg1;
- (void)addCardIdentifiers:(id)arg1;
- (id)cardDomains;
- (id)cardDomainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardDomainsCount;
- (id)cardIdentifier;
- (id)cardIdentifiers;
- (id)cardIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardIdentifiersCount;
- (id)cardOnlyMetadata;
- (id)cardSearchMetadata;
- (void)clearCardDomains;
- (void)clearCardIdentifiers;
- (id)debugParams;
- (id)dictionaryRepresentation;
- (id)entitySearchMetadata;
- (id)entitySearchOnlyMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qtype;
- (bool)readFrom:(id)arg1;
- (void)setCardDomains:(id)arg1;
- (void)setCardIdentifier:(id)arg1;
- (void)setCardIdentifiers:(id)arg1;
- (void)setCardOnlyMetadata:(id)arg1;
- (void)setCardSearchMetadata:(id)arg1;
- (void)setDebugParams:(id)arg1;
- (void)setEntitySearchMetadata:(id)arg1;
- (void)setEntitySearchOnlyMetadata:(id)arg1;
- (void)setQtype:(id)arg1;
- (void)setViewConfigName:(id)arg1;
- (id)viewConfigName;
- (unsigned long long)whichMetadata;
- (void)writeTo:(id)arg1;

@end
