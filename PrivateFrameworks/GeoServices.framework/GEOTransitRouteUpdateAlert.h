
@interface GEOTransitRouteUpdateAlert : PBCodable <NSCopying> {
    GEOFormattedString * _content;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_content : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSData * _identifier;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *content;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic, retain) GEOFormattedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)content;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContent;
- (bool)hasIdentifier;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
