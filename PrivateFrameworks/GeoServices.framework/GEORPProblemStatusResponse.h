
@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int has_statusCode : 1; 
    }  _flags;
    NSMutableArray * _problemStatus;
    int  _statusCode;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *problemStatus;
@property (nonatomic) int statusCode;

+ (bool)isValid:(id)arg1;
+ (Class)problemStatusType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addProblemStatus:(id)arg1;
- (void)clearProblemStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)problemStatus;
- (id)problemStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)problemStatusCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setProblemStatus:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
