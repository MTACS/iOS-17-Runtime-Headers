
@interface GEORPAddressCorrections : PBCodable <NSCopying> {
    GEORPAccessPointCorrections * _accessPoint;
    GEORPFeedbackAddressFields * _addressFields;
    GEORPCorrectedCoordinate * _coordinate;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_accessPoint : 1; 
        unsigned int read_addressFields : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_mapLocation : 1; 
        unsigned int read_originalAddressFields : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPMapLocation * _mapLocation;
    GEORPFeedbackAddressFields * _originalAddressFields;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPAccessPointCorrections *accessPoint;
@property (nonatomic, retain) GEORPFeedbackAddressFields *addressFields;
@property (nonatomic, retain) GEORPCorrectedCoordinate *coordinate;
@property (nonatomic, readonly) bool hasAccessPoint;
@property (nonatomic, readonly) bool hasAddressFields;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) bool hasMapLocation;
@property (nonatomic, readonly) bool hasOriginalAddressFields;
@property (nonatomic, retain) GEORPMapLocation *mapLocation;
@property (nonatomic, retain) GEORPFeedbackAddressFields *originalAddressFields;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)accessPoint;
- (id)addressFields;
- (void)clearUnknownFields:(bool)arg1;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessPoint;
- (bool)hasAddressFields;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapLocation;
- (bool)hasOriginalAddressFields;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapLocation;
- (void)mergeFrom:(id)arg1;
- (id)originalAddressFields;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPoint:(id)arg1;
- (void)setAddressFields:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setMapLocation:(id)arg1;
- (void)setOriginalAddressFields:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
