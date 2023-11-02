
@interface GEOLogMsgEventServiceMetadata : PBCodable <NSCopying> {
    GEODirectionsRequestResponseAnalyticsData * _directionsMetadata;
    struct { 
        unsigned int has_serviceMetadataType : 1; 
        unsigned int read_directionsMetadata : 1; 
        unsigned int read_placesMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPlacesRequestResponseAnalyticsData * _placesMetadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _serviceMetadataType;
}

@property (nonatomic, retain) GEODirectionsRequestResponseAnalyticsData *directionsMetadata;
@property (nonatomic, readonly) bool hasDirectionsMetadata;
@property (nonatomic, readonly) bool hasPlacesMetadata;
@property (nonatomic) bool hasServiceMetadataType;
@property (nonatomic, retain) GEOPDPlacesRequestResponseAnalyticsData *placesMetadata;
@property (nonatomic) int serviceMetadataType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsServiceMetadataType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsMetadata;
- (bool)hasDirectionsMetadata;
- (bool)hasPlacesMetadata;
- (bool)hasServiceMetadataType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placesMetadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)serviceMetadataType;
- (id)serviceMetadataTypeAsString:(int)arg1;
- (void)setDirectionsMetadata:(id)arg1;
- (void)setHasServiceMetadataType:(bool)arg1;
- (void)setPlacesMetadata:(id)arg1;
- (void)setServiceMetadataType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
