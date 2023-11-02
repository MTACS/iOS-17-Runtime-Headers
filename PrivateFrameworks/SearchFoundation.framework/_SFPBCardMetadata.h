
@interface _SFPBCardMetadata : PBCodable <NSSecureCoding, _SFPBCardMetadata> {
    bool  _isServerEntity;
    NSString * _queryToSearchAcrossAllDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isServerEntity;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *queryToSearchAcrossAllDomains;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isServerEntity;
- (id)jsonData;
- (id)queryToSearchAcrossAllDomains;
- (bool)readFrom:(id)arg1;
- (void)setIsServerEntity:(bool)arg1;
- (void)setQueryToSearchAcrossAllDomains:(id)arg1;
- (void)writeTo:(id)arg1;

@end
