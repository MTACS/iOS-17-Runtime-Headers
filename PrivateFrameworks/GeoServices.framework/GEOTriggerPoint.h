
@interface GEOTriggerPoint : PBCodable <NSCopying> {
    bool  _allowsShifting;
    bool  _countBeforeReferenceOffset;
    struct { 
        unsigned int has_referenceOffsetCm : 1; 
        unsigned int has_time : 1; 
        unsigned int has_allowsShifting : 1; 
        unsigned int has_countBeforeReferenceOffset : 1; 
    }  _flags;
    unsigned int  _referenceOffsetCm;
    unsigned int  _time;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool allowsShifting;
@property (nonatomic) bool countBeforeReferenceOffset;
@property (nonatomic) bool hasAllowsShifting;
@property (nonatomic) bool hasCountBeforeReferenceOffset;
@property (nonatomic) bool hasReferenceOffsetCm;
@property (nonatomic) bool hasTime;
@property (nonatomic) unsigned int referenceOffsetCm;
@property (nonatomic) unsigned int time;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsShifting;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)countBeforeReferenceOffset;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowsShifting;
- (bool)hasCountBeforeReferenceOffset;
- (bool)hasReferenceOffsetCm;
- (bool)hasTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)referenceOffsetCm;
- (void)setAllowsShifting:(bool)arg1;
- (void)setCountBeforeReferenceOffset:(bool)arg1;
- (void)setHasAllowsShifting:(bool)arg1;
- (void)setHasCountBeforeReferenceOffset:(bool)arg1;
- (void)setHasReferenceOffsetCm:(bool)arg1;
- (void)setHasTime:(bool)arg1;
- (void)setReferenceOffsetCm:(unsigned int)arg1;
- (void)setTime:(unsigned int)arg1;
- (unsigned int)time;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
