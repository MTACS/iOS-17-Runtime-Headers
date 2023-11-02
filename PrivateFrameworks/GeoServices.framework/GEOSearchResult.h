
@interface GEOSearchResult : PBCodable <NSCopying> {
    unsigned long long  _businessId;
    struct { 
        unsigned int has_businessId : 1; 
        unsigned int has_localSearchProviderId : 1; 
        unsigned int has_resultIndex : 1; 
        unsigned int has_resultType : 1; 
        unsigned int has_isEnrichedItem : 1; 
    }  _flags;
    bool  _isEnrichedItem;
    unsigned int  _localSearchProviderId;
    unsigned int  _resultIndex;
    int  _resultType;
}

@property (nonatomic) unsigned long long businessId;
@property (nonatomic) bool hasBusinessId;
@property (nonatomic) bool hasIsEnrichedItem;
@property (nonatomic) bool hasLocalSearchProviderId;
@property (nonatomic) bool hasResultIndex;
@property (nonatomic) bool hasResultType;
@property (nonatomic) bool isEnrichedItem;
@property (nonatomic) unsigned int localSearchProviderId;
@property (nonatomic) unsigned int resultIndex;
@property (nonatomic) int resultType;

+ (bool)isValid:(id)arg1;

- (int)StringAsResultType:(id)arg1;
- (unsigned long long)businessId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBusinessId;
- (bool)hasIsEnrichedItem;
- (bool)hasLocalSearchProviderId;
- (bool)hasResultIndex;
- (bool)hasResultType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEnrichedItem;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)localSearchProviderId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resultIndex;
- (int)resultType;
- (id)resultTypeAsString:(int)arg1;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setHasBusinessId:(bool)arg1;
- (void)setHasIsEnrichedItem:(bool)arg1;
- (void)setHasLocalSearchProviderId:(bool)arg1;
- (void)setHasResultIndex:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setIsEnrichedItem:(bool)arg1;
- (void)setLocalSearchProviderId:(unsigned int)arg1;
- (void)setResultIndex:(unsigned int)arg1;
- (void)setResultType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
