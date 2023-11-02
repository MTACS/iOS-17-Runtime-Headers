
@interface GEOPlaceIdDetails : PBCodable <NSCopying> {
    unsigned long long  _basemapId;
    unsigned long long  _businessId;
    struct { 
        unsigned int has_basemapId : 1; 
        unsigned int has_businessId : 1; 
        unsigned int has_localSearchProviderId : 1; 
        unsigned int has_resultIndex : 1; 
    }  _flags;
    unsigned int  _localSearchProviderId;
    unsigned int  _resultIndex;
}

@property (nonatomic) unsigned long long basemapId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) bool hasBasemapId;
@property (nonatomic) bool hasBusinessId;
@property (nonatomic) bool hasLocalSearchProviderId;
@property (nonatomic) bool hasResultIndex;
@property (nonatomic) unsigned int localSearchProviderId;
@property (nonatomic) unsigned int resultIndex;

+ (bool)isValid:(id)arg1;

- (unsigned long long)basemapId;
- (unsigned long long)businessId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBasemapId;
- (bool)hasBusinessId;
- (bool)hasLocalSearchProviderId;
- (bool)hasResultIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)localSearchProviderId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resultIndex;
- (void)setBasemapId:(unsigned long long)arg1;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setHasBasemapId:(bool)arg1;
- (void)setHasBusinessId:(bool)arg1;
- (void)setHasLocalSearchProviderId:(bool)arg1;
- (void)setHasResultIndex:(bool)arg1;
- (void)setLocalSearchProviderId:(unsigned int)arg1;
- (void)setResultIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
