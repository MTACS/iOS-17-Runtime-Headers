
@interface BMPBBacklightEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    unsigned long long  _backlightLevel;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int backlightLevel : 1; 
    }  _has;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) unsigned long long backlightLevel;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic) bool hasBacklightLevel;

- (double)absoluteTimestamp;
- (unsigned long long)backlightLevel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasBacklightLevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setBacklightLevel:(unsigned long long)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasBacklightLevel:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
