
@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {
    struct { 
        unsigned int has_minZoom : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_labelLanguage : 1; 
        unsigned int read_labelText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _labelLanguage;
    NSString * _labelText;
    unsigned int  _minZoom;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLabelLanguage;
@property (nonatomic, readonly) bool hasLabelText;
@property (nonatomic) bool hasMinZoom;
@property (nonatomic, retain) NSString *labelLanguage;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic) unsigned int minZoom;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabelLanguage;
- (bool)hasLabelText;
- (bool)hasMinZoom;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)labelLanguage;
- (id)labelText;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minZoom;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMinZoom:(bool)arg1;
- (void)setLabelLanguage:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setMinZoom:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
