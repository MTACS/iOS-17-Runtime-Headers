
@interface NSSAirplaneModeSettingsMsg : PBCodable <NSCopying> {
    bool  _bluetoothOn;
    bool  _cellularOn;
    struct { 
        unsigned int cellularOn : 1; 
    }  _has;
    bool  _wifiOn;
}

@property (nonatomic) bool bluetoothOn;
@property (nonatomic) bool cellularOn;
@property (nonatomic) bool hasCellularOn;
@property (nonatomic) bool wifiOn;

- (bool)bluetoothOn;
- (bool)cellularOn;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCellularOn;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBluetoothOn:(bool)arg1;
- (void)setCellularOn:(bool)arg1;
- (void)setHasCellularOn:(bool)arg1;
- (void)setWifiOn:(bool)arg1;
- (bool)wifiOn;
- (void)writeTo:(id)arg1;

@end
