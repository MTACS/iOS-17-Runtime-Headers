
@interface _SFPBPerformEntityQueryCommand : PBCodable <NSSecureCoding, _SFPBPerformEntityQueryCommand> {
    _SFPBDrillDownMetadata * _drilldownMetadata;
    _SFPBColor * _entityBackgroundColor;
    NSString * _entityIdentifier;
    int  _entityType;
    _SFPBDrillDownMetadata * _metadata;
    NSString * _searchString;
    _SFPBSymbolImage * _symbolImage;
    NSString * _tokenString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBDrillDownMetadata *drilldownMetadata;
@property (nonatomic, retain) _SFPBColor *entityBackgroundColor;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic) int entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBDrillDownMetadata *metadata;
@property (nonatomic, copy) NSString *searchString;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBSymbolImage *symbolImage;
@property (nonatomic, copy) NSString *tokenString;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)drilldownMetadata;
- (id)entityBackgroundColor;
- (id)entityIdentifier;
- (int)entityType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setDrilldownMetadata:(id)arg1;
- (void)setEntityBackgroundColor:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSymbolImage:(id)arg1;
- (void)setTokenString:(id)arg1;
- (id)symbolImage;
- (id)tokenString;
- (void)writeTo:(id)arg1;

@end
