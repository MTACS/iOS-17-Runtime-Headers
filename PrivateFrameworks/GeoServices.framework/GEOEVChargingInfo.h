
@interface GEOEVChargingInfo : PBCodable <NSCopying> {
    unsigned int  _batteryChargeAfterCharging;
    unsigned int  _batteryPercentageAfterCharging;
    GEOChargerPlugsInfo * _chargerPlugsInfo;
    unsigned int  _chargingTime;
    struct { 
        unsigned int has_batteryChargeAfterCharging : 1; 
        unsigned int has_batteryPercentageAfterCharging : 1; 
        unsigned int has_chargingTime : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int batteryChargeAfterCharging;
@property (nonatomic) unsigned int batteryPercentageAfterCharging;
@property (nonatomic, retain) GEOChargerPlugsInfo *chargerPlugsInfo;
@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) bool hasBatteryChargeAfterCharging;
@property (nonatomic) bool hasBatteryPercentageAfterCharging;
@property (nonatomic, readonly) bool hasChargerPlugsInfo;
@property (nonatomic) bool hasChargingTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)batteryChargeAfterCharging;
- (unsigned int)batteryPercentageAfterCharging;
- (id)chargerPlugsInfo;
- (unsigned int)chargingTime;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBatteryChargeAfterCharging;
- (bool)hasBatteryPercentageAfterCharging;
- (bool)hasChargerPlugsInfo;
- (bool)hasChargingTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBatteryChargeAfterCharging:(unsigned int)arg1;
- (void)setBatteryPercentageAfterCharging:(unsigned int)arg1;
- (void)setChargerPlugsInfo:(id)arg1;
- (void)setChargingTime:(unsigned int)arg1;
- (void)setHasBatteryChargeAfterCharging:(bool)arg1;
- (void)setHasBatteryPercentageAfterCharging:(bool)arg1;
- (void)setHasChargingTime:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
