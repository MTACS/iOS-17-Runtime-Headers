
@interface GEOMiniCard : PBCodable <NSCopying> {
    NSString * _buttonText;
    GEOFormattedString * _detail;
    struct { 
        unsigned int has_shouldEmphasize : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_buttonText : 1; 
        unsigned int read_detail : 1; 
        unsigned int read_metadata : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _metadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _shouldEmphasize;
    GEOFormattedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *buttonText;
@property (nonatomic, retain) GEOFormattedString *detail;
@property (nonatomic, readonly) bool hasButtonText;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasShouldEmphasize;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOFormattedString *metadata;
@property (nonatomic) bool shouldEmphasize;
@property (nonatomic, retain) GEOFormattedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)buttonText;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (bool)hasButtonText;
- (bool)hasDetail;
- (bool)hasMetadata;
- (bool)hasShouldEmphasize;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setHasShouldEmphasize:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setShouldEmphasize:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldEmphasize;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
