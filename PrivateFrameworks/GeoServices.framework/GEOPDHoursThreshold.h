
@interface GEOPDHoursThreshold : PBCodable <NSCopying> {
    unsigned int  _closingSoonMessageThresholdSecond;
    struct { 
        unsigned int has_closingSoonMessageThresholdSecond : 1; 
        unsigned int has_openingSoonMessageThresholdSecond : 1; 
    }  _flags;
    unsigned int  _openingSoonMessageThresholdSecond;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
