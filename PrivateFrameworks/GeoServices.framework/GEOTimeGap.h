
@interface GEOTimeGap : PBCodable <NSCopying> {
    struct { 
        unsigned int has_seconds : 1; 
        unsigned int has_subsequentEventId : 1; 
        unsigned int has_ifChained : 1; 
    }  _flags;
    bool  _ifChained;
    unsigned int  _seconds;
    unsigned int  _subsequentEventId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIfChained;
@property (nonatomic) bool hasSeconds;
@property (nonatomic) bool hasSubsequentEventId;
@property (nonatomic) bool ifChained;
@property (nonatomic) unsigned int seconds;
@property (nonatomic) unsigned int subsequentEventId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIfChained;
- (bool)hasSeconds;
- (bool)hasSubsequentEventId;
- (unsigned long long)hash;
- (bool)ifChained;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)seconds;
- (void)setHasIfChained:(bool)arg1;
- (void)setHasSeconds:(bool)arg1;
- (void)setHasSubsequentEventId:(bool)arg1;
- (void)setIfChained:(bool)arg1;
- (void)setSeconds:(unsigned int)arg1;
- (void)setSubsequentEventId:(unsigned int)arg1;
- (unsigned int)subsequentEventId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
