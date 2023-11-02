
@interface GEOTriggerPointRange : PBCodable <NSCopying> {
    unsigned int  _displayTime;
    struct { 
        unsigned int has_displayTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_hideAtPoint : 1; 
        unsigned int read_showAtPoint : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOTriggerPoint * _hideAtPoint;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTriggerPoint * _showAtPoint;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int displayTime;
@property (nonatomic) bool hasDisplayTime;
@property (nonatomic, readonly) bool hasHideAtPoint;
@property (nonatomic, readonly) bool hasShowAtPoint;
@property (nonatomic, retain) GEOTriggerPoint *hideAtPoint;
@property (nonatomic, retain) GEOTriggerPoint *showAtPoint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)displayTime;
- (bool)hasDisplayTime;
- (bool)hasHideAtPoint;
- (bool)hasShowAtPoint;
- (unsigned long long)hash;
- (id)hideAtPoint;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayTime:(unsigned int)arg1;
- (void)setHasDisplayTime:(bool)arg1;
- (void)setHideAtPoint:(id)arg1;
- (void)setShowAtPoint:(id)arg1;
- (id)showAtPoint;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
