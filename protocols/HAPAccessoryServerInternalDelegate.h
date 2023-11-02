
@protocol HAPAccessoryServerInternalDelegate <NSObject>

@optional

- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValueForCharacteristic:(HAPCharacteristic *)arg2;
- (NSArray *)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(HAPAccessoryServer *)arg1;

@end
