
@protocol _INPBCarHeadUnit <NSObject>

@required

- (NSString *)bluetoothIdentifier;
- (bool)hasBluetoothIdentifier;
- (bool)hasIAP2Identifier;
- (NSString *)iAP2Identifier;
- (void)setBluetoothIdentifier:(NSString *)arg1;
- (void)setIAP2Identifier:(NSString *)arg1;

@end
