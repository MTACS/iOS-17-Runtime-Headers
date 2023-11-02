
@interface GEORPProblemOptInResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int has_statusCode : 1; 
    }  _flags;
    int  _statusCode;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic) int statusCode;

+ (bool)isValid:(id)arg1;

- (int)StringAsStatusCode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
