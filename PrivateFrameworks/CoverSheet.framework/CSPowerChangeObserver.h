
@interface CSPowerChangeObserver : NSObject {
    id /* block */  _block;
    bool  _connectedToPower;
    bool  _isConnectedToQiPower;
    bool  _isConnectedToWirelessInternalCharger;
    bool  _isConnectedToWirelessInternalChargingAccessory;
    <NSObject> * _notificationToken;
    <CSPowerStatusProviding> * _statusProvider;
}

@property (nonatomic, copy) id /* block */ block;
@property (getter=isConnectedToPower, nonatomic) bool connectedToPower;
@property (nonatomic) bool isConnectedToQiPower;
@property (nonatomic) bool isConnectedToWirelessInternalCharger;
@property (nonatomic) bool isConnectedToWirelessInternalChargingAccessory;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)initWithStatusProvider:(id)arg1 notificationName:(id)arg2 updateBlock:(id /* block */)arg3;
- (bool)isConnectedToPower;
- (bool)isConnectedToQiPower;
- (bool)isConnectedToWirelessInternalCharger;
- (bool)isConnectedToWirelessInternalChargingAccessory;
- (void)setBlock:(id /* block */)arg1;
- (void)setConnectedToPower:(bool)arg1;
- (void)setIsConnectedToPower:(bool)arg1;
- (void)setIsConnectedToQiPower:(bool)arg1;
- (void)setIsConnectedToWirelessInternalCharger:(bool)arg1;
- (void)setIsConnectedToWirelessInternalChargingAccessory:(bool)arg1;
- (void)update;

@end
