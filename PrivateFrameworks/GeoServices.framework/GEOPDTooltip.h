
@interface GEOPDTooltip : PBCodable <NSCopying> {
    GEOLocalizedString * _actionLink;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_actionLink : 1; 
        unsigned int read_photo : 1; 
        unsigned int read_subtitle : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPhoto * _photo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLocalizedString * _subtitle;
    GEOLocalizedString * _title;
    PBUnknownFields * _unknownFields;
}

+ (id)tooltipFromPlaceData:(id)arg1;

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
