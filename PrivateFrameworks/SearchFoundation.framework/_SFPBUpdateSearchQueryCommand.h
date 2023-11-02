
@interface _SFPBUpdateSearchQueryCommand : PBCodable <NSSecureCoding, _SFPBUpdateSearchQueryCommand> {
    int  _querySource;
    NSString * _searchString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int querySource;
@property (nonatomic, copy) NSString *searchString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)querySource;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setQuerySource:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
