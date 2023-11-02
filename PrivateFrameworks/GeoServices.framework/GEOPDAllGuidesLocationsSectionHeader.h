
@interface GEOPDAllGuidesLocationsSectionHeader : PBCodable <NSCopying> {
    struct { 
        unsigned int has_sectionHeaderType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_headerString : 1; 
        unsigned int read_placeId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _headerString;
    GEOPDMapsIdentifier * _placeId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _sectionHeaderType;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
