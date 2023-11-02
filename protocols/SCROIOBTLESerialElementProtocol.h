
@protocol SCROIOBTLESerialElementProtocol <SCROIOElementProtocol>

@required

- (NSString *)address;
- (CBCentralManager *)central;
- (NSString *)name;
- (CBPeripheral *)peripheral;

@end
