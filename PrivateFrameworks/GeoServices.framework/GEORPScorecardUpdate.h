
@interface GEORPScorecardUpdate : PBCodable <NSCopying> {
    int  _action;
    struct { 
        unsigned int has_action : 1; 
    }  _flags;
    GEORPScorecard * _scorecard;
}

@property (nonatomic) int action;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) bool hasScorecard;
@property (nonatomic, retain) GEORPScorecard *scorecard;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasScorecard;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)scorecard;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setScorecard:(id)arg1;
- (void)writeTo:(id)arg1;

@end
