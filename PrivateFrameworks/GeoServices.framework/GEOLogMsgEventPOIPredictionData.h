
@interface GEOLogMsgEventPOIPredictionData : PBCodable <NSCopying> {
    double  _confidence;
    struct { 
        unsigned int has_confidence : 1; 
        unsigned int has_muid : 1; 
    }  _flags;
    unsigned long long  _muid;
}

@property (nonatomic) double confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasMuid;
@property (nonatomic) unsigned long long muid;

+ (bool)isValid:(id)arg1;

- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasMuid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
