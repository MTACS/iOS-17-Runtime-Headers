
@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {
    GEOPlaceFormattedString * _body;
    GEOFormattedString * _cardTitle;
    GEOPlaceFormattedString * _commuteTitle;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_body : 1; 
        unsigned int read_cardTitle : 1; 
        unsigned int read_commuteTitle : 1; 
        unsigned int read_routeDescription : 1; 
        unsigned int read_routeTitle : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _routeDescription;
    GEOFormattedString * _routeTitle;
    GEOPlaceFormattedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPlaceFormattedString *body;
@property (nonatomic, retain) GEOFormattedString *cardTitle;
@property (nonatomic, retain) GEOPlaceFormattedString *commuteTitle;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasCardTitle;
@property (nonatomic, readonly) bool hasCommuteTitle;
@property (nonatomic, readonly) bool hasRouteDescription;
@property (nonatomic, readonly) bool hasRouteTitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOFormattedString *routeDescription;
@property (nonatomic, retain) GEOFormattedString *routeTitle;
@property (nonatomic, retain) GEOPlaceFormattedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)body;
- (id)cardTitle;
- (void)clearUnknownFields:(bool)arg1;
- (id)commuteTitle;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasCardTitle;
- (bool)hasCommuteTitle;
- (bool)hasRouteDescription;
- (bool)hasRouteTitle;
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
- (id)routeDescription;
- (id)routeTitle;
- (void)setBody:(id)arg1;
- (void)setCardTitle:(id)arg1;
- (void)setCommuteTitle:(id)arg1;
- (void)setRouteDescription:(id)arg1;
- (void)setRouteTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
