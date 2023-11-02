
@interface GEORideBookingIntentResponseFailure : PBCodable <NSCopying> {
    int  _failure;
    struct { 
        unsigned int has_failure : 1; 
        unsigned int has_intent : 1; 
    }  _flags;
    int  _intent;
}

@property (nonatomic) int failure;
@property (nonatomic) bool hasFailure;
@property (nonatomic) bool hasIntent;
@property (nonatomic) int intent;

+ (bool)isValid:(id)arg1;

- (int)StringAsFailure:(id)arg1;
- (int)StringAsIntent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failure;
- (id)failureAsString:(int)arg1;
- (bool)hasFailure;
- (bool)hasIntent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)intent;
- (id)intentAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFailure:(int)arg1;
- (void)setHasFailure:(bool)arg1;
- (void)setHasIntent:(bool)arg1;
- (void)setIntent:(int)arg1;
- (void)writeTo:(id)arg1;

@end
