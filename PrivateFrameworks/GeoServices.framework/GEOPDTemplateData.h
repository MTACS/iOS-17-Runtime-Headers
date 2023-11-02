
@interface GEOPDTemplateData : PBCodable <NSCopying> {
    bool  _areaHighlight;
    struct { 
        unsigned int has_areaHighlight : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_footer : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_photo : 1; 
        unsigned int read_poiIcon : 1; 
        unsigned int read_subtitle : 1; 
        unsigned int read_timezone : 1; 
        unsigned int read_titles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDDataItem * _footer;
    GEOPDMapsIdentifier * _mapsId;
    GEOPDPhoto * _photo;
    GEOStyleAttributes * _poiIcon;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDDataItem * _subtitle;
    GEOTimezone * _timezone;
    NSMutableArray * _titles;
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
- (id)placeName;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
