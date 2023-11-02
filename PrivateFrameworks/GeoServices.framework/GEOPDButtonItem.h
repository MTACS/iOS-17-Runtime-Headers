
@interface GEOPDButtonItem : PBCodable <NSCopying> {
    int  _buttonType;
    struct { 
        unsigned int has_buttonType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_groupParams : 1; 
        unsigned int read_quickLinkParams : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDGroupParams * _groupParams;
    GEOPDQuickLinkParams * _quickLinkParams;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int buttonType;
@property (nonatomic, retain) GEOPDGroupParams *groupParams;
@property (nonatomic) bool hasButtonType;
@property (nonatomic, readonly) bool hasGroupParams;
@property (nonatomic, readonly) bool hasQuickLinkParams;
@property (nonatomic, retain) GEOPDQuickLinkParams *quickLinkParams;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsButtonType:(id)arg1;
- (int)buttonType;
- (id)buttonTypeAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupParams;
- (bool)hasButtonType;
- (bool)hasGroupParams;
- (bool)hasQuickLinkParams;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)quickLinkParams;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonType:(int)arg1;
- (void)setGroupParams:(id)arg1;
- (void)setHasButtonType:(bool)arg1;
- (void)setQuickLinkParams:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
