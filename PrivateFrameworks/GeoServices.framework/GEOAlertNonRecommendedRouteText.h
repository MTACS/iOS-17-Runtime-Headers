
@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying> {
    GEOPlaceFormattedString * _body;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_body : 1; 
        unsigned int read_responseAlertPrimary : 1; 
        unsigned int read_responseAlertSecondary : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _responseAlertPrimary;
    GEOFormattedString * _responseAlertSecondary;
    GEOPlaceFormattedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPlaceFormattedString *body;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasResponseAlertPrimary;
@property (nonatomic, readonly) bool hasResponseAlertSecondary;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOFormattedString *responseAlertPrimary;
@property (nonatomic, retain) GEOFormattedString *responseAlertSecondary;
@property (nonatomic, retain) GEOPlaceFormattedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)body;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasResponseAlertPrimary;
- (bool)hasResponseAlertSecondary;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseAlertPrimary;
- (id)responseAlertSecondary;
- (void)setBody:(id)arg1;
- (void)setResponseAlertPrimary:(id)arg1;
- (void)setResponseAlertSecondary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
