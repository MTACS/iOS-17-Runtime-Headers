
@interface GEOPDWifiFingerprint : PBCodable <NSCopying> {
    unsigned int  _confidence;
    struct { 
        unsigned int has_confidence : 1; 
        unsigned int has_labelType : 1; 
        unsigned int has_status : 1; 
    }  _flags;
    int  _labelType;
    int  _status;
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
