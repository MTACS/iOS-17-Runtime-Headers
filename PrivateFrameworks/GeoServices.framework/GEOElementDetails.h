
@interface GEOElementDetails : PBCodable <NSCopying> {
    unsigned long long  _businessId;
    unsigned int  _elementIndex;
    int  _elementType;
    struct { 
        unsigned int has_businessId : 1; 
        unsigned int has_elementIndex : 1; 
        unsigned int has_elementType : 1; 
        unsigned int has_localSearchProviderId : 1; 
        unsigned int has_isEnrichedResult : 1; 
    }  _flags;
    bool  _isEnrichedResult;
    unsigned int  _localSearchProviderId;
}

@property (nonatomic) unsigned long long businessId;
@property (nonatomic) unsigned int elementIndex;
@property (nonatomic) int elementType;
@property (nonatomic) bool hasBusinessId;
@property (nonatomic) bool hasElementIndex;
@property (nonatomic) bool hasElementType;
@property (nonatomic) bool hasIsEnrichedResult;
@property (nonatomic) bool hasLocalSearchProviderId;
@property (nonatomic) bool isEnrichedResult;
@property (nonatomic) unsigned int localSearchProviderId;

+ (bool)isValid:(id)arg1;

- (int)StringAsElementType:(id)arg1;
- (unsigned long long)businessId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)elementIndex;
- (int)elementType;
- (id)elementTypeAsString:(int)arg1;
- (bool)hasBusinessId;
- (bool)hasElementIndex;
- (bool)hasElementType;
- (bool)hasIsEnrichedResult;
- (bool)hasLocalSearchProviderId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEnrichedResult;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)localSearchProviderId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setElementIndex:(unsigned int)arg1;
- (void)setElementType:(int)arg1;
- (void)setHasBusinessId:(bool)arg1;
- (void)setHasElementIndex:(bool)arg1;
- (void)setHasElementType:(bool)arg1;
- (void)setHasIsEnrichedResult:(bool)arg1;
- (void)setHasLocalSearchProviderId:(bool)arg1;
- (void)setIsEnrichedResult:(bool)arg1;
- (void)setLocalSearchProviderId:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
