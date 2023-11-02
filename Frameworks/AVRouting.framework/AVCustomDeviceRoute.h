
@interface AVCustomDeviceRoute : NSObject {
    bool  _active;
    NSUUID * _bluetoothIdentifier;
    DADevice * _device;
    NSObject<OS_nw_endpoint> * _networkEndpoint;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic, retain) DADevice *device;
@property (nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;

- (id)bluetoothIdentifier;
- (void)dealloc;
- (id)description;
- (id)device;
- (unsigned long long)hash;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)networkEndpoint;
- (void)setActive:(bool)arg1;
- (void)setBluetoothIdentifier:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setNetworkEndpoint:(id)arg1;

@end
