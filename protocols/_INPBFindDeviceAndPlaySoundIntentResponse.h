
@protocol _INPBFindDeviceAndPlaySoundIntentResponse <NSObject>

@required

+ (Class)devicesFoundType;

- (void)addDevicesFound:(_INPBDeviceDetail *)arg1;
- (void)clearDevicesFounds;
- (_INPBDeviceDetail *)devicesFoundAtIndex:(unsigned long long)arg1;
- (NSArray *)devicesFounds;
- (unsigned long long)devicesFoundsCount;
- (void)setDevicesFounds:(NSArray *)arg1;

@end
