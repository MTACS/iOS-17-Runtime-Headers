
@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {
    int  _deviceBatteryState;
    bool  _deviceInVehicle;
    int  _deviceInterfaceOrientation;
    struct { 
        unsigned int has_deviceBatteryState : 1; 
        unsigned int has_deviceInterfaceOrientation : 1; 
        unsigned int has_deviceInVehicle : 1; 
    }  _flags;
}

@property (nonatomic) int deviceBatteryState;
@property (nonatomic) bool deviceInVehicle;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) bool hasDeviceBatteryState;
@property (nonatomic) bool hasDeviceInVehicle;
@property (nonatomic) bool hasDeviceInterfaceOrientation;

+ (bool)isValid:(id)arg1;

- (int)StringAsDeviceBatteryState:(id)arg1;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceBatteryState;
- (id)deviceBatteryStateAsString:(int)arg1;
- (bool)deviceInVehicle;
- (int)deviceInterfaceOrientation;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDeviceBatteryState;
- (bool)hasDeviceInVehicle;
- (bool)hasDeviceInterfaceOrientation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceBatteryState:(int)arg1;
- (void)setDeviceInVehicle:(bool)arg1;
- (void)setDeviceInterfaceOrientation:(int)arg1;
- (void)setHasDeviceBatteryState:(bool)arg1;
- (void)setHasDeviceInVehicle:(bool)arg1;
- (void)setHasDeviceInterfaceOrientation:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
