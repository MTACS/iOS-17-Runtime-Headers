
@interface GEOLabelInfo : PBCodable <NSCopying> {
    GEOFormattedString * _detail;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_detail : 1; 
        unsigned int read_iconArtwork : 1; 
        unsigned int read_labelStyleAttributes : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPBTransitArtwork * _iconArtwork;
    GEOStyleAttributes * _labelStyleAttributes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *detail;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic, readonly) bool hasIconArtwork;
@property (nonatomic, readonly) bool hasLabelStyleAttributes;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOPBTransitArtwork *iconArtwork;
@property (nonatomic, retain) GEOStyleAttributes *labelStyleAttributes;
@property (nonatomic, retain) GEOFormattedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (bool)hasDetail;
- (bool)hasIconArtwork;
- (bool)hasLabelStyleAttributes;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)iconArtwork;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)labelStyleAttributes;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setIconArtwork:(id)arg1;
- (void)setLabelStyleAttributes:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
