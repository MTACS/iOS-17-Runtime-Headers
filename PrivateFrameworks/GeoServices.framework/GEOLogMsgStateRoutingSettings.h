
@interface GEOLogMsgStateRoutingSettings : PBCodable <NSCopying> {
    GEORoutingSettingsCyclingPrefs * _cyclingPrefs;
    GEORoutingSettingsDrivingPrefs * _drivingPrefs;
    struct { 
        unsigned int read_cyclingPrefs : 1; 
        unsigned int read_drivingPrefs : 1; 
        unsigned int read_virtualGarageSettings : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORoutingSettingsVirtualGarageSetttings * _virtualGarageSettings;
}

@property (nonatomic, retain) GEORoutingSettingsCyclingPrefs *cyclingPrefs;
@property (nonatomic, retain) GEORoutingSettingsDrivingPrefs *drivingPrefs;
@property (nonatomic, readonly) bool hasCyclingPrefs;
@property (nonatomic, readonly) bool hasDrivingPrefs;
@property (nonatomic, readonly) bool hasVirtualGarageSettings;
@property (nonatomic, retain) GEORoutingSettingsVirtualGarageSetttings *virtualGarageSettings;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cyclingPrefs;
- (id)description;
- (id)dictionaryRepresentation;
- (id)drivingPrefs;
- (bool)hasCyclingPrefs;
- (bool)hasDrivingPrefs;
- (bool)hasVirtualGarageSettings;
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
- (void)setCyclingPrefs:(id)arg1;
- (void)setDrivingPrefs:(id)arg1;
- (void)setVirtualGarageSettings:(id)arg1;
- (id)virtualGarageSettings;
- (void)writeTo:(id)arg1;

@end
