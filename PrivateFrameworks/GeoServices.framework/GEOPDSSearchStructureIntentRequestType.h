
@interface GEOPDSSearchStructureIntentRequestType : PBCodable <NSCopying> {
    struct { 
        unsigned int has_intentType : 1; 
        unsigned int has_structureType : 1; 
    }  _flags;
    int  _intentType;
    int  _structureType;
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
