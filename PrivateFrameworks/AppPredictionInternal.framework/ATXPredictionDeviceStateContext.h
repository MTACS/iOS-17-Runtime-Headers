
@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain {
    bool  _inAirplaneMode;
    bool  _onWifi;
    NSString * _wifiSSID;
}

@property (nonatomic, readonly) bool inAirplaneMode;
@property (nonatomic, readonly) bool onWifi;
@property (nonatomic, readonly) NSString *wifiSSID;

- (void).cxx_destruct;
- (id)description;
- (id)encodeAsProto;
- (bool)inAirplaneMode;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithWifiSSID:(id)arg1 onWifi:(bool)arg2 inAirplaneMode:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPredictionDeviceStateContext:(id)arg1;
- (id)jsonDict;
- (bool)onWifi;
- (id)proto;
- (id)wifiSSID;

@end
