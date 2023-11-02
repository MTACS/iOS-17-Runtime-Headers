
@interface _SFPBCardSearchMetadata : PBCodable <NSSecureCoding, _SFPBCardSearchMetadata> {
    bool  _isFederatedDomainSearch;
    bool  _isServerEntity;
    NSString * _searchQuery;
    NSString * _viewConfigName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFederatedDomainSearch;
@property (nonatomic) bool isServerEntity;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *searchQuery;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewConfigName;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFederatedDomainSearch;
- (bool)isServerEntity;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)searchQuery;
- (void)setIsFederatedDomainSearch:(bool)arg1;
- (void)setIsServerEntity:(bool)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setViewConfigName:(id)arg1;
- (id)viewConfigName;
- (void)writeTo:(id)arg1;

@end
