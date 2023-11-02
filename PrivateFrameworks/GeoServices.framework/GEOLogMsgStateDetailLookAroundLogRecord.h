
@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying> {
    int  _action;
    struct { 
        unsigned int has_relativeTimestamp : 1; 
        unsigned int has_action : 1; 
        unsigned int has_target : 1; 
    }  _flags;
    double  _relativeTimestamp;
    int  _target;
}

@property (nonatomic) int action;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasRelativeTimestamp;
@property (nonatomic) bool hasTarget;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) int target;

+ (bool)isValid:(id)arg1;

- (int)StringAsAction:(id)arg1;
- (int)StringAsTarget:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasRelativeTimestamp;
- (bool)hasTarget;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)relativeTimestamp;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasRelativeTimestamp:(bool)arg1;
- (void)setHasTarget:(bool)arg1;
- (void)setRelativeTimestamp:(double)arg1;
- (void)setTarget:(int)arg1;
- (int)target;
- (id)targetAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
