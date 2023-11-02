
@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {
    bool  _enablePartialClientization;
    struct { 
        unsigned int has_resultProviderId : 1; 
        unsigned int has_enablePartialClientization : 1; 
    }  _flags;
    NSMutableArray * _mapsIds;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
