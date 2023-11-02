
@interface _SFPBEntitySearchMetadata : PBCodable <NSSecureCoding, _SFPBEntitySearchMetadata> {
    NSString * _entityIdentifier;
    NSString * _entitySearchQuery;
    NSString * _tokenQuery;
    NSString * _viewConfigName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic, copy) NSString *entitySearchQuery;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tokenQuery;
@property (nonatomic, copy) NSString *viewConfigName;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)entityIdentifier;
- (id)entitySearchQuery;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntitySearchQuery:(id)arg1;
- (void)setTokenQuery:(id)arg1;
- (void)setViewConfigName:(id)arg1;
- (id)tokenQuery;
- (id)viewConfigName;
- (void)writeTo:(id)arg1;

@end
