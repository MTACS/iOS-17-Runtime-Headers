
@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {
    GEOAddress * _correctedAddress;
    NSString * _correctedAddressSecondaryStreetLine;
    GEOLatLng * _correctedCoordinate;
    NSString * _customLabel;
    struct { 
        unsigned int has_lastUpdateDate : 1; 
        unsigned int has_hasSubmittedRAP : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_correctedAddressSecondaryStreetLine : 1; 
        unsigned int read_correctedAddress : 1; 
        unsigned int read_correctedCoordinate : 1; 
        unsigned int read_customLabel : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _hasSubmittedRAP;
    double  _lastUpdateDate;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOAddress *correctedAddress;
@property (nonatomic, retain) NSString *correctedAddressSecondaryStreetLine;
@property (nonatomic, retain) GEOLatLng *correctedCoordinate;
@property (nonatomic, retain) NSString *customLabel;
@property (nonatomic, readonly) bool hasCorrectedAddress;
@property (nonatomic, readonly) bool hasCorrectedAddressSecondaryStreetLine;
@property (nonatomic, readonly) bool hasCorrectedCoordinate;
@property (nonatomic, readonly) bool hasCustomLabel;
@property (nonatomic) bool hasHasSubmittedRAP;
@property (nonatomic) bool hasLastUpdateDate;
@property (nonatomic) bool hasSubmittedRAP;
@property (nonatomic) double lastUpdateDate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedAddress;
- (id)correctedAddressSecondaryStreetLine;
- (id)correctedCoordinate;
- (id)customLabel;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedAddress;
- (bool)hasCorrectedAddressSecondaryStreetLine;
- (bool)hasCorrectedCoordinate;
- (bool)hasCustomLabel;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHasSubmittedRAP;
- (bool)hasLastUpdateDate;
- (bool)hasSubmittedRAP;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)lastUpdateDate;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedAddress:(id)arg1;
- (void)setCorrectedAddressSecondaryStreetLine:(id)arg1;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)setCustomLabel:(id)arg1;
- (void)setHasHasSubmittedRAP:(bool)arg1;
- (void)setHasLastUpdateDate:(bool)arg1;
- (void)setHasSubmittedRAP:(bool)arg1;
- (void)setLastUpdateDate:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_addressFormattedAsName;
- (id)_addressFormattedAsShortenedAddress;
- (id)_addressFormattedAsSinglelineAddress;
- (id)_formattedPostalAddress;

@end
