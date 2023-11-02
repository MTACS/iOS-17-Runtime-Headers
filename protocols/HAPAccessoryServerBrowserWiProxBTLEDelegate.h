
@protocol HAPAccessoryServerBrowserWiProxBTLEDelegate <NSObject>

@required

- (void)accessoryServerBrowserBTLE:(HAPAccessoryServerBrowserWiProxBTLE *)arg1 didDiscoverHAPPeripheral:(HAPBLEPeripheral *)arg2;

@optional

- (CBPeripheral *)retrieveCBPeripheralWithUUID:(NSUUID *)arg1 blePeripheral:(HAPBLEPeripheral *)arg2;

@end
