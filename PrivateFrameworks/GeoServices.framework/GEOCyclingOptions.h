
@interface GEOCyclingOptions : PBCodable <NSCopying> {
    GEOCyclingUserPreferences * _cyclingUserPreferences;
    GEOCyclingVehicleSpecifications * _cyclingVehicleSpecifications;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_cyclingUserPreferences : 1; 
        unsigned int read_cyclingVehicleSpecifications : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOCyclingUserPreferences *cyclingUserPreferences;
@property (nonatomic, retain) GEOCyclingVehicleSpecifications *cyclingVehicleSpecifications;
@property (nonatomic, readonly) bool hasCyclingUserPreferences;
@property (nonatomic, readonly) bool hasCyclingVehicleSpecifications;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cyclingUserPreferences;
- (id)cyclingVehicleSpecifications;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCyclingUserPreferences;
- (bool)hasCyclingVehicleSpecifications;
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
- (void)setCyclingUserPreferences:(id)arg1;
- (void)setCyclingVehicleSpecifications:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
