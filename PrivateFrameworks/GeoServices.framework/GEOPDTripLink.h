
@interface GEOPDTripLink : PBCodable <NSCopying> {
    struct { 
        unsigned int has_linkId : 1; 
    }  _flags;
    NSData * _linkGeometry;
    unsigned long long  _linkId;
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
