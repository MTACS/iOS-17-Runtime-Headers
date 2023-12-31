
@interface GEORPTransitPoiCorrections : PBCodable <NSCopying> {
    GEORPAccessPointCorrections * _accessPoint;
    GEORPAmenityCorrections * _amenity;
    NSMutableArray * _businessHours;
    GEORPPlaceContainmentCorrections * _containmentCorrections;
    GEORPCorrectedCoordinate * _coordinate;
    struct { 
        unsigned int has_lineScheduleDelay : 1; 
        unsigned int has_lineShapeIncorrect : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_accessPoint : 1; 
        unsigned int read_amenity : 1; 
        unsigned int read_businessHours : 1; 
        unsigned int read_containmentCorrections : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_mapLocation : 1; 
        unsigned int read_name : 1; 
        unsigned int read_originalName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _lineScheduleDelay;
    bool  _lineShapeIncorrect;
    GEORPMapLocation * _mapLocation;
    NSString * _name;
    NSString * _originalName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPAccessPointCorrections *accessPoint;
@property (nonatomic, retain) GEORPAmenityCorrections *amenity;
@property (nonatomic, retain) NSMutableArray *businessHours;
@property (nonatomic, retain) GEORPPlaceContainmentCorrections *containmentCorrections;
@property (nonatomic, retain) GEORPCorrectedCoordinate *coordinate;
@property (nonatomic, readonly) bool hasAccessPoint;
@property (nonatomic, readonly) bool hasAmenity;
@property (nonatomic, readonly) bool hasContainmentCorrections;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasLineScheduleDelay;
@property (nonatomic) bool hasLineShapeIncorrect;
@property (nonatomic, readonly) bool hasMapLocation;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasOriginalName;
@property (nonatomic) bool lineScheduleDelay;
@property (nonatomic) bool lineShapeIncorrect;
@property (nonatomic, retain) GEORPMapLocation *mapLocation;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *originalName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)businessHoursType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)accessPoint;
- (void)addBusinessHours:(id)arg1;
- (id)amenity;
- (id)businessHours;
- (id)businessHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessHoursCount;
- (void)clearBusinessHours;
- (void)clearUnknownFields:(bool)arg1;
- (id)containmentCorrections;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessPoint;
- (bool)hasAmenity;
- (bool)hasContainmentCorrections;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLineScheduleDelay;
- (bool)hasLineShapeIncorrect;
- (bool)hasMapLocation;
- (bool)hasName;
- (bool)hasOriginalName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)lineScheduleDelay;
- (bool)lineShapeIncorrect;
- (id)mapLocation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)originalName;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPoint:(id)arg1;
- (void)setAmenity:(id)arg1;
- (void)setBusinessHours:(id)arg1;
- (void)setContainmentCorrections:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasLineScheduleDelay:(bool)arg1;
- (void)setHasLineShapeIncorrect:(bool)arg1;
- (void)setLineScheduleDelay:(bool)arg1;
- (void)setLineShapeIncorrect:(bool)arg1;
- (void)setMapLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginalName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
