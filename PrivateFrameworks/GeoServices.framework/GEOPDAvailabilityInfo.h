
@interface GEOPDAvailabilityInfo : PBCodable <NSCopying> {
    unsigned int  _availableNum;
    struct { 
        unsigned int has_availableNum : 1; 
        unsigned int has_status : 1; 
        unsigned int has_totalNum : 1; 
    }  _flags;
    int  _status;
    unsigned int  _totalNum;
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
