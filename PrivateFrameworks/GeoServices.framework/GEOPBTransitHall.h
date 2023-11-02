
@interface GEOPBTransitHall : PBCodable <GEOTransitNamedItem, NSCopying> {
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_hallIndex : 1; 
        unsigned int has_stationIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_location : 1; 
        unsigned int read_nameDisplayString : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_zoomNames : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _hallIndex;
    GEOLatLng * _location;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _stationIndex;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _zoomNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hallIndex;
@property (nonatomic) bool hasHallIndex;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNameDisplayString;
@property (nonatomic) bool hasStationIndex;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *zoomNames;

+ (bool)isValid:(id)arg1;
+ (Class)zoomNameType;

- (void).cxx_destruct;
- (void)addZoomName:(id)arg1;
- (id)bestName;
- (id)bestNameWithLocale:(out id*)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hallIndex;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHallIndex;
- (bool)hasLocation;
- (bool)hasMuid;
- (bool)hasNameDisplayString;
- (bool)hasStationIndex;
- (bool)hasStyleAttributes;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHallIndex:(unsigned int)arg1;
- (void)setHasHallIndex:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasStationIndex:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStationIndex:(unsigned int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setZoomNames:(id)arg1;
- (unsigned int)stationIndex;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (id)zoomNames;
- (unsigned long long)zoomNamesCount;

@end
