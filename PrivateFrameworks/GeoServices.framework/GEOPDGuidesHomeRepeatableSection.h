
@interface GEOPDGuidesHomeRepeatableSection : PBCodable <NSCopying> {
    NSMutableArray * _carouselGuideIds;
    int  _contentType;
    struct { 
        unsigned int has_contentType : 1; 
        unsigned int has_sectionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_carouselGuideIds : 1; 
        unsigned int read_guidesLocationEntrys : 1; 
        unsigned int read_name : 1; 
        unsigned int read_publisherIds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _guidesLocationEntrys;
    NSString * _name;
    NSMutableArray * _publisherIds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _sectionType;
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
