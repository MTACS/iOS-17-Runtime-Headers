
@interface GEOSharedNavWaypointInfo : PBCodable <NSCopying> {
    GEOSharedNavChargingStationInfo * _chargingStationInfo;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_chargingStationInfo : 1; 
        unsigned int read_mapItemStorage : 1; 
        unsigned int read_uniqueIdentifier : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOMapItemStorage * _mapItemStorage;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _uniqueIdentifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOSharedNavChargingStationInfo *chargingStationInfo;
@property (nonatomic, readonly) bool hasChargingStationInfo;
@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)chargingStationInfo;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChargingStationInfo;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapItemStorage;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingStationInfo:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)name;

@end
