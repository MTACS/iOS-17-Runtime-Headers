
@interface ATXPBPredictionDeviceStateContext : PBCodable <NSCopying> {
    struct { 
        unsigned int inAirplaneMode : 1; 
        unsigned int onWifi : 1; 
    }  _has;
    bool  _inAirplaneMode;
    bool  _onWifi;
    NSString * _wifiSSID;
}

@property (nonatomic) bool hasInAirplaneMode;
@property (nonatomic) bool hasOnWifi;
@property (nonatomic, readonly) bool hasWifiSSID;
@property (nonatomic) bool inAirplaneMode;
@property (nonatomic) bool onWifi;
@property (nonatomic, retain) NSString *wifiSSID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInAirplaneMode;
- (bool)hasOnWifi;
- (bool)hasWifiSSID;
- (unsigned long long)hash;
- (bool)inAirplaneMode;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)onWifi;
- (bool)readFrom:(id)arg1;
- (void)setHasInAirplaneMode:(bool)arg1;
- (void)setHasOnWifi:(bool)arg1;
- (void)setInAirplaneMode:(bool)arg1;
- (void)setOnWifi:(bool)arg1;
- (void)setWifiSSID:(id)arg1;
- (id)wifiSSID;
- (void)writeTo:(id)arg1;

@end
