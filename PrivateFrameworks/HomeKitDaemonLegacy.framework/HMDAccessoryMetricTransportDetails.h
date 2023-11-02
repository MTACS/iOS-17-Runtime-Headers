
@interface HMDAccessoryMetricTransportDetails : HMFObject {
    NSString * _accessoryProtocol;
    bool  _isAccessoryBatteryPowered;
    bool  _isAccessoryBridged;
    bool  _isHH2Enabled;
    bool  _isThreadAccessory;
}

@property (nonatomic, copy) NSString *accessoryProtocol;
@property (nonatomic) bool isAccessoryBatteryPowered;
@property (nonatomic) bool isAccessoryBridged;
@property (nonatomic) bool isHH2Enabled;
@property (nonatomic) bool isThreadAccessory;

- (void).cxx_destruct;
- (id)accessoryProtocol;
- (id)attributeDescriptions;
- (id)initWithAccessory:(id)arg1;
- (bool)isAccessoryBatteryPowered;
- (bool)isAccessoryBridged;
- (bool)isHH2Enabled;
- (bool)isThreadAccessory;
- (void)setAccessoryProtocol:(id)arg1;
- (void)setIsAccessoryBatteryPowered:(bool)arg1;
- (void)setIsAccessoryBridged:(bool)arg1;
- (void)setIsHH2Enabled:(bool)arg1;
- (void)setIsThreadAccessory:(bool)arg1;

@end
