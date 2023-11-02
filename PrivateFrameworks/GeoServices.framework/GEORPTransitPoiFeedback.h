
@interface GEORPTransitPoiFeedback : PBCodable <NSCopying> {
    int  _correctionType;
    GEORPTransitPoiCorrections * _corrections;
    NSMutableArray * _directionsRequests;
    NSMutableArray * _directionsResponses;
    struct { 
        unsigned int has_correctionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_corrections : 1; 
        unsigned int read_directionsRequests : 1; 
        unsigned int read_directionsResponses : 1; 
        unsigned int read_placeRequest : 1; 
        unsigned int read_place : 1; 
        unsigned int read_transitLineTileInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPlace * _place;
    GEOPDPlaceRequest * _placeRequest;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPTransitLineTileInfo * _transitLineTileInfo;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int correctionType;
@property (nonatomic, retain) GEORPTransitPoiCorrections *corrections;
@property (nonatomic, retain) NSMutableArray *directionsRequests;
@property (nonatomic, retain) NSMutableArray *directionsResponses;
@property (nonatomic) bool hasCorrectionType;
@property (nonatomic, readonly) bool hasCorrections;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasPlaceRequest;
@property (nonatomic, readonly) bool hasTransitLineTileInfo;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, retain) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCorrectionType:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionType;
- (id)correctionTypeAsString:(int)arg1;
- (id)corrections;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (id)directionsRequests;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (id)directionsResponses;
- (unsigned long long)directionsResponsesCount;
- (bool)hasCorrectionType;
- (bool)hasCorrections;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPlace;
- (bool)hasPlaceRequest;
- (bool)hasTransitLineTileInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)place;
- (id)placeRequest;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectionType:(int)arg1;
- (void)setCorrections:(id)arg1;
- (void)setDirectionsRequests:(id)arg1;
- (void)setDirectionsResponses:(id)arg1;
- (void)setHasCorrectionType:(bool)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setTransitLineTileInfo:(id)arg1;
- (id)transitLineTileInfo;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
