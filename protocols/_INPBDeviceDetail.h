
@protocol _INPBDeviceDetail <NSObject>

@required

- (int)StringAsDeviceClass:(NSString *)arg1;
- (_INPBDataString *)category;
- (int)deviceClass;
- (NSString *)deviceClassAsString:(int)arg1;
- (_INPBDataString *)deviceName;
- (_INPBContact *)deviceOwner;
- (bool)hasCategory;
- (bool)hasDeviceClass;
- (bool)hasDeviceName;
- (bool)hasDeviceOwner;
- (bool)hasIdentifier;
- (bool)hasProductName;
- (NSString *)identifier;
- (_INPBDataString *)productName;
- (void)setCategory:(_INPBDataString *)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setDeviceName:(_INPBDataString *)arg1;
- (void)setDeviceOwner:(_INPBContact *)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setProductName:(_INPBDataString *)arg1;

@end
