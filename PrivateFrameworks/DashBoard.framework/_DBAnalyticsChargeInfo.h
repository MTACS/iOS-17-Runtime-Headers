
@interface _DBAnalyticsChargeInfo : _DBAnalyticsTimeAccumulator {
    NSString * _PMUConfiguration;
    NSString * _adapterDescription;
    NSString * _adapterFamily;
    NSString * _current;
    bool  _didChargeDuringSession;
    NSMutableString * _sessionChargingStates;
    NSString * _voltage;
    NSString * _wattage;
    bool  _wireless;
}

@property (nonatomic, copy) NSString *PMUConfiguration;
@property (nonatomic, copy) NSString *adapterDescription;
@property (nonatomic, copy) NSString *adapterFamily;
@property (nonatomic, copy) NSString *current;
@property (nonatomic) bool didChargeDuringSession;
@property (nonatomic, retain) NSMutableString *sessionChargingStates;
@property (nonatomic, copy) NSString *voltage;
@property (nonatomic, copy) NSString *wattage;
@property (getter=isWireless, nonatomic) bool wireless;

- (void).cxx_destruct;
- (id)PMUConfiguration;
- (id)adapterDescription;
- (id)adapterFamily;
- (id)current;
- (bool)didChargeDuringSession;
- (id)init;
- (bool)isWireless;
- (id)sessionChargingStates;
- (void)setAdapterDescription:(id)arg1;
- (void)setAdapterFamily:(id)arg1;
- (void)setCurrent:(id)arg1;
- (void)setDidChargeDuringSession:(bool)arg1;
- (void)setPMUConfiguration:(id)arg1;
- (void)setSessionChargingStates:(id)arg1;
- (void)setVoltage:(id)arg1;
- (void)setWattage:(id)arg1;
- (void)setWireless:(bool)arg1;
- (id)voltage;
- (id)wattage;

@end
