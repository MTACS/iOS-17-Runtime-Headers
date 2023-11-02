
@protocol _INPBFindDeviceAndPlaySoundIntent <NSObject>

@required

+ (Class)deviceType;

- (void)addDevice:(_INPBDeviceDetail *)arg1;
- (void)clearDevices;
- (_INPBDeviceDetail *)deviceAtIndex:(unsigned long long)arg1;
- (NSArray *)devices;
- (unsigned long long)devicesCount;
- (bool)hasIntentMetadata;
- (bool)hasIsStopRequest;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)isStopRequest;
- (void)setDevices:(NSArray *)arg1;
- (void)setHasIsStopRequest:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setIsStopRequest:(bool)arg1;

@end
