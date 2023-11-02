
@interface GEORPDisplayDetails : PBCodable <NSCopying> {
    GEOLocalizedString * _body;
    GEOMapRegion * _displayRegion;
    int  _displayStyle;
    struct { 
        unsigned int has_displayStyle : 1; 
        unsigned int has_mapType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_body : 1; 
        unsigned int read_displayRegion : 1; 
        unsigned int read_outreachLink : 1; 
        unsigned int read_places : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _mapType;
    GEOTextLink * _outreachLink;
    NSMutableArray * _places;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLocalizedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLocalizedString *body;
@property (nonatomic, retain) GEOMapRegion *displayRegion;
@property (nonatomic) int displayStyle;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic) bool hasDisplayStyle;
@property (nonatomic) bool hasMapType;
@property (nonatomic, readonly) bool hasOutreachLink;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) int mapType;
@property (nonatomic, retain) GEOTextLink *outreachLink;
@property (nonatomic, retain) NSMutableArray *places;
@property (nonatomic, retain) GEOLocalizedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)placeType;

- (void).cxx_destruct;
- (int)StringAsDisplayStyle:(id)arg1;
- (int)StringAsMapType:(id)arg1;
- (void)addPlace:(id)arg1;
- (id)body;
- (void)clearPlaces;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (int)displayStyle;
- (id)displayStyleAsString:(int)arg1;
- (bool)hasBody;
- (bool)hasDisplayRegion;
- (bool)hasDisplayStyle;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapType;
- (bool)hasOutreachLink;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outreachLink;
- (id)placeAtIndex:(unsigned long long)arg1;
- (id)places;
- (unsigned long long)placesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setDisplayStyle:(int)arg1;
- (void)setHasDisplayStyle:(bool)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setMapType:(int)arg1;
- (void)setOutreachLink:(id)arg1;
- (void)setPlaces:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
