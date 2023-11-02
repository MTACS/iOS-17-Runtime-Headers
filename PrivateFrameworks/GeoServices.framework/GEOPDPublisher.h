
@interface GEOPDPublisher : PBCodable <NSCopying> {
    NSMutableArray * _collectionIds;
    int  _errorState;
    struct { 
        unsigned int has_errorState : 1; 
        unsigned int has_numCollections : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_collectionIds : 1; 
        unsigned int read_name : 1; 
        unsigned int read_photo : 1; 
        unsigned int read_publisherDescriptions : 1; 
        unsigned int read_publisherId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocalizedString * _name;
    unsigned int  _numCollections;
    GEOPDCaptionedPhoto * _photo;
    NSMutableArray * _publisherDescriptions;
    GEOPDMapsIdentifier * _publisherId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
- (id)publisherDescription;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
